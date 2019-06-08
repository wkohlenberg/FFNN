/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'layer_controller'
 * SOPC Builder design path: ../../layer_controller.sopcinfo
 *
 * Generated: Fri Jun 07 13:52:23 CEST 2019
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00008820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1b
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x04000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x1b
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x04000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00008820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x1b
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x04000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x1b
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x04000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_GEN2


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x9150
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x9150
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x9150
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "layer_controller"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * input_1_neuron_1 configuration
 *
 */

#define ALT_MODULE_CLASS_input_1_neuron_1 altera_avalon_pio
#define INPUT_1_NEURON_1_BASE 0x9120
#define INPUT_1_NEURON_1_BIT_CLEARING_EDGE_REGISTER 0
#define INPUT_1_NEURON_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define INPUT_1_NEURON_1_CAPTURE 0
#define INPUT_1_NEURON_1_DATA_WIDTH 9
#define INPUT_1_NEURON_1_DO_TEST_BENCH_WIRING 0
#define INPUT_1_NEURON_1_DRIVEN_SIM_VALUE 0
#define INPUT_1_NEURON_1_EDGE_TYPE "NONE"
#define INPUT_1_NEURON_1_FREQ 50000000
#define INPUT_1_NEURON_1_HAS_IN 0
#define INPUT_1_NEURON_1_HAS_OUT 1
#define INPUT_1_NEURON_1_HAS_TRI 0
#define INPUT_1_NEURON_1_IRQ -1
#define INPUT_1_NEURON_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INPUT_1_NEURON_1_IRQ_TYPE "NONE"
#define INPUT_1_NEURON_1_NAME "/dev/input_1_neuron_1"
#define INPUT_1_NEURON_1_RESET_VALUE 0
#define INPUT_1_NEURON_1_SPAN 16
#define INPUT_1_NEURON_1_TYPE "altera_avalon_pio"


/*
 * input_2_neuron_1 configuration
 *
 */

#define ALT_MODULE_CLASS_input_2_neuron_1 altera_avalon_pio
#define INPUT_2_NEURON_1_BASE 0x9110
#define INPUT_2_NEURON_1_BIT_CLEARING_EDGE_REGISTER 0
#define INPUT_2_NEURON_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define INPUT_2_NEURON_1_CAPTURE 0
#define INPUT_2_NEURON_1_DATA_WIDTH 9
#define INPUT_2_NEURON_1_DO_TEST_BENCH_WIRING 0
#define INPUT_2_NEURON_1_DRIVEN_SIM_VALUE 0
#define INPUT_2_NEURON_1_EDGE_TYPE "NONE"
#define INPUT_2_NEURON_1_FREQ 50000000
#define INPUT_2_NEURON_1_HAS_IN 0
#define INPUT_2_NEURON_1_HAS_OUT 1
#define INPUT_2_NEURON_1_HAS_TRI 0
#define INPUT_2_NEURON_1_IRQ -1
#define INPUT_2_NEURON_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INPUT_2_NEURON_1_IRQ_TYPE "NONE"
#define INPUT_2_NEURON_1_NAME "/dev/input_2_neuron_1"
#define INPUT_2_NEURON_1_RESET_VALUE 0
#define INPUT_2_NEURON_1_SPAN 16
#define INPUT_2_NEURON_1_TYPE "altera_avalon_pio"


/*
 * input_3_neuron_1 configuration
 *
 */

#define ALT_MODULE_CLASS_input_3_neuron_1 altera_avalon_pio
#define INPUT_3_NEURON_1_BASE 0x90b0
#define INPUT_3_NEURON_1_BIT_CLEARING_EDGE_REGISTER 0
#define INPUT_3_NEURON_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define INPUT_3_NEURON_1_CAPTURE 0
#define INPUT_3_NEURON_1_DATA_WIDTH 9
#define INPUT_3_NEURON_1_DO_TEST_BENCH_WIRING 0
#define INPUT_3_NEURON_1_DRIVEN_SIM_VALUE 0
#define INPUT_3_NEURON_1_EDGE_TYPE "NONE"
#define INPUT_3_NEURON_1_FREQ 50000000
#define INPUT_3_NEURON_1_HAS_IN 0
#define INPUT_3_NEURON_1_HAS_OUT 1
#define INPUT_3_NEURON_1_HAS_TRI 0
#define INPUT_3_NEURON_1_IRQ -1
#define INPUT_3_NEURON_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INPUT_3_NEURON_1_IRQ_TYPE "NONE"
#define INPUT_3_NEURON_1_NAME "/dev/input_3_neuron_1"
#define INPUT_3_NEURON_1_RESET_VALUE 0
#define INPUT_3_NEURON_1_SPAN 16
#define INPUT_3_NEURON_1_TYPE "altera_avalon_pio"


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x9150
#define JTAG_UART_IRQ 0
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * leds configuration
 *
 */

