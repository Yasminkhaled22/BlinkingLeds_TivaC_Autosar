#include "tm4c123gh6pm_registers.h"
#include "Rte_Application_SWC_1.h"

#define SYSTICK_PRIORITY_MASK  0x1FFFFFFF
#define SYSTICK_INTERRUPT_PRIORITY  3
#define SYSTICK_PRIORITY_BITS_POS   29
#define SYSTICK_10MS                10


void SysTick_Handler(void)
{
  Rte_Call_R_Port_1_CS_Read (PushB1,PushB2);
  Rte_Write_P_SR_State_1_Element_1(Choosen_State);

}

void SysTick_Start(void)
{
    SYSTICK_CTRL_REG    = 0;                         /* Disable the SysTick Timer by Clear the ENABLE Bit */
    SYSTICK_RELOAD_REG  = 15999 * SYSTICK_10MS;         /* Set the Reload value to count n miliseconds */
    SYSTICK_CURRENT_REG = 0;                         /* Clear the Current Register value */
    /* Configure the SysTick Control Register 
     * Enable the SysTick Timer (ENABLE = 1)
     * Enable SysTick Interrupt (INTEN = 1)
     * Choose the clock source to be System Clock (CLK_SRC = 1) */
    SYSTICK_CTRL_REG   |= 0x07;
    /* Assign priority level 3 to the SysTick Interrupt */
    NVIC_SYSTEM_PRI3_REG =  (NVIC_SYSTEM_PRI3_REG & SYSTICK_PRIORITY_MASK) | (SYSTICK_INTERRUPT_PRIORITY << SYSTICK_PRIORITY_BITS_POS);
}


void SysTick_Stop(void)
{
    SYSTICK_CTRL_REG = 0; /* Disable the SysTick Timer by Clear the ENABLE Bit */
}

void DelayMs (void)
{
  int delay =0;
  for (delay=0; delay <50; delay ++)
  {
    while(!(SYSTICK_CTRL_REG & (1<<16))); /* wait until thew COUNT flag = 1 which mean SysTick Timer reaches ZERO value ... COUNT flag is cleared after read the CTRL register value */
  }
}

