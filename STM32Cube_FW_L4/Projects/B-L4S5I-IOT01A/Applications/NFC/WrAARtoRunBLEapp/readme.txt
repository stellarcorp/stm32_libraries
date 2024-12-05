/**
  @page WrAARtoRunBLEapp Readme file
 
  @verbatim
  ******************************************************************************
  * @file    NFC/WrAARtoRunBLEapp/readme.txt 
  * @author  MCD Application Team
  * @brief   This application writes NDEF messages on ST25DV-I2C type 5 NFC tag.
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

@par Application Description

This application aims at showing how to write an AAR NDEF message to an ST25DV-I2C type 5 NFC tag 
so that the BLE STM32 Profiles application is launched on the smartphone when it comes near the 
NFC antenna .

First the NFC component is initialised, the LED2 goes ON to indicate Initialization is terminated.
Then an AAR NDEF message is written such that when the smartphone approaches the NFC antenna 
the BLE STM32 Profiles application is launched on the smartphone.
If the application is not already installed, the smartphone will automatically search it and download it 
from the Google Play store (https://play.google.com/store/apps/details?id=com.stm.bluetoothlevalidation)

@note The ST25DV-I2C NFC Dynamic Tag can only communicate through its NFC or I2C interface at a given time.
      As a result if the NDEF message is written while the smartphone is accessing the ST25DV-I2C,
      the I2C communication could fail. If such error occurs, the LED1 is switched ON.

@note Care must be taken when using HAL_Delay(), this function provides accurate delay (in milliseconds)
      based on variable incremented in SysTick ISR. This implies that if HAL_Delay() is called from
      a peripheral ISR process, then the SysTick interrupt must have higher priority (numerically lower)
      than the peripheral interrupt. Otherwise the caller ISR process will be blocked.
      To change the SysTick interrupt priority you have to use HAL_NVIC_SetPriority() function.
      
@note The application need to ensure that the SysTick time base is always set to 1 millisecond
      to have correct HAL operation.

@par Directory contents 

  - NFC/WriteTag/Src/main.c                Main program file with AARwrite NDEF example.
  - NFC/WriteTag/Src/system_stm32l4xx.c    STM32L4xx system clock configuration file.
  - NFC/WriteTag/Src/stm32l4xx_it.c        STM32 interrupt handlers (M24SR_GPO and user button).
  - NFC/WriteTag/Inc/stm32l4xx_hal_conf.h  HAL configuration file.
  - NFC/WriteTag/Inc/stm32l4xx_it.h        STM32 interrupt handlers header file.
  - NFC/Common/                            These files are Common also to other applic/examples then WriteTag.
  - NFC/Common/lib_nfc/                    This directory contains a set of source files that write NDEF messages
                                           to be exchanged with smartphone devices.
 
@par Hardware and Software environment 

  - This application runs on STM32L4S5XX devices, B-L4S5I-IOT01A board (MB1297) 
    
  - This application has been tested with the following environment:
     - B-L4S5I-IOT01A board. 

  - B-L4S5I-IOT01A Discovery board Set-up    
    - Connect the Discovery board to your PC with a USB cable type A to mini-B 
      to ST-LINK connector (CN1).
    - Please ensure that the ST-LINK connectors and jumpers are fitted.

  - When using Android Phone
    - Activate "NFC"
    - Default Android application should handle the reading of the NFC tag

@par How to use it ? 

In order to make the program work, you must do the following :
  - Open your preferred toolchain 
  - Rebuild all files and load your image into target memory
  - Run the example
 
 */