#define ALT_MODULE_CLASS_leds altera_avalon_pio
#define LEDS_BASE 0x9140
#define LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDS_CAPTURE 0
#define LEDS_DATA_WIDTH 8
#define LEDS_DO_TEST_BENCH_WIRING 0
#define LEDS_DRIVEN_SIM_VALUE 0
#define LEDS_EDGE_TYPE "NONE"
#define LEDS_FREQ 50000000
#define LEDS_HAS_IN 0
#define LEDS_HAS_OUT 1
#define LEDS_HAS_TRI 0
#define LEDS_IRQ -1
#define LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDS_IRQ_TYPE "NONE"
#define LEDS_NAME "/dev/leds"
#define LEDS_RESET_VALUE 0
#define LEDS_SPAN 16
#define LEDS_TYPE "altera_avalon_pio"


/*
 * nInputs_neuron_1 configuration
 *
 */

#define ALT_MODULE_CLASS_nInputs_neuron_1 altera_avalon_pio
#define NINPUTS_NEURON_1_BASE 0x90c0
#define NINPUTS_NEURON_1_BIT_CLEARING_EDGE_REGISTER 0
#define NINPUTS_NEURON_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define NINPUTS_NEURON_1_CAPTURE 0
#define NINPUTS_NEURON_1_DATA_WIDTH 3
#define NINPUTS_NEURON_1_DO_TEST_BENCH_WIRING 0
#define NINPUTS_NEURON_1_DRIVEN_SIM_VALUE 0
#define NINPUTS_NEURON_1_EDGE_TYPE "NONE"
#define NINPUTS_NEURON_1_FREQ 50000000
#define NINPUTS_NEURON_1_HAS_IN 0
#define NINPUTS_NEURON_1_HAS_OUT 1
#define NINPUTS_NEURON_1_HAS_TRI 0
#define NINPUTS_NEURON_1_IRQ -1
#define NINPUTS_NEURON_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define NINPUTS_NEURON_1_IRQ_TYPE "NONE"
#define NINPUTS_NEURON_1_NAME "/dev/nInputs_neuron_1"
#define NINPUTS_NEURON_1_RESET_VALUE 0
#define NINPUTS_NEURON_1_SPAN 16
#define NINPUTS_NEURON_1_TYPE "altera_avalon_pio"


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x0
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "layer_controller_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 26000
#define ONCHIP_MEMORY2_0_SPAN 26000
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * output_neuron_1 configuration
 *
 */

#define ALT_MODULE_CLASS_output_neuron_1 altera_avalon_pio
#define OUTPUT_NEURON_1_BASE 0x90e0
#define OUTPUT_NEURON_1_BIT_CLEARING_EDGE_REGISTER 0
#define OUTPUT_NEURON_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define OUTPUT_NEURON_1_CAPTURE 0
#define OUTPUT_NEURON_1_DATA_WIDTH 9
#define OUTPUT_NEURON_1_DO_TEST_BENCH_WIRING 0
#define OUTPUT_NEURON_1_DRIVEN_SIM_VALUE 0
#define OUTPUT_NEURON_1_EDGE_TYPE "NONE"
#define OUTPUT_NEURON_1_FREQ 50000000
#define OUTPUT_NEURON_1_HAS_IN 1
#define OUTPUT_NEURON_1_HAS_OUT 0
#define OUTPUT_NEURON_1_HAS_TRI 0
#define OUTPUT_NEURON_1_IRQ -1
#define OUTPUT_NEURON_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define OUTPUT_NEURON_1_IRQ_TYPE "NONE"
#define OUTPUT_NEURON_1_NAME "/dev/output_neuron_1"
#define OUTPUT_NEURON_1_RESET_VALUE 0
#define OUTPUT_NEURON_1_SPAN 16
#define OUTPUT_NEURON_1_TYPE "altera_avalon_pio"


