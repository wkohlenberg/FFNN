#include <stdio.h>
#include <iostream>
#include <vector>
#include "system.h"
#include "altera_avalon_pio_regs.h"
#include "neuron.h"

using namespace std;

typedef vector<neuron> layer;

void fillVectorWithZeros(vector<double>& v){
	fill(v.begin(), v.end(), 0);
}

int main(){

	vector<layer> nn;
	vector<double> inputVals(5);
	vector<double> weightVals(5);

	//==============================
	// Initialize neural network
	//==============================

	// Input layer - neuron 1
	nn.push_back(layer());
	nn[0].push_back(neuron());
	nn[0][0].weight.push_back(1.24812);
	nn[0][0].weight.push_back(1.32065);
	nn[0][0].weight.push_back(1.31379);
	nn[0][0].weight.push_back(1.98777);

	// Input layer - neuron 2
	nn[0].push_back(neuron());
	nn[0][1].weight.push_back(1.30071);
	nn[0][1].weight.push_back(1.32956);
	nn[0][1].weight.push_back(1.28313);
	nn[0][1].weight.push_back(1.98878);

	// Input layer - neuron 3 (bias)
	nn[0].push_back(neuron());
	nn[0][2].weight.push_back(-0.103341);
	nn[0][2].weight.push_back(-1.84402);
	nn[0][2].weight.push_back(-0.0502788);
	nn[0][2].weight.push_back(-0.592649);
	nn[0][2].outputValue = 1.0;

	// Hidden layer - neuron 1
	nn.push_back(layer());
	nn[1].push_back(neuron());
	nn[1][0].weight.push_back(0.378615);

	// Hidden layer - neuron 2
	nn[1].push_back(neuron());
	nn[1][1].weight.push_back(-2.11147);

	// Hidden layer - neuron 3
	nn[1].push_back(neuron());
	nn[1][2].weight.push_back(0.501982);

	// Hidden layer - neuron 4
	nn[1].push_back(neuron());
	nn[1][3].weight.push_back(1.63749);

	// Hidden layer - neuron 5
	nn[1].push_back(neuron());
	nn[1][4].weight.push_back(-1.07182);
	nn[1][4].outputValue = 1.0;

	// Output layer - neuron 1
	nn.push_back(layer());
	nn[2].push_back(neuron());
	nn[2][0].weight.push_back(1.0);

	nn[2].push_back(neuron());
	nn[2][1].weight.push_back(1.0);
	nn[2][1].outputValue = 1.0;

	//==============================
	// Run neural network
	//==============================

	int portA = 0;
	int portB = 0;

	while(true){

		cout << "Set input port A (0 or 1): ";
		cin >> portA;
		cout << endl << "Set input port B (0 or 1): ";
		cin >> portB;
		cout << endl;

		// Get input values
		nn[0][0].outputValue = (double)portA;
		nn[0][1].outputValue = (double)portB;

		fillVectorWithZeros(inputVals);
		fillVectorWithZeros(weightVals);

		double inputs[5] = {0.0, 0.0, 0.0, 0.0, 0.0};
		double weights[5] = {0.0, 0.0, 0.0, 0.0, 0.0};

		int nInputs = 0;
		for (unsigned k = 1; k < nn.size(); k++){
			layer &prevLayer = nn[k-1];

			for (unsigned n = 0; n < nn[k].size()-1; n++){
				nInputs = 0;
				for (unsigned j = 0; j < prevLayer.size(); j++){
					inputVals[j] = prevLayer[j].outputValue;
					weightVals[j] = prevLayer[j].weight[n];
					nInputs++;

				}

				copy(inputVals.begin(), inputVals.end(), inputs);
				copy(weightVals.begin(), weightVals.end(), weights);

				switch(n){
				case 0:	initNeuron1(inputs, weights, nInputs); break;
				case 1:	initNeuron2(inputs, weights, nInputs); break;
				case 2:	initNeuron3(inputs, weights, nInputs); break;
				case 3:	initNeuron4(inputs, weights, nInputs); break;
				case 4:	initNeuron5(inputs, weights, nInputs); break;
				default: cout << "invalid neuron" << endl;
				}

				fillVectorWithZeros(inputVals);
				fillVectorWithZeros(weightVals);
			}


			for (unsigned n = 0; n < nn[k].size()-1; n++){
				double result = 0.0;

				switch(n){
				case 0: result = getResultNeuron1(); break;
				case 1: result = getResultNeuron2(); break;
				case 2: result = getResultNeuron3(); break;
				case 3: result = getResultNeuron4(); break;
				case 4: result = getResultNeuron5(); break;
				default: cout << "invalid neuron" << endl;
				}

				nn[k][n].outputValue = result;
			}
		}

		cout << "Input is " << nn[0][0].outputValue << " " << nn[0][1].outputValue << endl;
		cout << "Output is " << nn[2][0].outputValue << endl;
	}

  return 0;
}
