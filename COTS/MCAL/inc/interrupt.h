/**
 * @file INTERRUPT.h
 * @brief header file for interrupt driver 
 * @version 0.1
 * @date 11 Septemper 2022
 * @author Esraa
 * @copyright 
 * 
 */
 
#ifndef INTERRUPT_H_
#define  INTERRUPT_H_
#include "std_macros.h"

#define EN_INT_F 					     NVIC_ENn(0)|= (1<<30);
#define PRI_F  						     NVIC_PRIn(3)|=(3<<5);
#define UNLOCK_CR_F				     GPIOLOCK_PORTF = 0x4C4F434B;   
#define LOCK_CR_F					     GPIOLOCK_PORTF = 0;            
#define CONFIG_F					     GPIOCR_PORTF |= 0x01;
#define EDGE_SENSE(PIN)        CLRBIT(GPIOIS_PORTF,PIN);
#define LEVEL_SENSE(PIN)       SETBIT(GPIOIS_PORTF,PIN);
#define FALLING_EDGE(PIN)			 CLRBIT(GPIOIBE_PORTF,PIN);
#define INT_MSK(PIN)           SETBIT(GPIOIM_PORTF,PIN);
#define CLR_INT(PIN)					 SETBIT(GPIOICR_PORTF,PIN);

 /*****************************************************************************
* Function Name: PIN_INT
* Purpose      : for make this pin affected by interrupt
* Parameters   : uint8
* Return value : void
*****************************************************************************/
void PIN_INT(uint8);
/*****************
 *End of the file*
 *****************/
 #endif
	

