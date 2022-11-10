/**
 * @file SYS_TIMER.h
 * @brief C file for systimer driver 
 * @version 0.1
 * @date 11 Septemper 2022
 * @author Esraa
 * @copyright 
 * 
 */
  
	
#include "SYS_TIMER.h"


void systimer_init(uint32 time)
{
	 NVIC_ST_RELOAD_R = time;     
	 SETBIT(NVIC_SYS_CTRL,SYST_ENABLE);      //Enables SysTick to operate in a multi-shot way
	 SETBIT(NVIC_SYS_CTRL,SYST_INTEN);      //An interrupt is generated to the NVIC when SysTick counts
	 SETBIT(NVIC_SYS_CTRL,SYST_CLK_SRC);   //System clock
   NVIC_ST_CURRENT_R= 0;
	
	
	
}

