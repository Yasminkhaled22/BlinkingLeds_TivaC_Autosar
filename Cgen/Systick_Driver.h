#ifndef SYSTICK_DRIVER_H
#define SYSTICK_DRIVER_H

void SysTick_Init(void);
void SysTick_Stop(void);
void SysTick_Start(void);
void SysTick_Handler(void);
void DelayMs (void);

#endif