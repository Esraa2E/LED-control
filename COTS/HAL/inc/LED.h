/**
 * @file GPIO.h
 * @brief header file for LED driver 
 * @version 0.1
 * @date 19 Septemper 2022
 * @author Esraa
 * @copyright 
 * 
 */
 
#ifndef LED_H_
#define  LED_H_

/****************
 *INCLUDED FILES*
 ****************/
#include "std_macros.h"
#include "SYS_TIMER.h"
#include "interrupt.h"
#include "GPIO.h"
/////////////////////////////////

#define BUTTON_ON  1
#define BUTTON_OFF 0
#define LED_ON    SETBIT(GPIODATA_PORTF,2)
#define LED_OFF    CLRBIT(GPIODATA_PORTF,2)
#define LED_TOG    TOGBIT(GPIODATA_PORTF,2)
#define SW1        READBIT(GPIODATA_PORTF,4)
#define SW2        READBIT(GPIODATA_PORTF,0)

 /*****************************************************************************
* Function Name: LED_init
* Purpose      : to initialize led functionality
* Parameters   : void
* Return value : void
*****************************************************************************/
void LED_init(void);
 /*****************************************************************************
* Function Name: LED_Blink
* Purpose      : to blink led 
* Parameters   : void
* Return value : void
*****************************************************************************/
void LED_Blink(void);
/*****************
 *End of the file*
 *****************/
 #endif
	