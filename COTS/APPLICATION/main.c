
#include "LED.h"
uint8 BUTTON = BUTTON_OFF;

//MAP 0X40000000, 0X400FFFFF READ WRITE
int main()
{
   LED_init();		
   LED_Blink();
	
		
	while(1)
	{ 
	}
	
}
void GPIOF_Handler(void)
{

	    BUTTON = BUTTON_ON;
	}
	    


void SysTick_Handler(void)
{
	if(BUTTON)
	{TOGBIT(GPIODATA_PORTF,2);
		CLRBIT(GPIODATA_PORTF,3);
	}
	if(!BUTTON)
	{TOGBIT(GPIODATA_PORTF,3);
		CLRBIT(GPIODATA_PORTF,2);
	}
	
	
}