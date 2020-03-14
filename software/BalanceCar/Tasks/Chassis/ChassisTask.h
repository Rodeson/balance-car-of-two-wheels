#ifndef _CHASSISTASK_H
#define _CHASSISTASK_H

#include "stm32f4xx_hal.h"
#include "tim.h"
#include "pid.h"




//电机统一结构体
typedef struct PID
{
	float p,i,d;
	float ka,kb,kc;
	float data[3];
} pid;

typedef struct MOTOR
{
	int16_t out;
	int16_t speed;
	int16_t set_speed;
	TIM_HandleTypeDef *tim_pwmout;
	TIM_HandleTypeDef *tim_encoder;
	uint32_t channel;
	pid mpid;
}motor;




#endif


