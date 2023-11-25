/*=================================================================================*/
/*  File        : LED_Program.c                                                    */
/*  Description : This Program file includes LED program                           */
/*  Author      : Tarek Ahmed Abd El Wahab. Embedded SW Engineer                   */
/*  Date        : 19/10/2023                                                       */
/*  Linkedin    : https://www.linkedin.com/in/tarek-el-shafei-647698205/           */
/*  Git account : https://github.com/Tarek1482000?tab=repositories                 */
/*  mail        : tarekahmed0128@gmil.com                                          */
/*=================================================================================*/

/*******************************************************************************
 *                        		Inclusions                                     *
 *******************************************************************************/
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/stm32f103xx.h"

#include "../../MCAL/GPIO/GPIO_interface.h"

#include "IR_COLOR_Config.h"
#include "IR_COLOR_Interface.h"
/*******************************************************************************
 *                      Functions Definitions                                   *
 *******************************************************************************/

/*******************************************************************************
 * Function Name:		IR_init
 ********************************************************************************/
void IR_init(IR_POS Ir_pos)
{
	if(Ir_pos == IR_RIGHT)
		GPIO_u8SetPinMode(IR_RIGHT_PORT,IR_RIGHT_PIN, GPIO_u8_INPUT_FLOATING);
	else if(Ir_pos == IR_LEFT)
		GPIO_u8SetPinMode(IR_LEFT_PORT,IR_LEFT_PIN, GPIO_u8_INPUT_FLOATING);
}
/*******************************************************************************
 * Function Name:		IR_Value
 ********************************************************************************/
u8 IR_Value(IR_POS Ir_pos)
{
	u8 data = 0;

	if(Ir_pos == IR_RIGHT)
		GPIO_u8GetPinValue(IR_RIGHT_PORT,IR_RIGHT_PIN,  &data);
	else if(Ir_pos == IR_LEFT)
		GPIO_u8GetPinValue(IR_LEFT_PORT,IR_LEFT_PIN,  &data);
	return data;
}


u8 IR_Read(IR_POS Ir_pos)
{
	u8 data = 0;
	if(Ir_pos == IR_RIGHT)
		GPIO_u8GetPinValue(IR_RIGHT_PORT,IR_RIGHT_PIN,  &data);
	else if(Ir_pos == IR_LEFT)
		GPIO_u8GetPinValue(IR_LEFT_PORT,IR_LEFT_PIN,  &data);
	return data;
}


u8 IR_is_Black(IR_POS Ir_pos)
{
	u8 data = 0;

	if(Ir_pos == IR_RIGHT)
		GPIO_u8GetPinValue(IR_RIGHT_PORT,IR_RIGHT_PIN,  &data);
	else if(Ir_pos == IR_LEFT)
		GPIO_u8GetPinValue(IR_LEFT_PORT,IR_LEFT_PIN,  &data);
	if(data == 1)
		return TRUE;
	return FALSE;
}

u8 IR_not_Black(IR_POS Ir_pos)
{
	u8 data = 0;

	if(Ir_pos == IR_RIGHT)
		GPIO_u8GetPinValue(IR_RIGHT_PORT,IR_RIGHT_PIN,  &data);
	else if(Ir_pos == IR_LEFT)
		GPIO_u8GetPinValue(IR_LEFT_PORT,IR_LEFT_PIN,  &data);
	if(data == 0)
		return TRUE;
	return FALSE;
}

