/*
 * stm32f407xx.h
 *
 *  Created on: Dec 11, 2025
 *      Author: SURESH
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

#include <stdint.h>

#define FLASH_BASEADDR			(unit32_t) 0x08000000
#define SRAM1_BASEADDR			(uint32_t) 0x20000000
#define SRAM2_BASEADDR 			(uint32_t) 0x2001C000
#define ROM						(uint32_t) 0x1FFF0000
#define SRAM SRAM1_BASEADDR		SRAM1_BASEADDR

//Bus base address/

#define PERIPH_BASE			    (uint32_t) 0x40000000
#define APB1_BASE_ADDR			PERIPH_BASE
#define APB2_BASE_ADDR			(uint32_t) 0x40010000
#define AHB1_BASE_ADDR			(uint32_t) 0x40020000
#define AHB2_BASE_ADDR			(uint32_t) 0x50000000


// Base addresses of AHB1 Peripherals

#define GPIOA_BASE_ADDR			(AHB1_BASE_ADDR + /* OFFSET */ 0x0000)
#define GPIOB_BASE_ADDR			(AHB1_BASE_ADDR + /* OFFSET */ 0x0400)
#define GPIOC_BASE_ADDR			(AHB1_BASE_ADDR + /* OFFSET */ 0x0800)
#define GPIOD_BASE_ADDR			(AHB1_BASE_ADDR + /* OFFSET */ 0x0C00)
#define GPIOE_BASE_ADDR			(AHB1_BASE_ADDR + /* OFFSET */ 0x1000)
#define GPIOF_BASE_ADDR			(AHB1_BASE_ADDR + /* OFFSET */ 0x1400)
#define GPIOG_BASE_ADDR			(AHB1_BASE_ADDR + /* OFFSET */ 0x1800)
#define GPIOH_BASE_ADDR			(AHB1_BASE_ADDR + /* OFFSET */ 0x1C00)
#define GPIOI_BASE_ADDR			(AHB1_BASE_ADDR + /* OFFSET */ 0x2000)
#define GPIOJ_BASE_ADDR			(AHB1_BASE_ADDR + /* OFFSET */ 0x2400)
#define GPIOK_BASE_ADDR			(AHB1_BASE_ADDR + /* OFFSET */ 0x2800)
#define RCC_BASE_ADDR			(AHB1_BASE_ADDR + /* OFFSET */ 0X3800)



//  APB1 Peripherals

#define I2C1_BASE_ADDR				(APB1_BASE_ADDR + /* OFFSET */ 0X5400)
#define I2C2_BASE_ADDR				(APB1_BASE_ADDR + /* OFFSET */ 0X5800)
#define I2C3_BASE_ADDR				(APB1_BASE_ADDR + /* OFFSET */ 0X5C00)
#define SPI2_BASE_ADDR				(APB1_BASE_ADDR + /* OFFSET */ 0X3800)
#define SPI3_BASE_ADDR				(APB1_BASE_ADDR + /* OFFSET */ 0X3C00)
#define USART2_BASE_ADDR			(APB1_BASE_ADDR + /* OFFSET */ 0X4400)
#define USART3_BASE_ADDR			(APB1_BASE_ADDR + /* OFFSET */ 0X4800)
#define UART4_BASE_ADDR				(APB1_BASE_ADDR + /* OFFSET */ 0X4C00)
#define UART5_BASE_ADDR				(APB1_BASE_ADDR + /* OFFSET */ 0X5000)


// APB2 peripherals

#define SPI1_BASE_ADDR					(APB2_BASE_ADDR + /*OFFSET */ 0x3000)
#define USART1_BASE_ADDR				(APB2_BASE_ADDR + /*OFFSET */ 0x1000)
#define USART6_BASE_ADDR				(APB2_BASE_ADDR + /*OFFSET */ 0x1400)
#define EXTI_BASE_ADDR					(APB2_BASE_ADDR + /*OFFSET */ 0x3C00)
#define SYSCFG_BASE_ADDR				(APB2_BASE_ADDR + /*OFFSET */ 0x3800)



// Address of peripheral registers

typedef struct {
	volatile uint32_t MODER; 	/* ADDRES OFFSET 0X00*/
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRRL;
	volatile uint32_t BSRRH;
	volatile uint32_t LCKR;
	volatile uint32_t AFR[2];  /* AFR[0]: GPIO alternate function low regiester , AF[1]: GPIO alterante function hige */

} GPIO_RegDef_t;


typedef struct {
	volatile uint32_t CR;
	volatile uint32_t PLLCFGR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t AHB1RSTR;
	volatile uint32_t AHB2RSTR;
	volatile uint32_t AHB3RSTR;
			 uint32_t RESERVED1;
	volatile uint32_t APB1RSTR;
	volatile uint32_t APB2RSTR;
			 uint32_t RESERVED2[2];
	volatile uint32_t AHB1ENR;
	volatile uint32_t AHB2ENR;
	volatile uint32_t AHB3ENR;
			 uint32_t RESERVED3;
	volatile uint32_t APB1ENR;
	volatile uint32_t APB2ENR;
			 uint32_t RESERVED4[2];
	volatile uint32_t AHB1LPENR;
	volatile uint32_t AHB2LPENR;
	volatile uint32_t AHB3LPENR;
			 uint32_t RESERVED5;
	volatile uint32_t APB1LPENR;
	volatile uint32_t APB2LPENR;
			 uint32_t RESERVED6[2];
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
			 uint32_t RESERVED7[2];
	volatile uint32_t SSCGR;
	volatile uint32_t PLLI2SCFGR;
} RCC_RegDef_t;




