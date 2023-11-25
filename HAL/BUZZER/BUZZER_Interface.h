/*=================================================================================*/
/*  File        : Interface.ch                                                     */
/*  Description : This Header file for BUZZER program                              */
/*  Author      : Tarek Ahmed Abd El Wahab. Embedded SW Engineer                   */
/*  Date        : 19/10/2023                                                       */
/*  Linkedin    : https://www.linkedin.com/in/tarek-el-shafei-647698205/           */
/*  Git account : https://github.com/Tarek1482000?tab=repositories                 */
/*  mail        : tarekahmed0128@gmil.com                                          */
/*=================================================================================*/

#ifndef BUZZER_INC_BUZZER_INTERFACE_H_
#define BUZZER_INC_BUZZER_INTERFACE_H_

/******************* MAIN INCBUDES *********************/
#include <stdint.h>
#include "../../lIB/STD_TYPES.h"
#include "../../MCAl/GPIO/GPIO_Interface.h"
/*******************************************************/

typedef enum
{
	BA0,BA1,BA2,BA3,BA4,BA5,BA6,BA7,BA8,BA9,BA10,BA11,BA12,BA13,BA14,BA15,
	BB0,BB1,BB2,BB3,BB4,BB5,BB6,BB7,BB8,BB9,BB10,BB11,BB12,BB13,BB14,BB15,
	BC13=45,BC14,BC15
}BUZZER_NUM;
/*******************************************************************************
* Function Name:		BUZZER_init
********************************************************************************/
u8 BUZZER_init(BUZZER_NUM BUZZER);
/*******************************************************************************
* Function Name:		BUZZER_ON
********************************************************************************/
u8 BUZZER_ON(BUZZER_NUM BUZZER);
/*******************************************************************************
* Function Name:		BUZZER_OFF
********************************************************************************/
u8 BUZZER_OFF(BUZZER_NUM BUZZER);
/*******************************************************************************
* Function Name:		BUZZER_TOG
********************************************************************************/
u8 BUZZER_TOG(BUZZER_NUM BUZZER);


#endif /* BUZZER_INC_BUZZER_INTERFACE_H_ */
