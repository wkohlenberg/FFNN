#ifndef NEURON_H
#define NEURON_H

#include <stdio.h>
#include <iostream>
#include <vector>
#include "system.h"
#include "altera_avalon_pio_regs.h"

#define HIGH			1
#define LOW				0

using namespace std;

struct neuron{
	double outputValue;
	vector<double> weight;
};

int initNeuron1(double* inputs, double* weights, int nInputs);
int initNeuron2(double* inputs, double* weights, int nInputs);
int initNeuron3(double* inputs, double* weights, int nInputs);
int initNeuron4(double* inputs, double* weights, int nInputs);
int initNeuron5(double* inputs, double* weights, int nInputs);

double getResultNeuron1();
double getResultNeuron2();
double getResultNeuron3();
double getResultNeuron4();
double getResultNeuron5();

#endif
