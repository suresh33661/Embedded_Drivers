/*
 * stm32f407xx_gpio_driver.h
 *
 *  Created on: Dec 12, 2025
 *      Author: SURESH
 */

#ifndef INC_STM32F407XX_GPIO_DRIVER_H_
#define INC_STM32F407XX_GPIO_DRIVER_H_

#include "stm32f407xx.h"

typedef struct {
	uint32_t GPIO_PinNumber;
	uint32_t GPIO_PinSpeed;
	uint32_t GPIO_PinPuPdcontrol;
	uint32_t GPIO_PinOPType;
	uint32_t GPIO_PinAlFunMode;
}GPIO_PinConfig_t;

typedef struct {
	GPIO_RegDef_t *pGPIOx; /* Holds the base address of gpio port which the pin belongs */
	GPIO_PinConfig_t GPIO_PinConfig;
}GPIO_Handle_t;
















#endif /* INC_STM32F407XX_GPIO_DRIVER_H_ */
