/**
 * @file INTERRUPT.h
 * @brief header file for interrupt driver 
 * @version 0.1
 * @date 11 Septemper 2022
 * @author Esraa
 * @copyright 
 * 
 */
 
 #include "interrupt.h"
 
 
	
 
 void PIN_INT(uint8 pin){
	   UNLOCK_CR_F	
	    CONFIG_F	
		  LOCK_CR_F		
     EDGE_SENSE(pin)    
	   FALLING_EDGE(pin)	
	   INT_MSK(pin)      
	   CLR_INT(pin)	
     EN_INT_F			
		 PRI_F  					 
 }
