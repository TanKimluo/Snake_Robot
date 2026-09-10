/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define M5PWM_Pin GPIO_PIN_5
#define M5PWM_GPIO_Port GPIOE
#define M8PWM_Pin GPIO_PIN_6
#define M8PWM_GPIO_Port GPIOE
#define M8IN2_Pin GPIO_PIN_13
#define M8IN2_GPIO_Port GPIOC
#define M8IN1_Pin GPIO_PIN_14
#define M8IN1_GPIO_Port GPIOC
#define TB_STBY4_Pin GPIO_PIN_15
#define TB_STBY4_GPIO_Port GPIOC
#define M7IN1_Pin GPIO_PIN_2
#define M7IN1_GPIO_Port GPIOC
#define M7IN2_Pin GPIO_PIN_3
#define M7IN2_GPIO_Port GPIOC
#define M7PWM_Pin GPIO_PIN_0
#define M7PWM_GPIO_Port GPIOA
#define LAN_NRST_Pin GPIO_PIN_3
#define LAN_NRST_GPIO_Port GPIOA
#define TCA_RESET_Pin GPIO_PIN_8
#define TCA_RESET_GPIO_Port GPIOE
#define M4PWM_Pin GPIO_PIN_9
#define M4PWM_GPIO_Port GPIOE
#define M4IN2_Pin GPIO_PIN_10
#define M4IN2_GPIO_Port GPIOE
#define M4IN1_Pin GPIO_PIN_11
#define M4IN1_GPIO_Port GPIOE
#define TB_STBY2_Pin GPIO_PIN_12
#define TB_STBY2_GPIO_Port GPIOE
#define M3IN1_Pin GPIO_PIN_13
#define M3IN1_GPIO_Port GPIOE
#define M3IN2_Pin GPIO_PIN_14
#define M3IN2_GPIO_Port GPIOE
#define M3PWM_Pin GPIO_PIN_10
#define M3PWM_GPIO_Port GPIOB
#define M1PWM_Pin GPIO_PIN_15
#define M1PWM_GPIO_Port GPIOB
#define M1IN2_Pin GPIO_PIN_8
#define M1IN2_GPIO_Port GPIOD
#define M1IN1_Pin GPIO_PIN_9
#define M1IN1_GPIO_Port GPIOD
#define TB_STBY1_Pin GPIO_PIN_10
#define TB_STBY1_GPIO_Port GPIOD
#define M2IN1_Pin GPIO_PIN_11
#define M2IN1_GPIO_Port GPIOD
#define M1PWMA_Pin GPIO_PIN_12
#define M1PWMA_GPIO_Port GPIOD
#define M1PWMB_Pin GPIO_PIN_13
#define M1PWMB_GPIO_Port GPIOD
#define M2PWMA_Pin GPIO_PIN_6
#define M2PWMA_GPIO_Port GPIOC
#define M2PWMB_Pin GPIO_PIN_7
#define M2PWMB_GPIO_Port GPIOC
#define M2IN2_Pin GPIO_PIN_8
#define M2IN2_GPIO_Port GPIOC
#define I2C_SDA_Pin GPIO_PIN_9
#define I2C_SDA_GPIO_Port GPIOC
#define I2C_SCL_Pin GPIO_PIN_8
#define I2C_SCL_GPIO_Port GPIOA
#define M2PWM_Pin GPIO_PIN_9
#define M2PWM_GPIO_Port GPIOA
#define UART_TX_Pin GPIO_PIN_10
#define UART_TX_GPIO_Port GPIOC
#define UART_RX_Pin GPIO_PIN_11
#define UART_RX_GPIO_Port GPIOC
#define M6PWM_Pin GPIO_PIN_3
#define M6PWM_GPIO_Port GPIOB
#define M6IN2_Pin GPIO_PIN_4
#define M6IN2_GPIO_Port GPIOB
#define M6IN1_Pin GPIO_PIN_5
#define M6IN1_GPIO_Port GPIOB
#define TB_STBY3_Pin GPIO_PIN_6
#define TB_STBY3_GPIO_Port GPIOB
#define M5IN1_Pin GPIO_PIN_9
#define M5IN1_GPIO_Port GPIOB
#define M5IN2_Pin GPIO_PIN_0
#define M5IN2_GPIO_Port GPIOE
#define STM_LED_Pin GPIO_PIN_1
#define STM_LED_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
