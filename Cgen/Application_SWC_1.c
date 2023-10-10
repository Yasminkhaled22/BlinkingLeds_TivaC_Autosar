#include "Rte_Application_SWC_1.h"

/*
*Runnable:Application_SWC_1_Runnable_1
*Event Type:periodic
*DATA ACCESS:
* DATA SEND POINT:  Rte_Write_P_SR_State_1_Element_1(State State_1_Element_1)
*SYNCHRONOUS-SERVER-CALL-POINT:  Rte_Call_R_Port_1_CS_Read(PB1 CS_Read_Argument_1,PB2 CS_Read_Argument_2)
*/

//int My_State;
void Application_SWC_1_Runnable_1(void){

    if ((PushB1 == Not_Pressed) && (PushB2 == Not_Pressed))
    {
       Choosen_State =OFF;
    }
    else if((PushB1 == Pressed) && (PushB2 == Not_Pressed))
    {
       Choosen_State =CW;
    }
        else if((PushB1 == Not_Pressed) && (PushB2 == Pressed))
    {
       Choosen_State =CCW;
    }
  //  My_State = Choosen_State;

}


