/*
 * hal_nucleo_l476.h
 *
 *  Created on: Oct 14, 2022
 *      Author: gosor
 */

#ifndef INCLUDE_HAL_NUCLEO_L476_H_
#define INCLUDE_HAL_NUCLEO_L476_H_

#include "stm32l4xx_ll_bus.h"
#include "stm32l4xx_ll_utils.h"
#include "stm32l4xx_ll_gpio.h"



/* ==============   BOARD SPECIFIC CONFIGURATION CODE BEGIN    ============== */
/**
 * @brief LED2 - Nucleo 64
 */

#define LD2_PIN                           LL_GPIO_PIN_5
#define LD2_GPIO_PORT                     GPIOA
#define LD2_GPIO_CLK_ENABLE()             LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOA)

#define LD3_PIN                           LL_GPIO_PIN_6
#define LD3_GPIO_PORT                     GPIOA
#define LD3_GPIO_CLK_ENABLE()             LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOA)

#define LD4_PIN                           LL_GPIO_PIN_7
#define LD4_GPIO_PORT                     GPIOA
#define LD4_GPIO_CLK_ENABLE()             LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOA)

#define LD5_PIN                           LL_GPIO_PIN_6
#define LD5_GPIO_PORT                     GPIOB
#define LD5_GPIO_CLK_ENABLE()             LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOB)

#define LD6_PIN                           LL_GPIO_PIN_6
#define LD6_GPIO_PORT                     GPIOA
#define LD6_GPIO_CLK_ENABLE()             LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOA)

#define LD7_PIN                           LL_GPIO_PIN_8
#define LD7_GPIO_PORT                     GPIOA
#define LD7_GPIO_CLK_ENABLE()             LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOA)

#define LD8_PIN                           LL_GPIO_PIN_10
#define LD8_GPIO_PORT                     GPIOB
#define LD8_GPIO_CLK_ENABLE()             LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOB)

#define LD9_PIN                           LL_GPIO_PIN_4
#define LD9_GPIO_PORT                     GPIOB
#define LD9_GPIO_CLK_ENABLE()             LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOB)

#define S1_PIN                           LL_GPIO_PIN_1
#define S1_GPIO_PORT                     GPIOA
#define S1_GPIO_CLK_ENABLE()             LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOA)

#define S2_PIN                           LL_GPIO_PIN_4
#define S2_GPIO_PORT                     GPIOA
#define S2_GPIO_CLK_ENABLE()             LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOA)

#define S3_PIN                           LL_GPIO_PIN_0
#define S3_GPIO_PORT                     GPIOB
#define S3_GPIO_CLK_ENABLE()             LL_AHB2_GRP1_EnableClock(LL_AHB2_GRP1_PERIPH_GPIOB)


void HAL_NUCLEO_L476_INIT();

void LD2_Set(void);
void LD2_Reset(void);

void LD3_Set(void);
void LD3_Reset(void);

void LD4_Set(void);
void LD4_Reset(void);

void LD5_Set(void);
void LD5_Reset(void);

void LD6_Set(void);
void LD6_Reset(void);

void LD7_Set(void);
void LD7_Reset(void);

void LD8_Set(void);
void LD8_Reset(void);

void LD9_Set(void);
void LD9_Reset(void);



#endif /* INCLUDE_HAL_NUCLEO_L476_H_ */
