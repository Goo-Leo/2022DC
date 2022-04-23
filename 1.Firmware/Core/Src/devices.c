#include "devices.h"

extern __IO float temperature;
Device room ={0,0,0,0,0};


void windowoff(Device room){
	if(room.window == 0){
	/*for(int i = 0;i < 5200; i+=200){
		__HAL_TIM_SET_COMPARE(&htim12,TIM_CHANNEL_1,10000+i);
		HAL_Delay(200);
	}*/
	__HAL_TIM_SET_COMPARE(&htim12,TIM_CHANNEL_1,10000);
	}
	else{
		return;
	}
	return;
}

void windowon(Device room){
	if(room.window == 1){
	/*for(int a = 0;a < 5200; a+=200){
	  	__HAL_TIM_SET_COMPARE(&htim12,TIM_CHANNEL_1,15200-a);
	  	HAL_Delay(50);
		}*/
	__HAL_TIM_SET_COMPARE(&htim12,TIM_CHANNEL_1,15200);
	}
	else{
			return;
	}
	return;
}

void curtainup(void){
	/*for(int i = 0;i < 12000; i+=200){
		__HAL_TIM_SET_COMPARE(&htim12,TIM_CHANNEL_2,2400+i);
		HAL_Delay(50);
	}*/
	__HAL_TIM_SET_COMPARE(&htim12,TIM_CHANNEL_2,3000);
}

void curtaindown(void){
	/*for(int i = 0;i < 12800; i+=200){
		__HAL_TIM_SET_COMPARE(&htim12,TIM_CHANNEL_2,15200-i);
		HAL_Delay(50);
	}*/
	__HAL_TIM_SET_COMPARE(&htim12,TIM_CHANNEL_2,15000);
}

void heateron(void){

}
void heateroff(void){

}

void fanctrl(Device room){
	if((room.fan1==1)||(temperature>27))
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
	else{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
	}
	if((room.fan2==1)||(temperature>27)) {
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
	}else{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 1);
	}

}
