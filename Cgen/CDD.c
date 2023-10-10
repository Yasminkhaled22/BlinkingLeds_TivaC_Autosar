#include "Rte_CDD.h"
#include "Dio.h"

/*
*Runnable:CDD_SWC_1_Runnable_1
*Event Type:operation invoked event
*DATA ACCESS:
*/


void CDD_SWC_1_Runnable_1(PB1 CS_Read_Argument_1,PB2 CS_Read_Argument_2)
{ 
    	CS_Read_Argument_1 = Dio_ReadChannel(PB1_ID);
        CS_Read_Argument_2 = Dio_ReadChannel(PB2_ID);
}

/*
*Runnable:CDD_SWC_1_Runnable_2
*Event Type:operation invoked event
*DATA ACCESS:
*/
void CDD_SWC_1_Runnable_2(Clear_V CS_Clear_Argument_1){
    

    switch (CS_Clear_Argument_1)
    {
        case 0:
        Dio_WriteChannel(RED, STD_LOW);      
        case 1:
        Dio_WriteChannel(BLUE, STD_LOW);
        case 2:
        Dio_WriteChannel(GREEN, STD_LOW);

    }

}

/*
*Runnable:CDD_Runnable_3
*Event Type:operation invoked event
*DATA ACCESS:
*/
void CDD_Runnable_3(Set_V CS_Set_Argument_1){
    switch (CS_Set_Argument_1)
    {
        case 0:
        Dio_WriteChannel(RED, STD_HIGH);      
        case 1:
        Dio_WriteChannel(GREEN, STD_HIGH);
        case 2:
        Dio_WriteChannel(BLUE, STD_HIGH);

    }


}


