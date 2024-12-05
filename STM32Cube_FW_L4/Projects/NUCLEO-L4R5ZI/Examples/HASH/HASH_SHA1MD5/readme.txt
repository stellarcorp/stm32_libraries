/**
  @page HASH_SHA1MD5  HASH digest calculation using SHA1 and MD5 example
  
  @verbatim
  ******************************************************************************
  * @file    HASH/HASH_SHA1MD5/readme.txt
  * @author  MCD Application Team
  * @brief   Description of the digest calculation using SHA1 and MD5 example.
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

How to use the HASH peripheral to hash data with SHA-1 and MD5 algorithms.

For this example, DMA is not used for data transfer, the CPU is using HASH peripheral in
polling mode.

The SHA-1 message digest result is a 160-bit long data and the MD5 message digest result 
is a 128-bit long data.

The expected HASH digests (for SHA1 and MD5) are already computed using an online
HASH tool. Those values are compared to those computed by the HASH peripheral.

When SHA1 (respectively MD5) digest computation is successful, LED1 (resp. LED2) is turned on.
In case of digest computation or initialization issue, LED3 is turned on. 



@par Directory contents 

  - HASH/HASH_SHA1MD5/Inc/stm32l4xx_hal_conf.h    HAL configuration file
  - HASH/HASH_SHA1MD5/Inc/stm32l4xx_it.h          Interrupt handlers header file
  - HASH/HASH_SHA1MD5/Inc/main.h                  Header for main.c module  
  - HASH/HASH_SHA1MD5/Src/stm32l4xx_it.c          Interrupt handlers
  - HASH/HASH_SHA1MD5/Src/main.c                  Main program
  - HASH/HASH_SHA1MD5/Src/stm32l4xx_hal_msp.c     HAL MSP module
  - HASH/HASH_SHA1MD5/Src/system_stm32l4xx.c      STM32L4xx system source file


@par Hardware and Software environment

    - This example runs on STM32L4S5xx devices.
  
    - This example has been tested with a STM32L4S5xx mounted on a 
    Nucleo (144 pins) board and can be easily tailored to any other supported 
    device and development board.

@par How to use it ? 

In order to make the program work, you must do the following :
 - Open your preferred toolchain 
 - Rebuild all files and load your image into target memory
 - Run the example 


 */
 