/*
 * ready_neuron_1 configuration
 *
 */

#define ALT_MODULE_CLASS_ready_neuron_1 altera_avalon_pio
#define READY_NEURON_1_BASE 0x90d0
#define READY_NEURON_1_BIT_CLEARING_EDGE_REGISTER 0
#define READY_NEURON_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define READY_NEURON_1_CAPTURE 0
#define READY_NEURON_1_DATA_WIDTH 1
#define READY_NEURON_1_DO_TEST_BENCH_WIRING 0
#define READY_NEURON_1_DRIVEN_SIM_VALUE 0
#define READY_NEURON_1_EDGE_TYPE "NONE"
#define READY_NEURON_1_FREQ 50000000
#define READY_NEURON_1_HAS_IN 1
#define READY_NEURON_1_HAS_OUT 0
#define READY_NEURON_1_HAS_TRI 0
#define READY_NEURON_1_IRQ -1
#define READY_NEURON_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define READY_NEURON_1_IRQ_TYPE "NONE"
#define READY_NEURON_1_NAME "/dev/ready_neuron_1"
#define READY_NEURON_1_RESET_VALUE 0
#define READY_NEURON_1_SPAN 16
#define READY_NEURON_1_TYPE "altera_avalon_pio"


/*
 * sdram configuration
 *
 */

#define ALT_MODULE_CLASS_sdram altera_avalon_new_sdram_controller
#define SDRAM_BASE 0x4000000
#define SDRAM_CAS_LATENCY 3
#define SDRAM_CONTENTS_INFO
#define SDRAM_INIT_NOP_DELAY 0.0
#define SDRAM_INIT_REFRESH_COMMANDS 2
#define SDRAM_IRQ -1
#define SDRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_IS_INITIALIZED 1
#define SDRAM_NAME "/dev/sdram"
#define SDRAM_POWERUP_DELAY 100.0
#define SDRAM_REFRESH_PERIOD 15.625
#define SDRAM_REGISTER_DATA_IN 1
#define SDRAM_SDRAM_ADDR_WIDTH 0x18
#define SDRAM_SDRAM_BANK_WIDTH 2
#define SDRAM_SDRAM_COL_WIDTH 9
#define SDRAM_SDRAM_DATA_WIDTH 16
#define SDRAM_SDRAM_NUM_BANKS 4
#define SDRAM_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_SDRAM_ROW_WIDTH 13
#define SDRAM_SHARED_DATA 0
#define SDRAM_SIM_MODEL_BASE 0
#define SDRAM_SPAN 33554432
#define SDRAM_STARVATION_INDICATOR 0
#define SDRAM_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_T_AC 5.5
#define SDRAM_T_MRD 3
#define SDRAM_T_RCD 20.0
#define SDRAM_T_RFC 70.0
#define SDRAM_T_RP 20.0
#define SDRAM_T_WR 14.0


/*
 * start_neuron_1 configuration
 *
 */

#define ALT_MODULE_CLASS_start_neuron_1 altera_avalon_pio
#define START_NEURON_1_BASE 0x9130
#define START_NEURON_1_BIT_CLEARING_EDGE_REGISTER 0
#define START_NEURON_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define START_NEURON_1_CAPTURE 0
#define START_NEURON_1_DATA_WIDTH 1
#define START_NEURON_1_DO_TEST_BENCH_WIRING 0
#define START_NEURON_1_DRIVEN_SIM_VALUE 0
#define START_NEURON_1_EDGE_TYPE "NONE"
#define START_NEURON_1_FREQ 50000000
#define START_NEURON_1_HAS_IN 0
#define START_NEURON_1_HAS_OUT 1
#define START_NEURON_1_HAS_TRI 0
#define START_NEURON_1_IRQ -1
#define START_NEURON_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define START_NEURON_1_IRQ_TYPE "NONE"
#define START_NEURON_1_NAME "/dev/start_neuron_1"
#define START_NEURON_1_RESET_VALUE 0
#define START_NEURON_1_SPAN 16
#define START_NEURON_1_TYPE "altera_avalon_pio"


/*
 * weight_1_neuron_1 configuration
 *
 */

