/**
  ******************************************************************************
  * @file    BSP/BSP/Src/stm32l4xx_it.c
  * @author  MCD Application Team
  * @brief   Main Interrupt Service Routines.
  *          This file provides template for all exceptions handler and
  *          peripherals interrupt service routine.
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
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32l4xx_it.h"

/** @addtogroup STM32L4xx_HAL_Examples
  * @{
  */

/** @addtogroup BSP
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
extern SAI_HandleTypeDef                haudio_out_sai;
extern DFSDM_Filter_HandleTypeDef       haudio_in_dfsdm_leftfilter;
extern DFSDM_Filter_HandleTypeDef       haudio_in_dfsdm_rightfilter;
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/******************************************************************************/
/*            Cortex-M4 Processor Exceptions Handlers                         */
/******************************************************************************/

/**
  * @brief   This function handles NMI exception.
  * @param  None
  * @retval None
  */
void NMI_Handler(void)
{
}

/**
  * @brief  This function handles Hard Fault exception.
  * @param  None
  * @retval None
  */
void HardFault_Handler(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Memory Manage exception.
  * @param  None
  * @retval None
  */
void MemManage_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Bus Fault exception.
  * @param  None
  * @retval None
  */
void BusFault_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Usage Fault exception.
  * @param  None
  * @retval None
  */
void UsageFault_Handler(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles SVCall exception.
  * @param  None
  * @retval None
  */
void SVC_Handler(void)
{
}

/**
  * @brief  This function handles Debug Monitor exception.
  * @param  None
  * @retval None
  */
void DebugMon_Handler(void)
{
}

/**
  * @brief  This function handles PendSVC exception.
  * @param  None
  * @retval None
  */
void PendSV_Handler(void)
{
}

/**
  * @brief  This function handles SysTick Handler.
  * @param  None
  * @retval None
  */
void SysTick_Handler(void)
{
  HAL_IncTick();
}

/******************************************************************************/
/*                 STM32L4xx Peripherals Interrupt Handlers                   */
/*  Add here the Interrupt Handler for the used peripheral(s) (PPP), for the  */
/*  available peripheral interrupt handler's name please refer to the startup */
/*  file (startup_stm32l4xx.s).                                               */
/******************************************************************************/


/**
  * @brief  This function handles External line 10 to 15 interrupt request.
  * @param  None
  * @retval None
  */
void EXTI15_10_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(TAMPER_BUTTON_PIN);
  HAL_GPIO_EXTI_IRQHandler(JOYSTICK_PIN);  
}

/**
  * @brief  This function handles SAI1 interrupt request.
  * @param  None
  * @retval None
  */
void SAI1_IRQHandler(void)
{
  HAL_SAI_IRQHandler(&haudio_out_sai);
}

/**
  * @brief  This function handles SAI DMA interrupt request.
  * @param  None
  * @retval None
  */
void AUDIO_SAIx_DMAx_IRQHandler(void)
{ 
  HAL_DMA_IRQHandler(haudio_out_sai.hdmatx);
}

/**
  * @brief  This function handles DFSDM Left DMAinterrupt request.
  * @param  None
  * @retval None
  */
void AUDIO_DFSDM_DMAx_LEFT_IRQHandler(void)
{ 
  HAL_DMA_IRQHandler(haudio_in_dfsdm_leftfilter.hdmaReg);
}

/**
  * @brief  This function handles DFSDM Right DMAinterrupt request.
  * @param  None
  * @retval None
  */
void AUDIO_DFSDM_DMAx_RIGHT_IRQHandler(void)
{ 
  HAL_DMA_IRQHandler(haudio_in_dfsdm_rightfilter.hdmaReg);
}

/**
  * @brief  This function handles SD Detect interrupt request.
  * @param  None
  * @retval None
  */
void SD_Detect_IRQHandler(void)
{ 
  HAL_GPIO_EXTI_IRQHandler(SD_DETECT_PIN);  
}
/**
  * @}
  */

/**
  * @}
  */