#define GPIOA  			((GPIO_RegDef_t*)GPIOA_BASE_ADDR)
#define GPIOB  			((GPIO_RegDef_t*)GPIOB_BASE_ADDR)
#define GPIOC  			((GPIO_RegDef_t*)GPIOC_BASE_ADDR)
#define GPIOD  			((GPIO_RegDef_t*)GPIOD_BASE_ADDR)
#define GPIOE  			((GPIO_RegDef_t*)GPIOE_BASE_ADDR)
#define GPIOF  			((GPIO_RegDef_t*)GPIOF_BASE_ADDR)
#define GPIOG  			((GPIO_RegDef_t*)GPIOG_BASE_ADDR)
#define GPIOH  			((GPIO_RegDef_t*)GPIOH_BASE_ADDR)
#define GPIOI  			((GPIO_RegDef_t*)GPIOI_BASE_ADDR)


#define RCC				((RCC_RegDef_t*)RCC_BASE_ADDR)

/////////* Enable RCC Clock *////////////
/* GPIO clock Enable Macros */
#define GPIOA_PCLK_EN()	(RCC->AHB1ENR |= (1 << 0))
#define GPIOB_PCLK_EN()	(RCC->AHB1ENR |= (1 << 1))
#define GPIOC_PCLK_EN()	(RCC->AHB1ENR |= (1 << 2))
#define GPIOD_PCLK_EN()	(RCC->AHB1ENR |= (1 << 3))
#define GPIOE_PCLK_EN()	(RCC->AHB1ENR |= (1 << 4))
#define GPIOF_PCLK_EN()	(RCC->AHB1ENR |= (1 << 5))
#define GPIOG_PCLK_EN()	(RCC->AHB1ENR |= (1 << 6))
#define GPIOH_PCLK_EN()	(RCC->AHB1ENR |= (1 << 7))
#define GPIOI_PCLK_EN()	(RCC->AHB1ENR |= (1 << 8))


/* Clock Enable macros for I2C Peripherals */
#define I2C1_PCLK_EN()  (RCC->AHB1ENR |= (1 << 21))
#define I2C2_PCLK_EN()  (RCC->AHB1ENR |= (1 << 22))
#define I2C3_PCLK_EN()  (RCC->AHB1ENR |= (1 << 23))


/* Clock Enable macros for SPI */
#define SPI1_PCLK_EN()  (RCC->APB2ENR |= (1 << 12))
#define SPI2_PCLK_EN()  (RCC->APB1ENR |= (1 << 14))
#define SPI3_PCLK_EN()  (RCC->APB1ENR |= (1 << 15))


/* Clock Enable macros for USARTX Peripherals */
#define USART1_PCLK_EN() (RCC->APB2ENR |= (1 << 4))
#define USART2_PCLK_EN() (RCC->APB1ENR |= (1 << 17))
#define USART3_PCLK_EN() (RCC->APB1ENR |= (1 << 18))
#define UART4_PCLK_EN()  (RCC->APB1ENR |= (1 << 19))
#define UART5_PCLK_EN()  (RCC->APB1ENR |= (1 << 20))
#define USART6_PCLK_EN() (RCC->APB2ENR |= (1 << 5))


///////* Disable RCC Clock */////////////
/* GPIO Clock Disable */
#define GPIOA_PCLK_DS()	(RCC->AHB1ENR &= ~(1 << 0))
#define GPIOB_PCLK_DS()	(RCC->AHB1ENR &= ~(1 << 1))
#define GPIOC_PCLK_DS()	(RCC->AHB1ENR &= ~(1 << 2))
#define GPIOD_PCLK_DS()	(RCC->AHB1ENR &= ~(1 << 3))
#define GPIOE_PCLK_DS()	(RCC->AHB1ENR &= ~(1 << 4))
#define GPIOF_PCLK_DS()	(RCC->AHB1ENR &= ~(1 << 5))
#define GPIOG_PCLK_DS()	(RCC->AHB1ENR &= ~(1 << 6))
#define GPIOH_PCLK_DS()	(RCC->AHB1ENR &= ~(1 << 7))
#define GPIOI_PCLK_DS()	(RCC->AHB1ENR &= ~(1 << 8))



/* I2C Clock Disable */
#define I2C1_PCLK_DS()  (RCC->AHB1ENR &= ~(1 << 21))
#define I2C2_PCLK_DS()  (RCC->AHB1ENR &= ~(1 << 22))
#define I2C3_PCLK_DS()  (RCC->AHB1ENR &= ~(1 << 23))



/* SPI Clock Disable */
#define USART1_PCLK_DS() (RCC->APB2ENR &= ~(1 << 4))
#define USART2_PCLK_DS() (RCC->APB1ENR &= ~(1 << 17))
#define USART3_PCLK_DS() (RCC->APB1ENR &= ~(1 << 18))
#define UART4_PCLK_DS()  (RCC->APB1ENR &= ~(1 << 19))
#define UART5_PCLK_DS()  (RCC->APB1ENR &= ~(1 << 20))
#define USART6_PCLK_DS() (RCC->APB2ENR &= ~(1 << 5))


/* USART Clock Disable */
#define USART1_PCLK_DS() (RCC->APB2ENR &= ~(1 << 4))
#define USART2_PCLK_DS() (RCC->APB1ENR &= ~(1 << 17))
#define USART3_PCLK_DS() (RCC->APB1ENR &= ~(1 << 18))
#define UART4_PCLK_DS()  (RCC->APB1ENR &= ~(1 << 19))
#define UART5_PCLK_DS()  (RCC->APB1ENR &= ~(1 << 20))
#define USART6_PCLK_DS() (RCC->APB2ENR &= ~(1 << 5))



#endif /* INC_STM32F407XX_H_ */
