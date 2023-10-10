#ifndef RTE_APPLICATION_SWC_1_H_
#define RTE_APPLICATION_SWC_1_H_


#include "Rte.h"


#define PushB1 0x01
#define PushB2 0x10


#define Not_Pressed 0
#define Pressed     1


extern void CDD_SWC_1_Runnable_1(PB1 CS_Read_Argument_1,PB2 CS_Read_Argument_2);

typedef enum
{
    OFF,CW,CCW
}State_2;

State_2 Choosen_State;

#define    Rte_Write_P_SR_State_1_Element_1(data)     (Rte_Write_Component_Composition_SWC1_P_SR_State_1_Element_1(data))
#define    Rte_Call_R_Port_1_CS_Read(CS_Read_Argument_1,CS_Read_Argument_2)     (CDD_SWC_1_Runnable_1(CS_Read_Argument_1,CS_Read_Argument_2))



#endif
