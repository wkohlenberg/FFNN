#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct neuron{
	double outputValue;
	vector<double> weight;
	int index;
};

typedef vector<neuron> layer;

int main(){

	vector<layer> nn;

	// init neural network
	// Input layer - neuron 1
	nn.push_back(layer());
	nn[0].push_back(neuron());
	nn[0][0].index = 0;
	nn[0][0].weight.push_back(1.21412);
	nn[0][0].weight.push_back(1.32108);
	nn[0][0].weight.push_back(1.05897);
	nn[0][0].weight.push_back(2.10684);

	// Input layer - neuron 2
	nn[0].push_back(neuron());
	nn[0][1].index = 1;
	nn[0][1].weight.push_back(1.24111);
	nn[0][1].weight.push_back(1.32035);
	nn[0][1].weight.push_back(0.96077);
	nn[0][1].weight.push_back(2.09624);

	// Input layer - neuron 3 (bias)
	nn[0].push_back(neuron());
	nn[0][2].index = 2;
	nn[0][2].weight.push_back(-0.108725);
	nn[0][2].weight.push_back(-1.82137);
	nn[0][2].weight.push_back(0.0733085);
	nn[0][2].weight.push_back(-0.65867);
	nn[0][2].outputValue = 1.0;

	// Hidden layer - neuron 1
	nn.push_back(layer());
	nn[1].push_back(neuron());
	nn[1][0].index = 0;
	nn[1][0].weight.push_back(0.311878);

	// Hidden layer - neuron 2
	nn[1].push_back(neuron());
	nn[1][1].index = 1;
	nn[1][1].weight.push_back(-2.09625);

	// Hidden layer - neuron 3
	nn[1].push_back(neuron());
	nn[1][2].index = 2;
	nn[1][2].weight.push_back(0.083319);

	// Hidden layer - neuron 4
	nn[1].push_back(neuron());
	nn[1][3].index = 3;
	nn[1][3].weight.push_back(1.86014);

	// Hidden layer - neuron 5
	nn[1].push_back(neuron());
	nn[1][4].index = 4;
	nn[1][4].weight.push_back(-0.885639);
	nn[1][4].outputValue = 1.0;

	// Output layer - neuron 1
	nn.push_back(layer());
	nn[2].push_back(neuron());
	nn[2][0].index = 0;
	nn[2][0].weight.push_back(1.0);

	nn[2].push_back(neuron());
	nn[2][1].index = 1;
	nn[2][1].weight.push_back(1.0);
	nn[2][1].outputValue = 1.0;

	//=============================================
	// set input for neural network
	nn[0][0].outputValue = 1.0;
	nn[0][1].outputValue = 1.0;

	double sum = 0.0;
	for (unsigned k = 1; k < nn.size(); k++){
		layer &prevLayer = nn[k-1];

		for (unsigned j = 0; j < nn[k].size()-1; j++){
			sum = 0.0;

			cout << endl << "Neuron " << k << "." << j << ": " << endl;
			//cout << prevLayer.size() << endl;
			for (unsigned i = 0; i < prevLayer.size(); i++){
				sum += prevLayer[i].weight[j] * prevLayer[i].outputValue;
				//cout << sum << endl;
				cout << prevLayer[i].weight[j] << " "
					 << prevLayer[i].outputValue << endl;
			}

			// transfer function
			nn[k][j].outputValue = tanh(sum);

			/*cout << "Neuron " << k << "." << j << ": ";
			cout << nn[k][j].outputValue << endl;*/
		}
	}

	cout << "Output: "
		 << nn[2][0].outputValue << " "
		 << nn[2][1].outputValue << endl;

	return 0;
}
