/*=================================================================================*/
/*  File        : BUZZER_Program.c                                                 */
/*  Description : This Program file includes BUZZER program                        */
/*  Author      : Tarek Ahmed Abd El Wahab. Embedded SW Engineer                   */
/*  Date        : 19/10/2023                                                       */
/*  Linkedin    : https://www.linkedin.com/in/tarek-el-shafei-647698205/           */
/*  Git account : https://github.com/Tarek1482000?tab=repositories                 */
/*  mail        : tarekahmed0128@gmil.com                                          */
/*=================================================================================*/

/******************* MAIN INCLUDES *********************/
#include <stdint.h>
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/stm32f103xx.h"

#include "../../MCAL/RCC/RCC_interface.h"
#include "../../MCAL/GPIO/GPIO_interface.h"
#include "BUZZER_Interface.h"

/*******************************************************************************
* Function Name:		BUZZER_init
********************************************************************************/
u8 BUZZER_init(BUZZER_NUM BUZZER)
{
	u8 Local_u8ErrorState = STD_TYPES_OK;

	if(BUZZER>= BA0 && BUZZER <= BA15)
	{
		GPIO_u8SetPinMode(GPIO_u8_GPIOA,BUZZER % 16, GPIO_u8_OUTPUT_GP_PP_50MHZ);
		GPIO_u8WritePinValue(GPIO_u8_GPIOA,BUZZER % 16, GPIO_u8_LOW);
	}
	else if(BUZZER>= BB0 && BUZZER <= BB15)
	{
		GPIO_u8SetPinMode(GPIO_u8_GPIOB,BUZZER % 16, GPIO_u8_OUTPUT_GP_PP_50MHZ);
		GPIO_u8WritePinValue(GPIO_u8_GPIOB,BUZZER % 16, GPIO_u8_LOW);
	}
	else if(BUZZER>= BC13 && BUZZER <= BC15)
	{
		GPIO_u8SetPinMode(GPIO_u8_GPIOC,BUZZER % 16, GPIO_u8_OUTPUT_GP_PP_50MHZ);
		GPIO_u8WritePinValue(GPIO_u8_GPIOC,BUZZER % 16, GPIO_u8_LOW);
	}
	return Local_u8ErrorState;
}
/*******************************************************************************
* Function Name:		BUZZER_ON
********************************************************************************/
u8 BUZZER_ON(BUZZER_NUM BUZZER)
{
	u8 Local_u8ErrorState = STD_TYPES_OK;

	if(BUZZER>= BA0 && BUZZER <= BA15)
	{
		GPIO_u8WritePinValue(GPIO_u8_GPIOA,BUZZER % 16, GPIO_u8_HIGH);
	}
	else if(BUZZER>= BB0 && BUZZER <= BB15)
	{
		GPIO_u8WritePinValue(GPIO_u8_GPIOB,BUZZER % 16, GPIO_u8_HIGH);
	}
	else if(BUZZER>= BC13 && BUZZER <= BC15)
	{
		GPIO_u8WritePinValue(GPIO_u8_GPIOC,BUZZER % 16, GPIO_u8_HIGH);
	}
	return Local_u8ErrorState;
}
/*******************************************************************************
* Function Name:		BUZZER_OFF
********************************************************************************/
u8 BUZZER_OFF(BUZZER_NUM BUZZER)
{
	u8 Local_u8ErrorState = STD_TYPES_OK;

	if(BUZZER>= BA0 && BUZZER <= BA15)
	{
		GPIO_u8WritePinValue(GPIO_u8_GPIOA,BUZZER % 16, GPIO_u8_LOW);
	}
	else if(BUZZER>= BB0 && BUZZER <= BB15)
	{
		GPIO_u8WritePinValue(GPIO_u8_GPIOB,BUZZER % 16, GPIO_u8_LOW);
	}
	else if(BUZZER>= BC13 && BUZZER <= BC15)
	{
		GPIO_u8WritePinValue(GPIO_u8_GPIOC,BUZZER % 16, GPIO_u8_LOW);
	}
	return Local_u8ErrorState;
}
/*******************************************************************************
* Function Name:		BUZZER_TOG
********************************************************************************/
u8 BUZZER_TOG(BUZZER_NUM BUZZER)
{
	u8 Local_u8ErrorState = STD_TYPES_OK;

	if(BUZZER>= BA0 && BUZZER <= BA15)
	{
		GPIO_u8TogPinValue(GPIO_u8_GPIOA,BUZZER % 16);
	}
	else if(BUZZER>= BB0 && BUZZER <= BB15)
	{
		GPIO_u8TogPinValue(GPIO_u8_GPIOA,BUZZER % 16);
	}
	else if(BUZZER>= BC13 && BUZZER <= BC15)
	{
		GPIO_u8TogPinValue(GPIO_u8_GPIOA,BUZZER % 16);
	}
	return Local_u8ErrorState;
}
