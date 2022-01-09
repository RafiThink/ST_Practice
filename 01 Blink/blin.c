#include "stm32f4xx.h"                  // Device header
#include "stm32f401xx_delay.h"

int main(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
	GPIOC->MODER |= GPIO_MODER_MODE13_0;

	while(1)
	{
		GPIOC->ODR ^= GPIO_ODR_ODR_13;
		_delay_ms(1000);
	}
}
