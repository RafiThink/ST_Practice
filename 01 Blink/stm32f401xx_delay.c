#include "stm32f401xx_delay.h"

void _delay_ms(volatile int expected_delay)
{
	expected_delay = (F_CPU/15000)*expected_delay;
	volatile int delay_creation_loop;
	for(delay_creation_loop = 0; delay_creation_loop <= expected_delay; delay_creation_loop ++){}
}
