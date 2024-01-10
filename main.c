/* 
Karim Ait-Allaoua
200406520
1/17/2023
*/
#include "util.h"
#include "stm32f10x.h"
#include "FreeRTOS.h"
#include "task.h"




int main(void) {
	
	//clock
	clockInit();
	led_IO_init();
	
		if (xTaskCreate(blink_forever, "blink_forever", configMINIMAL_STACK_SIZE,
                    NULL, tskIDLE_PRIORITY + 1,
                    NULL) == errCOULD_NOT_ALLOCATE_REQUIRED_MEMORY) {
											
				// do something, we failed to start up
    }
    vTaskStartScheduler();
	

	
}

