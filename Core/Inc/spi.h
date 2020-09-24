/**
  ******************************************************************************
  * File Name          : SPI.h
  * Description        : This file provides code for the configuration
  *                      of the SPI instances.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __spi_H
#define __spi_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern SPI_HandleTypeDef hspi1;
extern SPI_HandleTypeDef hspi2;

/* USER CODE BEGIN Private defines */
#define SPI1_LORA_CS_SEL()      HAL_GPIO_WritePin(SPI1_CS_LORA_GPIO_Port, SPI1_CS_LORA_Pin, GPIO_PIN_RESET)
#define SPI1_LORA_CS_DESEL()    HAL_GPIO_WritePin(SPI1_CS_LORA_GPIO_Port, SPI1_CS_LORA_Pin, GPIO_PIN_SET)

typedef SPI_HandleTypeDef*	PtrHSpi;
typedef struct{
	IrqFlags irqFlags;
//	u8	rxBuffer[UART_SZ_RX_RESPONSE];
	PtrHSpi pHSpi;
}SPIInfo;

extern SPIInfo spiMemInfo;
extern SPIInfo spiLoraInfo;
/* USER CODE END Private defines */

void MX_SPI1_Init(void);
void MX_SPI2_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ spi_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/