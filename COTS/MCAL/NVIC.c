/**
 * @file NVIC.c
 * @brief C file for NVIC driver 
 * @version 0.1
 * @date 11 Septemper 2022
 * @author Esraa
 * @copyright 
 * 
 */
 
 #include "NVIC.h"
 
 
 
 void NVIC_handler(void)
 {
			uint8 NUM, IRQ, PRI_N, EN_N = 0;
    	uint32 EN_BitMSK, PRI_BitMSK = 0;
	
    NVIC_APINT = (0x05FA0000u | PG ); 					

    for(NUM=0; NUM < NO_INTERRUPT ; NUM++){
    	IRQ = VECT[NUM];

		PRI_N= IRQ / 4;							
		PRI_BitMSK = ((IRQ - (4 * PRI_N)) * 8) + 5 ; 	

		EN_N = IRQ / 32;								
		EN_BitMSK = (IRQ % 32);							

		if	(PG == ggg)
			NVIC_PRIn(PRI_N) |= (GP[NUM] << PRI_BitMSK);
		else if(PG == ggs)
		{NVIC_PRIn(PRI_N) |= (GP[NUM] << (PRI_BitMSK+1));
			NVIC_PRIn(PRI_N) |= (SP[NUM] << PRI_BitMSK);}
			
    	else if(PG == gss)	{
			NVIC_PRIn(PRI_N) |= (GP[NUM]<< (PRI_BitMSK+2));
			NVIC_PRIn(PRI_N) |= (SP[NUM] << PRI_BitMSK);}
																	 
   		else if	(PG == sss)          
			NVIC_PRIn(PRI_N) |= (SP[NUM] << PRI_BitMSK);
    		
    	else 
			{
			}

    	NVIC_ENn(EN_N) |= (1 << EN_BitMSK);
		
    }
 }