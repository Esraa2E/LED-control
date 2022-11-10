/**
 * @file SYS_TIMER.h
 * @brief header file for systimer driver 
 * @version 0.1
 * @date 11 Septemper 2022
 * @author Esraa
 * @copyright 
 * 
 */
 
#ifndef SYS_TIMER_H_
#define  SYS_TIMER_H_
#include "std_macros.h"

#define second 15999999
#define m_sec  15999
#define u_sec  15
#define SYST_ENABLE  0
#define SYST_INTEN   1
#define SYST_CLK_SRC 2

 /*****************************************************************************
* Function Name: systimer_init
* Purpose      : to initialize systimer
* Parameters   : uint32
* Return value : void
*****************************************************************************/
void systimer_init(uint32);



/*****************
 *End of the file*
 *****************/
 #endif
	