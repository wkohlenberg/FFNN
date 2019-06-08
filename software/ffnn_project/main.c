#include <stdio.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"

int main()
{
  printf("Hello from Nios II!\n");

  // initialize
  // Send start signal
  //IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_1_BASE, 0);

  int input_1 = 255;
  int input_2 = 0;
  int input_3 = 255;
  printf("input 1: %d\n", input_1);
  printf("input 2: %d\n", input_2);
  printf("input 3: %d\n", input_3);
  double dWeight_1 = 1.21412 * 256.0;
  double dWeight_2 = 1.32035 * 256.0;
  double dWeight_3 = 0.30859375 * 256.0;

  int iWeight_1 = (int)dWeight_1;
  int iWeight_2 = (int)dWeight_2;
  int iWeight_3 = (int)dWeight_3;
  printf("weight 1: %d\n", iWeight_1);
  printf("weight 2: %d\n", iWeight_2);
  printf("weight 3: %d\n", iWeight_3);

  // Send input data like inputs, weights etc.
  IOWR_ALTERA_AVALON_PIO_DATA(INPUT_1_NEURON_1_BASE, input_1);
  IOWR_ALTERA_AVALON_PIO_DATA(INPUT_2_NEURON_1_BASE, input_2);
  IOWR_ALTERA_AVALON_PIO_DATA(INPUT_3_NEURON_1_BASE, input_3);
  IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_1_NEURON_1_BASE, iWeight_1);
  IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_2_NEURON_1_BASE, iWeight_2);
  IOWR_ALTERA_AVALON_PIO_DATA(WEIGHT_3_NEURON_1_BASE, iWeight_3);

  // Send number of inputs
  int nInputs = 3-1;				// counting starts with zero
  IOWR_ALTERA_AVALON_PIO_DATA(NINPUTS_NEURON_1_BASE, nInputs);

  printf("Ready flag before start signal: %d\n", IORD_ALTERA_AVALON_PIO_DATA(READY_NEURON_1_BASE));		// this should be zero

  // Send start signal
  printf("Send start signal...");
  for (int i = 0; i<1000000;i++){}
  IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_1_BASE, 1);

  // Wait for ready signal
  int ready = 0;
  do{
	  ready = IORD_ALTERA_AVALON_PIO_DATA(READY_NEURON_1_BASE);
  }while(ready != 1);

  // Send start signal - set back to idle
  //IOWR_ALTERA_AVALON_PIO_DATA(START_NEURON_1_BASE, 0);
  //printf("Set start signal at 0");

  // read result from neuron
  int result = IORD_ALTERA_AVALON_PIO_DATA(OUTPUT_NEURON_1_BASE);
  printf("result: %d\n", result);
  double dResult = (double)result / 256.0;

  printf("Output of neuron is %f\n", dResult);


  return 0;
}
