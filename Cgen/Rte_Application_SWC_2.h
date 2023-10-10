#ifndef RTE_APPLICATION_SWC_2_H_
#define RTE_APPLICATION_SWC_2_H_


#include "Rte.h"

extern void CS_Set(Set_V CS_Set_Argument_1);
extern void CDD_SWC_1_Runnable_2(Clear_V CS_Clear_Argument_1);

typedef enum
{
    OFF,CW,CCW
}State_1;

State_1 PB_State;
uint8 st;

#define    Rte_Call_R_Set_Clear_CS_Set(CS_Set_Argument_1)     (CS_Set(CS_Set_Argument_1))
#define    Rte_Call_R_Set_Clear_CS_Clear(CS_Clear_Argument_1)     (CDD_SWC_1_Runnable_2(CS_Clear_Argument_1))
#define    Rte_IRead_Application_SWC_2_Runnable_1_R_SR_State_1_Element_1(data)     (Rte_IRead_State_1_Element_1_Component_Composition_SWC2_R_SR_Application_SWC_2_Runnable_1(&data))



#endif
