/**
 * @file TIMER0.h
 * @author Esraa
 * @brief header file to define timer0
 * @version 0.1
 * @date 18 Septemper 2022
 * 
 * @copyright 
 * 
 */


 #include "TIMER0.h"
 
 // Initialization for PORTA 
 void TIMER0_init()
 {
		SETBIT(RCGCTIMER,0);		// Set clock for Timer0
	  GPTMCTL0 = 0;						//Disable timer output
	  SETBIT(GPTMCFG0,2);      //For a 16/32-bit timer, this value selects the 16-bit timer configuration
    SETBIT(GPTMTAMR0,1);     //Periodic Timer mode
	  SETBIT(GPTMTAPR0,0);
	 
	 
 }
 
 
 
 /*****************
 *End of the file*
 *****************/