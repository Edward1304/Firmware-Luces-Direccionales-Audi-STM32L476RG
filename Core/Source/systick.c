/*
 * systick.c
 *
 *  Created on: Oct 14, 2022
 *      Author: gosor
 */
#include "systick.h"



uint32_t msTick = 0;

void SysTick_Handler(void){
	SysTick_Callback();
}

void SysTick_Callback(void){
	msTick++;
}

uint32_t Get_Tick(void){
	return msTick;
}
