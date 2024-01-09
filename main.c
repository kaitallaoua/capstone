/* 
Karim Ait-Allaoua
200406520
1/17/2023
*/
#include "util.h"
#include "stm32f10x.h"
void control_green_onboard_led(unsigned int on_or_off);
unsigned int read_on_board_blue_switch(void);
void delay_for(unsigned int wait_for);

/* TODO: simplify this code like the other */
void control_green_onboard_led(unsigned int on_or_off)
{
	/* off == 0, on == 1 */
	if (on_or_off == 0)
	{
		GPIOA->ODR &= ~GPIO_ODR_ODR5;
	}
	else if (on_or_off == 1)
	{
		GPIOA->ODR |= GPIO_ODR_ODR5;
	}
}

void delay_for(unsigned int wait_for)
{
	for (unsigned int i = 0; i < wait_for; i++)
	{
	}
}

unsigned int read_on_board_blue_switch(void)
{
	/* 0 if pushed, 1 if not */
	return (GPIOC->IDR & GPIO_IDR_IDR13) >> 12;
}

int main(void) {
	
	//clock
	clockInit();
	led_IO_init();
	
	    while(1){
			GPIOA->BSRR = NUC_GREEN_ON;
			delay_for(900000);
	    GPIOA->BSRR = NUC_GREEN_OFF;
			delay_for(1800000);
			}
	
}

