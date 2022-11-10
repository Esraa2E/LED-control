/**
 * @file GPIO.h
 * @brief header file for gpio driver 
 * @version 0.1
 * @date 11 Septemper 2022
 * @author Esraa
 * @copyright 
 * 
 */
 
#ifndef GPIO_H_
#define  GPIO_H_
#include "std_macros.h"

#define Make_OUTPUT(PORT,PIN)  if((PIN>7)||(PIN<0)) SETBIT(PORT,7); else SETBIT(PORT,PIN);

#define Make_INPUT(PORT,PIN)   if((PIN>7)||(PIN<0)) CLRBIT(PORT,7); else CLRBIT(PORT,PIN);
													      
#define Enable_PIN(PORT,PIN)   if((PIN>7)||(PIN<0)) SETBIT(PORT,7); else SETBIT(PORT,PIN);

 /*****************************************************************************
* Function Name: GPIO_init
* Purpose      : to initialize GPIO
* Parameters   : void
* Return value : void
*****************************************************************************/
void GPIO_init(void);


/*****************
 *End of the file*
 *****************/
 #endif
	