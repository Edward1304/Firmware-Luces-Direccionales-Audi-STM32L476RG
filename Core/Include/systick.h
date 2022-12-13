/*
 * systick.h
 *
 *  Created on: Oct 14, 2022
 *      Author: gosor
 */

#ifndef INCLUDE_SYSTICK_H_
#define INCLUDE_SYSTICK_H_



void SysTick_Handler(void);
void SysTick_Callback(void);
uint32_t Get_Tick(void);


#endif /* INCLUDE_SYSTICK_H_ */
