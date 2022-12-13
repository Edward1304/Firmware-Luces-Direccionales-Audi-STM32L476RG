/*
 * app_nucleo_476.c
 *
 *  Created on: Oct 14, 2022
 *      Author: gosor
 */

#include "app_nucleo_l476.h"

typedef enum {UP,DOWN} push_button_t;


extern uint32_t Get_Tick(void);

void FSM_LD2_Blink(void){
	static uint32_t last_tick = 0;
	uint32_t current_tick;
	static uint8_t estado = 0;

	current_tick = Get_Tick();
	if (current_tick-last_tick >= 500){
		last_tick = current_tick;

		switch(estado){
		case 0:
			estado = 1;
			LD2_Set();
			break;
		case 1:
			estado = 0;
			LD2_Reset();
			break;
		}
	}
}

void FSM_Read_PushButton_1(uint8_t *flag_1){
	static uint32_t last_tick_1 = 0;
	static push_button_t button_state_1  = UP;

	uint32_t current_tick_1;
	uint32_t idr_1;
	uint8_t A1;



	current_tick_1 = Get_Tick();
	if (current_tick_1-last_tick_1 >= 100){
		last_tick_1 = current_tick_1;
		idr_1 = LL_GPIO_ReadInputPort(S1_GPIO_PORT);
		idr_1 &= S1_PIN;
		(idr_1 > 0) ?	(A1 = 1U) : (A1 = 0U);

		if (button_state_1 == UP){
			if (A1 == 0)
				button_state_1 = DOWN;
		}else{
			if (A1 == 1){
				button_state_1 = UP;
				if (*flag_1 == 1)
					*flag_1=0;
				else
					*flag_1=1;

			}
		}
	}
}

void FSM_Read_PushButton_2(uint8_t *flag_2){
	static uint32_t last_tick = 0;
	static push_button_t button_state_2  = UP;

	uint32_t current_tick;
	uint32_t idr;
	uint8_t A4;



	current_tick = Get_Tick();
	if (current_tick-last_tick >= 100){
		last_tick = current_tick;
		idr = LL_GPIO_ReadInputPort(S2_GPIO_PORT);
		idr &= S2_PIN;
		(idr > 0) ?	(A4 = 1U) : (A4 = 0U);

		if (button_state_2 == UP){
			if (A4 == 0)
				button_state_2 = DOWN;
		}else{
			if (A4 == 1){
				button_state_2 = UP;
				if (*flag_2 == 1)
					*flag_2=0;
				else
					*flag_2=1;
			}
		}
	}
}

void FSM_Read_PushButton_3(uint8_t *flag_3){
	static uint32_t last_tick_3 = 0;
	static push_button_t button_state_3  = UP;

	uint32_t current_tick_3;
	uint32_t idr_3;
	uint8_t B0;



	current_tick_3 = Get_Tick();
	if (current_tick_3-last_tick_3 >= 100){
		last_tick_3 = current_tick_3;
		idr_3 = LL_GPIO_ReadInputPort(S3_GPIO_PORT);
		idr_3 &= S3_PIN;
		(idr_3 > 0) ?	(B0 = 1U) : (B0 = 0U);

		if (button_state_3 == UP){
			if (B0 == 0)
				button_state_3 = DOWN;
		}else{
			if (B0 == 1){
				button_state_3 = UP;
				if (*flag_3 == 1)
					*flag_3=0;
				else
					*flag_3=1;
			}
		}
	}
}


void DireccionalDerecha(uint8_t *flag_1){

	static uint32_t last_tick_1 = 0;
	static uint8_t secuencia_der = 0;
	uint32_t current_tick_1;

	current_tick_1 = Get_Tick();

		if (*flag_1 == 1)
		{
			if (current_tick_1-last_tick_1 >= 1000)
			{
			last_tick_1 = current_tick_1;
			switch(secuencia_der)
				{
			case 0:
				LD2_Set();
				LD3_Set();
				LD4_Set();
				LD5_Set();
				secuencia_der =1;
				break;
			case 1:
				LD2_Reset();
				LD3_Reset();
				LD4_Set();
				LD5_Set();
				secuencia_der =2;
				break;
			case 2:
				LD2_Reset();
				LD3_Reset();
				LD4_Reset();
				LD5_Set();
				secuencia_der =3;
				break;
			case 3:
				LD2_Reset();
				LD3_Reset();
				LD4_Reset();
				LD5_Reset();
				secuencia_der =0;
				break;

				}
			}
		}
}

void DireccionalIzquierda(uint8_t *flag_3){

	static uint32_t last_tick_3 = 0;
	static uint8_t secuencia_iz = 0;
	uint32_t current_tick_3;

	current_tick_3 = Get_Tick();

		if (*flag_3 == 1)
		{
			if (current_tick_3-last_tick_3 >= 1000)
			{
			last_tick_3 = current_tick_3;
			switch(secuencia_iz)
				{
			case 0:
				LD5_Reset();
				LD4_Set();
				LD3_Set();
				LD2_Set();
				secuencia_iz =1;
				break;
			case 1:
				LD5_Reset();
				LD4_Reset();
				LD3_Set();
				LD2_Set();
				secuencia_iz =2;
				break;
			case 2:
				LD5_Reset();
				LD4_Reset();
				LD3_Reset();
				LD2_Set();
				secuencia_iz =3;
				break;
			case 3:
				LD5_Reset();
				LD4_Reset();
				LD3_Reset();
				LD2_Reset();
				secuencia_iz =0;
				break;
			}
		}
	}
}

void Estacionarias(uint8_t *flag_2){

	static uint32_t last_tick = 0;
	static uint8_t seq_estacionarias = 0;
	uint32_t current_tick;

	current_tick = Get_Tick();

		if (*flag_2 == 1)
		{
			if (current_tick-last_tick >= 1000)
			{
			last_tick = current_tick;
			switch(seq_estacionarias)
				{
			case 0:
				LD5_Set();
				LD4_Set();
				LD3_Set();
				LD2_Set();
				seq_estacionarias =1;
				break;
			case 1:
				LD5_Reset();
				LD4_Reset();
				LD3_Reset();
				LD2_Reset();
				seq_estacionarias =0;
				break;

			}
			}
		}
}
