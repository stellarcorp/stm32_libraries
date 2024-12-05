/**
  @page LPUART_WakeUpFromStop2_Init LPUART example
  
  @verbatim
  ******************************************************************************
  * @file    Examples_LL/LPUART/LPUART_WakeUpFromStop2_Init/readme.txt 
  * @author  MCD Application Team
  * @brief   Description of the LPUART_WakeUpFromStop2_Init LPUART example.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  @endverbatim

@par Example Description
  
Configuration of GPIO and LPUART peripherals to allow characters 
received on LPUART_RX pin to wake up the MCU from low-power mode. This example is based 
on the LPUART LL API. The peripheral initialization uses LL 
initialization function to demonstrate LL init usage.

LPUART Peripheral is configured in asynchronous mode (9600 bauds, 8 data bit, 1 start bit, 1 stop bit, no parity).
No HW flow control is used.
LPUART Clock is based on HSI.

Example execution:
After startup from reset and system configuration, LED1 is blinking quickly during 3 sec,
then MCU  enters Stop mode 2 (LED1 off).
On first  character reception by the LPUART from PC Com port (ex: using HyperTerminal)
after Stop Mode period, MCU wakes up from Stop Mode.
Received character value is checked :
- On a specific value ('S' or 's'), LED1 is turned On and program ends.
- If different from 'S' or 's', program performs a quick LED1 blinks during 3 sec and 
  enters again Stop mode 2, waiting for next character to wake up.

In case of errors, LED1 is slowly blinking (1 sec period).

@par Directory contents 

  - LPUART/LPUART_WakeUpFromStop2_Init/Inc/stm32l4xx_it.h          Interrupt handlers header file
  - LPUART/LPUART_WakeUpFromStop2_Init/Inc/main.h                  Header for main.c module
  - LPUART/LPUART_WakeUpFromStop2_Init/Inc/stm32_assert.h          Template file to include assert_failed function
  - LPUART/LPUART_WakeUpFromStop2_Init/Src/stm32l4xx_it.c          Interrupt handlers
  - LPUART/LPUART_WakeUpFromStop2_Init/Src/main.c                  Main program
  - LPUART/LPUART_WakeUpFromStop2_Init/Src/system_stm32l4xx.c      STM32L4xx system source file

@par Hardware and Software environment

  - This example runs on STM32L496ZG devices.

  - This example has been tested with NUCLEO-L496ZG (144 pins) board and can be
    easily tailored to any other supported device and development board.

  - NUCLEO-L496ZG (144 pins) Set-up
    - Connect STM32 MCU board LPUART1 TX pin (GPIO PC1 connected to pin 36 of CN11 connector)
      to PC COM port RX signal
    - Connect STM32 MCU board LPUART1 RX pin (GPIO PC0 connected to pin 38 of CN11 connector)
      to PC COM port TX signal
    - Connect STM32 MCU board GND to PC COM port GND signal

@par How to use it ? 

In order to make the program work, you must do the following :
 - Open your preferred toolchain
 - Rebuild all files and load your image into target memory
 - Run the example

 */
