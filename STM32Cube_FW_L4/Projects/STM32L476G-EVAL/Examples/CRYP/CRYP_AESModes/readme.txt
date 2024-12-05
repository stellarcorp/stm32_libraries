/**
  @page CRYP_AESModes  Encrypt and Decrypt data using AES Algo in ECB/CBC/CTR
  chaining modes with all possible key sizes.
  
  @verbatim
  ******************************************************************************
  * @file    CRYP/CRYP_AESModes/readme.txt 
  * @author  MCD Application Team
  * @brief   Description of the CRYP AES Algorithm in all modes and all key sizes
             Example
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

How to use the CRYP peripheral to encrypt and decrypt data using AES in chaining
modes (ECB, CBC, CTR).

In this example, the following key sizes are used: 128 or 256.

Ciphering/Deciphering with a 128-bit long key is used in polling mode with data type set to 8-bit (byte swapping).
Ciphering/Deciphering with a 256-bit long key is used in interrupt mode with data type set to 32-bit (no swapping).
For ECB and CBC, key derivation is carried out at the same time as decryption.

With the 256-bit long key processing, the ciphering output is used as deciphering input. 

This example successively carries out

1. ECB mode:
   - AES128 ECB encryption
   - AES256 ECB encryption
   - AES128 ECB decryption and key derivation
   - AES256 ECB decryption and key derivation
2. CBC mode:
   - AES128 CBC encryption
   - AES256 CBC encryption
   - AES128 CBC decryption and key derivation
   - AES256 CBC decryption and key derivation
3. CTR mode:
   - AES128 CTR encryption
   - AES256 CTR encryption
   - AES128 CTR decryption
   - AES256 CTR decryption

When resorting to IAR Embedded Workbench IDE, plain data, encrypted data and decrypted
data are displayed on debugger Terminal I/O as follows: View --> Terminal I/O.
When resorting to MDK-ARM KEIL IDE, plain data, encrypted data and decrypted 
data are displayed on debugger as follows:  View --> Serial Viewer --> Debug (printf) Viewer.
When resorting to ATOLLIC TrueSTUDIO IDE:  debug --> view--> others-->SWV console.
 When resorting to STM32CubeIDE:
 Command Code is displayed on debugger as follows: Window--> Show View--> Console.
 In Debug configuration : 

- Window\Debugger, select the Debug probe : ST-LINK(OpenOCD)
- Window\Startup,add the command "monitor arm semihosting enable"
 
When all ciphering and deciphering operations are successful, LED1 is turned on.
In case of ciphering or deciphering issue, LED3 is turned on. 


  
@par Directory contents 

  - CRYP/CRYP_AESModes/Inc/stm32l4xx_hal_conf.h    HAL configuration file
  - CRYP/CRYP_AESModes/Inc/stm32l4xx_it.h          Interrupt handlers header file
  - CRYP/CRYP_AESModes/Inc/main.h                  Header for main.c module  
  - CRYP/CRYP_AESModes/Src/stm32l4xx_it.c          Interrupt handlers
  - CRYP/CRYP_AESModes/Src/main.c                  Main program
  - CRYP/CRYP_AESModes/Src/stm32l4xx_hal_msp.c     HAL MSP module
  - CRYP/CRYP_AESModes/Src/system_stm32l4xx.c      STM32L4xx system source file


@par Hardware and Software environment

   - This example runs on STM32L486xx devices.
  
    - This example has been tested with a STM32L486ZG embedded on an 
    STM32L476G-EVAL board and can be easily tailored to any other supported 
    device and development board.


@par How to use it ? 

In order to make the program work, you must do the following:
 - Open your preferred toolchain 
 - Rebuild all files and load your image into target memory
 - Run the example


 */
