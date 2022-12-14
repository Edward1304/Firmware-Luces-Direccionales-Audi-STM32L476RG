/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
#include "main.h"

uint8_t Button = 0;



extern void FSM_LD2_Blink(void);
extern void FSM_Read_PushButton_1(uint8_t *flag);
extern void FSM_Read_PushButton_2(uint8_t *flag);
extern void FSM_Read_PushButton_3(uint8_t *flag);
extern void DireccionalDerecha(uint8_t *flag);
extern void DireccionalIzquierda(uint8_t *flag);
extern void Estacionarias(uint8_t *flag);
static uint8_t temp_1 = 0;
static uint8_t temp_2 = 0;
static uint8_t temp_3 = 0;

int main(void)
{

	HAL_NUCLEO_L476_INIT();
	LL_GPIO_SetOutputPin(LD2_GPIO_PORT, LD2_PIN);
	/* Loop forever */
	for(;;){
		//FSM_LD2_Blink();
		//Button1 = LL_GPIO_ReadInputPort(GPIOA);
		//S1 = 48
		//S2 = 34
		//NO PRE = 50
		FSM_Read_PushButton_1(&temp_1);
		FSM_Read_PushButton_2(&temp_2);
		FSM_Read_PushButton_3(&temp_3);
		DireccionalDerecha(&temp_1);
		Estacionarias(&temp_2);
		DireccionalIzquierda(&temp_3);
	}
}







