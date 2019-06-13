#include "neuron.h"

int initNeuron1(double* inputs, double* weights, int nInputs){

	// Set start bit low
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_1_BASE, LOW);

	// Convert decimals to binary
	double convInput[5];
	double convWeight[5];
	for (int i = 0; i < 5; i++){
		convInput[i] = (int)(inputs[i] * 255.0);
		convWeight[i] = (int)(weights[i] * 255.0);
	}

	// Send inputs
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_1_NEURON_1_BASE, convInput[0]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_2_NEURON_1_BASE, convInput[1]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_3_NEURON_1_BASE, convInput[2]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_4_NEURON_1_BASE, convInput[3]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_5_NEURON_1_BASE, convInput[4]);

	// Send weights
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_1_NEURON_1_BASE, convWeight[0]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_2_NEURON_1_BASE, convWeight[1]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_3_NEURON_1_BASE, convWeight[2]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_4_NEURON_1_BASE, convWeight[3]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_5_NEURON_1_BASE, convWeight[4]);

	// Send number of inputs used
	IOWR_ALTERA_AVALON_PIO_DATA(NINPUTS_NEURON_1_BASE, (nInputs-1));

	// Send start bit
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_1_BASE, HIGH);

	return 0;
}

int initNeuron2(double* inputs, double* weights, int nInputs){

	// Set start bit low
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_2_BASE, LOW);

	// Convert decimals to binary
	double convInput[5];
	double convWeight[5];
	for (int i = 0; i < 5; i++){
		convInput[i] = (int)(inputs[i] * 255.0);
		convWeight[i] = (int)(weights[i] * 255.0);
	}

	// Send inputs
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_1_NEURON_2_BASE, convInput[0]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_2_NEURON_2_BASE, convInput[1]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_3_NEURON_2_BASE, convInput[2]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_4_NEURON_2_BASE, convInput[3]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_5_NEURON_2_BASE, convInput[4]);

	// Send weights
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_1_NEURON_2_BASE, convWeight[0]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_2_NEURON_2_BASE, convWeight[1]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_3_NEURON_2_BASE, convWeight[2]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_4_NEURON_2_BASE, convWeight[3]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_5_NEURON_2_BASE, convWeight[4]);

	// Send number of inputs used
	IOWR_ALTERA_AVALON_PIO_DATA(NINPUTS_NEURON_2_BASE, (nInputs-1));

	// Send start bit
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_2_BASE, HIGH);

	return 0;
}

int initNeuron3(double* inputs, double* weights, int nInputs){

	// Set start bit low
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_3_BASE, LOW);

	// Convert decimals to binary
	double convInput[5];
	double convWeight[5];
	for (int i = 0; i < 5; i++){
		convInput[i] = (int)(inputs[i] * 255.0);
		convWeight[i] = (int)(weights[i] * 255.0);
	}

	// Send inputs
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_1_NEURON_3_BASE, convInput[0]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_2_NEURON_3_BASE, convInput[1]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_3_NEURON_3_BASE, convInput[2]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_4_NEURON_3_BASE, convInput[3]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_5_NEURON_3_BASE, convInput[4]);

	// Send weights
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_1_NEURON_3_BASE, convWeight[0]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_2_NEURON_3_BASE, convWeight[1]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_3_NEURON_3_BASE, convWeight[2]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_4_NEURON_3_BASE, convWeight[3]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_5_NEURON_3_BASE, convWeight[4]);

	// Send number of inputs used
	IOWR_ALTERA_AVALON_PIO_DATA(NINPUTS_NEURON_3_BASE, (nInputs-1));

	// Send start bit
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_3_BASE, HIGH);

	return 0;
}

int initNeuron4(double* inputs, double* weights, int nInputs){

	// Set start bit low
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_4_BASE, LOW);

	// Convert decimals to binary
	double convInput[5];
	double convWeight[5];
	for (int i = 0; i < 5; i++){
		convInput[i] = (int)(inputs[i] * 255.0);
		convWeight[i] = (int)(weights[i] * 255.0);
	}

	// Send inputs
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_1_NEURON_4_BASE, convInput[0]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_2_NEURON_4_BASE, convInput[1]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_3_NEURON_4_BASE, convInput[2]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_4_NEURON_4_BASE, convInput[3]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_5_NEURON_4_BASE, convInput[4]);

	// Send weights
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_1_NEURON_4_BASE, convWeight[0]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_2_NEURON_4_BASE, convWeight[1]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_3_NEURON_4_BASE, convWeight[2]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_4_NEURON_4_BASE, convWeight[3]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_5_NEURON_4_BASE, convWeight[4]);

	// Send number of inputs used
	IOWR_ALTERA_AVALON_PIO_DATA(NINPUTS_NEURON_4_BASE, (nInputs-1));

	// Send start bit
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_4_BASE, HIGH);

	return 0;
}

