#include <stdint.h>

void clockInit(void); // Clock initialization providing a default SYSCLK of 24 MHz using the PLL and clock visibility of PLL/2 on PA8
void led_IO_init (void); // Configuration for PA5 as a push pull output with peripheral clocks for port A and port C turned on

void control_green_onboard_led(unsigned int on_or_off);
unsigned int read_on_board_blue_switch(void);
void delay_for(unsigned int wait_for);
void blink_forever(void * params);

