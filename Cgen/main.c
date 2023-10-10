
#include "Systick_Driver.h"
#include "PortF.h"
#include "Port_LCfg.h"
#include "Compiler.h"
#include "Port_Need.h"

#define Enable_Interrupts()    __asm("CPSIE I")
#define Wait_For_Interrupt()     __asm("WFI") 

extern void Application_SWC_1_Runnable_1(void);
extern void Application_SWC_2_Runnable_1(void);

int main()
{
  
  

  Port_Init(Port_pinConfigurationSet);
  SysTick_Start();
  Enable_Interrupts();
  for(;;)
  {
    Application_SWC_1_Runnable_1();
    Application_SWC_2_Runnable_1();
  }
  return 0;
}
