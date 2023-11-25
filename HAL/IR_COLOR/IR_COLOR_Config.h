/*=================================================================================*/
/*  File        : IR_COLOR_Config.h                                                */
/*  Description : This Header file includes IR_COLOR_Config                        */
/*  Author      : Tarek Ahmed Abd El Wahab. Embedded SW Engineer                   */
/*  Date        : 19/10/2023                                                       */
/*  Linkedin    : https://www.linkedin.com/in/tarek-el-shafei-647698205/           */
/*  Git account : https://github.com/Tarek1482000?tab=repositories                 */
/*  mail        : tarekahmed0128@gmil.com                                          */
/*=================================================================================*/

#ifndef IR_COLOR_CONFIG_H_
#define IR_COLOR_CONFIG_H_


typedef enum
{
	IR_RIGHT,
	IR_LEFT
}IR_POS;

#define IR_RIGHT_PORT   GPIO_u8_GPIOB
#define IR_RIGHT_PIN    GPIO_u8_PIN13

#define IR_LEFT_PORT    GPIO_u8_GPIOB
#define IR_LEFT_PIN     GPIO_u8_PIN12

#define IR_FIND_BLACK           0
#define IR_FIND_NOTBLACK        1

#define TRUE         1
#define FALSE        0

#endif /* IR_COLOR_CONFIG_H_ */
