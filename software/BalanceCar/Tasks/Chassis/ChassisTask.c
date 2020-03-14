#include <ChassisTask.h>

void StartChassisTask(void)
{
	
	
}


void motor_init(void)
{
	HAL_TIM_PWM_Start(&htim8,TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim8,TIM_CHANNEL_2);
	HAL_TIM_PWM_Start(&htim8,TIM_CHANNEL_3);
	HAL_TIM_PWM_Start(&htim8,TIM_CHANNEL_4);
	__HAL_TIM_SetCompare(&htim8,TIM_CHANNEL_1,0);
	__HAL_TIM_SetCompare(&htim8,TIM_CHANNEL_2,0);
	__HAL_TIM_SetCompare(&htim8,TIM_CHANNEL_3,0);
	__HAL_TIM_SetCompare(&htim8,TIM_CHANNEL_4,0);
	HAL_TIM_Encoder_Start(&htim1,TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim2,TIM_CHANNEL_ALL);
}

void readspeed(void)
{
	
}

