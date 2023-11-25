/*=================================================================================*/
/*  File        : main.c                                                           */
/*  Description : This Program file  For Application                               */
/*  Author      : Tarek Ahmed Abd El Wahab. Embedded SW Engineer                   */
/*  Date        : 15/11/2023                                                       */
/*  Linkedin    : https://www.linkedin.com/in/tarek-el-shafei-647698205/           */
/*  Git account : https://github.com/Tarek1482000?tab=repositories                 */
/*  mail        : tarekahmed0128@gmil.com                                          */
/*=================================================================================*/


#include "HAL/SYSTEM/SYSTYM_Interface.h"
#include "HAL/RC_CAR/RC_Interface.h"
#include "HAL/ULTRASONIC/ULTRASONIC_Interface.h"
#include "HAL/IR_COLOR/IR_COLOR_Interface.h"
#include "HAL/BUZZER/BUZZER_Interface.h"
int main(void)
{
	u16 Ultrasonic_u16_Distance_value = 0;
	u8 IR_Right_Value = 0 , IR_Left_Value = 0;

	SYSTEM_Init();

	Ultrasonic_init();

	RC_Init();

	BUZZER_init(BA0);


	for(;;)
	{

		Ultrasonic_u16_Distance_value = Ultrasonic_readDistance_average();
		IR_Right_Value = IR_not_Black(IR_RIGHT);
		IR_Left_Value = IR_not_Black(IR_LEFT);

		while(IR_Right_Value && IR_Left_Value && Ultrasonic_u16_Distance_value > MINIMUM_DISTANCE)
		{

			RC_Forward(MAX_SPEED);
			STK_u8SetmSBusyWait(8);
			RC_Forward(START_SPEED);

			IR_Right_Value = IR_not_Black(IR_RIGHT);
			IR_Left_Value = IR_not_Black(IR_LEFT);
			Ultrasonic_u16_Distance_value = Ultrasonic_readDistance_average();
		}

		if(Ultrasonic_u16_Distance_value <= MINIMUM_DISTANCE)
		{

			RC_Back_Right(MID_SPEED);
			STK_u8SetmSBusyWait(250);


			RC_Left(MID_SPEED);
			STK_u8SetmSBusyWait(350);

			RC_Stop();
			continue;
		}

		if(IR_Right_Value == IR_FIND_BLACK && IR_Left_Value == IR_FIND_BLACK)
		{
			RC_Stop();
			for(u8 i =0 ;i<100;i++)
			{
				BUZZER_TOG(BA0);
				STK_u8SetmSBusyWait(20);
			}
			while(1);
		}

		if(IR_Right_Value == IR_FIND_BLACK)
		{
			RC_L_Step();
			IR_Left_Value = IR_not_Black(IR_LEFT);
		}
		if(IR_Left_Value == IR_FIND_BLACK)
		{
			RC_R_Step();
		}
	}

}
