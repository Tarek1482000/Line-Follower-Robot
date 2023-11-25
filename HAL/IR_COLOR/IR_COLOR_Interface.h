/*=================================================================================*/
/*  File        : IR_COLOR_Interface.h                                             */
/*  Description : This Header file includes IR_COLOR_Interface                     */
/*  Author      : Tarek Ahmed Abd El Wahab. Embedded SW Engineer                   */
/*  Date        : 19/10/2023                                                       */
/*  Linkedin    : https://www.linkedin.com/in/tarek-el-shafei-647698205/           */
/*  Git account : https://github.com/Tarek1482000?tab=repositories                 */
/*  mail        : tarekahmed0128@gmil.com                                          */
/*=================================================================================*/

#ifndef IR_COLOR_INTERFACE_H_
#define IR_COLOR_INTERFACE_H_

#include "IR_COLOR_Config.h"
/*******************************************************************************
 * Function Name:		IR_init
 ********************************************************************************/
void IR_init(IR_POS Ir_pos);

/*******************************************************************************
 * Function Name:		IR_Value
 ********************************************************************************/
u8 IR_Value(IR_POS Ir_pos);

u8 IR_Read(IR_POS Ir_pos);

u8 IR_is_Black(IR_POS Ir_pos);

u8 IR_not_Black(IR_POS Ir_pos);

#endif /* IR_COLOR_INTERFACE_H_ */