int initNeuron5(double* inputs, double* weights, int nInputs){

	// Set start bit low
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_5_BASE, LOW);

	// Convert decimals to binary
	double convInput[5];
	double convWeight[5];
	for (int i = 0; i < 5; i++){
		convInput[i] = (int)(inputs[i] * 255.0);
		convWeight[i] = (int)(weights[i] * 255.0);
	}

	// Send inputs
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_1_NEURON_5_BASE, convInput[0]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_2_NEURON_5_BASE, convInput[1]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_3_NEURON_5_BASE, convInput[2]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_4_NEURON_5_BASE, convInput[3]);
	IOWR_ALTERA_AVALON_PIO_DATA(INPUT_5_NEURON_5_BASE, convInput[4]);

	// Send weights
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_1_NEURON_5_BASE, convWeight[0]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_2_NEURON_5_BASE, convWeight[1]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_3_NEURON_5_BASE, convWeight[2]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_4_NEURON_5_BASE, convWeight[3]);
	IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_5_NEURON_5_BASE, convWeight[4]);

	// Send number of inputs used
	IOWR_ALTERA_AVALON_PIO_DATA(NINPUTS_NEURON_5_BASE, (nInputs-1));

	// Send start bit
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_5_BASE, HIGH);

	return 0;
}

double getResultNeuron1(){

	// Wait for ready signal
	//while (IORD_ALTERA_AVALON_PIO_DATA(READY_NEURON_1_BASE) == 0){}
	int ready = 0;
	do{
	  ready = IORD_ALTERA_AVALON_PIO_DATA(READY_NEURON_1_BASE);
	}while(ready != 1);

	// Send start signal - set back to idle
	int result = IORD_ALTERA_AVALON_PIO_DATA(OUTPUT_NEURON_1_BASE);
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_1_BASE, LOW);

	return (double)result / 255.0;	// convert binary to double
}

double getResultNeuron2(){

	// Wait for ready signal
	//while (IORD_ALTERA_AVALON_PIO_DATA(READY_NEURON_2_BASE) == 0){}
	int ready = 0;
	do{
	  ready = IORD_ALTERA_AVALON_PIO_DATA(READY_NEURON_2_BASE);
	}while(ready != 1);

	// Send start signal - set back to idle
	int result = IORD_ALTERA_AVALON_PIO_DATA(OUTPUT_NEURON_2_BASE);
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_2_BASE, LOW);

	return (double)result / 255.0;	// convert binary to double
}

double getResultNeuron3(){

	// Wait for ready signal
	//while (IORD_ALTERA_AVALON_PIO_DATA(READY_NEURON_3_BASE) == 0){}
	int ready = 0;
	do{
	  ready = IORD_ALTERA_AVALON_PIO_DATA(READY_NEURON_3_BASE);
	}while(ready != 1);

	// Send start signal - set back to idle
	int result = IORD_ALTERA_AVALON_PIO_DATA(OUTPUT_NEURON_3_BASE);
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_3_BASE, LOW);

	return (double)result / 255.0;	// convert binary to double
}

double getResultNeuron4(){

	// Wait for ready signal
	//while (IORD_ALTERA_AVALON_PIO_DATA(READY_NEURON_4_BASE) == 0){}
	int ready = 0;
	do{
	  ready = IORD_ALTERA_AVALON_PIO_DATA(READY_NEURON_4_BASE);
	}while(ready != 1);

	// Send start signal - set back to idle
	int result = IORD_ALTERA_AVALON_PIO_DATA(OUTPUT_NEURON_4_BASE);
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_4_BASE, LOW);

	return (double)result / 255.0;	// convert binary to double
}

double getResultNeuron5(){

	// Wait for ready signal
	//while (IORD_ALTERA_AVALON_PIO_DATA(READY_NEURON_5_BASE) == 0){}
	int ready = 0;
	do{
	  ready = IORD_ALTERA_AVALON_PIO_DATA(READY_NEURON_5_BASE);
	}while(ready != 1);

	// Send start signal - set back to idle
	int result = IORD_ALTERA_AVALON_PIO_DATA(OUTPUT_NEURON_5_BASE);
	IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_5_BASE, LOW);

	return (double)result / 255.0;	// convert binary to double
}