#define ALT_MODULE_CLASS_weight_1_neuron_1 altera_avalon_pio
#define WEIGHT_1_NEURON_1_BASE 0x9100
#define WEIGHT_1_NEURON_1_BIT_CLEARING_EDGE_REGISTER 0
#define WEIGHT_1_NEURON_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define WEIGHT_1_NEURON_1_CAPTURE 0
#define WEIGHT_1_NEURON_1_DATA_WIDTH 17
#define WEIGHT_1_NEURON_1_DO_TEST_BENCH_WIRING 0
#define WEIGHT_1_NEURON_1_DRIVEN_SIM_VALUE 0
#define WEIGHT_1_NEURON_1_EDGE_TYPE "NONE"
#define WEIGHT_1_NEURON_1_FREQ 50000000
#define WEIGHT_1_NEURON_1_HAS_IN 0
#define WEIGHT_1_NEURON_1_HAS_OUT 1
#define WEIGHT_1_NEURON_1_HAS_TRI 0
#define WEIGHT_1_NEURON_1_IRQ -1
#define WEIGHT_1_NEURON_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define WEIGHT_1_NEURON_1_IRQ_TYPE "NONE"
#define WEIGHT_1_NEURON_1_NAME "/dev/weight_1_neuron_1"
#define WEIGHT_1_NEURON_1_RESET_VALUE 0
#define WEIGHT_1_NEURON_1_SPAN 16
#define WEIGHT_1_NEURON_1_TYPE "altera_avalon_pio"


/*
 * weight_2_neuron_1 configuration
 *
 */

#define ALT_MODULE_CLASS_weight_2_neuron_1 altera_avalon_pio
#define WEIGHT_2_NEURON_1_BASE 0x90f0
#define WEIGHT_2_NEURON_1_BIT_CLEARING_EDGE_REGISTER 0
#define WEIGHT_2_NEURON_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define WEIGHT_2_NEURON_1_CAPTURE 0
#define WEIGHT_2_NEURON_1_DATA_WIDTH 17
#define WEIGHT_2_NEURON_1_DO_TEST_BENCH_WIRING 0
#define WEIGHT_2_NEURON_1_DRIVEN_SIM_VALUE 0
#define WEIGHT_2_NEURON_1_EDGE_TYPE "NONE"
#define WEIGHT_2_NEURON_1_FREQ 50000000
#define WEIGHT_2_NEURON_1_HAS_IN 0
#define WEIGHT_2_NEURON_1_HAS_OUT 1
#define WEIGHT_2_NEURON_1_HAS_TRI 0
#define WEIGHT_2_NEURON_1_IRQ -1
#define WEIGHT_2_NEURON_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define WEIGHT_2_NEURON_1_IRQ_TYPE "NONE"
#define WEIGHT_2_NEURON_1_NAME "/dev/weight_2_neuron_1"
#define WEIGHT_2_NEURON_1_RESET_VALUE 0
#define WEIGHT_2_NEURON_1_SPAN 16
#define WEIGHT_2_NEURON_1_TYPE "altera_avalon_pio"


/*
 * weight_3_neuron_1 configuration
 *
 */

#define ALT_MODULE_CLASS_weight_3_neuron_1 altera_avalon_pio
#define WEIGHT_3_NEURON_1_BASE 0x90a0
#define WEIGHT_3_NEURON_1_BIT_CLEARING_EDGE_REGISTER 0
#define WEIGHT_3_NEURON_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define WEIGHT_3_NEURON_1_CAPTURE 0
#define WEIGHT_3_NEURON_1_DATA_WIDTH 17
#define WEIGHT_3_NEURON_1_DO_TEST_BENCH_WIRING 0
#define WEIGHT_3_NEURON_1_DRIVEN_SIM_VALUE 0
#define WEIGHT_3_NEURON_1_EDGE_TYPE "NONE"
#define WEIGHT_3_NEURON_1_FREQ 50000000
#define WEIGHT_3_NEURON_1_HAS_IN 0
#define WEIGHT_3_NEURON_1_HAS_OUT 1
#define WEIGHT_3_NEURON_1_HAS_TRI 0
#define WEIGHT_3_NEURON_1_IRQ -1
#define WEIGHT_3_NEURON_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define WEIGHT_3_NEURON_1_IRQ_TYPE "NONE"
#define WEIGHT_3_NEURON_1_NAME "/dev/weight_3_neuron_1"
#define WEIGHT_3_NEURON_1_RESET_VALUE 0
#define WEIGHT_3_NEURON_1_SPAN 16
#define WEIGHT_3_NEURON_1_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
