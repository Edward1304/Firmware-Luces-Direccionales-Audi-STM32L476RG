/*
 * hal_nucleo_l476.c
 *
 *  Created on: Oct 14, 2022
 *      Author: gosor
 */

#include "hal_nucleo_l476.h"

void HAL_NUCLEO_L476_INIT(void){
	LL_Init1msTick(4000000);
	LD2_GPIO_CLK_ENABLE();

	S1_GPIO_CLK_ENABLE();
	S2_GPIO_CLK_ENABLE();
	S3_GPIO_CLK_ENABLE();

	LL_GPIO_SetPinMode(LD2_GPIO_PORT, LD2_PIN, LL_GPIO_MODE_OUTPUT);
	LL_GPIO_SetOutputPin(LD2_GPIO_PORT, LD2_PIN);

	LL_GPIO_SetPinMode(LD3_GPIO_PORT, LD3_PIN, LL_GPIO_MODE_OUTPUT);
	LL_GPIO_SetOutputPin(LD3_GPIO_PORT, LD3_PIN);

	LL_GPIO_SetPinMode(LD4_GPIO_PORT, LD4_PIN, LL_GPIO_MODE_OUTPUT);
	LL_GPIO_SetOutputPin(LD4_GPIO_PORT, LD4_PIN);

	LL_GPIO_SetPinMode(LD5_GPIO_PORT, LD5_PIN, LL_GPIO_MODE_OUTPUT);
	LL_GPIO_SetOutputPin(LD5_GPIO_PORT, LD5_PIN);

	LL_GPIO_SetPinMode(S1_GPIO_PORT, S1_PIN, LL_GPIO_MODE_INPUT);
	LL_GPIO_SetPinMode(S2_GPIO_PORT, S2_PIN, LL_GPIO_MODE_INPUT);
	LL_GPIO_SetPinMode(S3_GPIO_PORT, S3_PIN, LL_GPIO_MODE_INPUT);

}
void LD2_Set(void){
	LL_GPIO_SetOutputPin(LD2_GPIO_PORT, LD2_PIN);
}

void LD2_Reset(void){
	LL_GPIO_ResetOutputPin(LD2_GPIO_PORT, LD2_PIN);
}

void LD3_Set(void){
	LL_GPIO_SetOutputPin(LD3_GPIO_PORT, LD3_PIN);
}

void LD3_Reset(void){
	LL_GPIO_ResetOutputPin(LD3_GPIO_PORT, LD3_PIN);
}

void LD4_Set(void){
	LL_GPIO_SetOutputPin(LD4_GPIO_PORT, LD4_PIN);
}

void LD4_Reset(void){
	LL_GPIO_ResetOutputPin(LD4_GPIO_PORT, LD4_PIN);
}

void LD5_Set(void){
	LL_GPIO_SetOutputPin(LD5_GPIO_PORT, LD5_PIN);
}

void LD5_Reset(void){
	LL_GPIO_ResetOutputPin(LD5_GPIO_PORT, LD5_PIN);
}

void LD6_Set(void){
	LL_GPIO_SetOutputPin(LD6_GPIO_PORT, LD6_PIN);
}

void LD6_Reset(void){
	LL_GPIO_ResetOutputPin(LD6_GPIO_PORT, LD6_PIN);
}

void LD7_Set(void){
	LL_GPIO_SetOutputPin(LD7_GPIO_PORT, LD7_PIN);
}

void LD7_Reset(void){
	LL_GPIO_ResetOutputPin(LD7_GPIO_PORT, LD7_PIN);
}

void LD8_Set(void){
	LL_GPIO_SetOutputPin(LD8_GPIO_PORT, LD8_PIN);
}

void LD8_Reset(void){
	LL_GPIO_ResetOutputPin(LD8_GPIO_PORT, LD8_PIN);
}

void LD9_Set(void){
	LL_GPIO_SetOutputPin(LD9_GPIO_PORT, LD9_PIN);
}

void LD9_Reset(void){
	LL_GPIO_ResetOutputPin(LD9_GPIO_PORT, LD9_PIN);
}
