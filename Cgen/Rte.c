#include "Rte_Type.h"
#include "Compiler.h"

State Component_Composition_SWC1_P_SR_State_1_Element_1 = 0;


Std_ReturnType Rte_Write_Component_Composition_SWC1_P_SR_State_1_Element_1(State data)
{
     Component_Composition_SWC1_P_SR_State_1_Element_1 = data;
   return E_OK;
}

Std_ReturnType Rte_Read_Component_Composition_SWC2_R_SR_State_1_Element_1(State* data)
{
   Std_ReturnType return_value = E_NOT_OK;
   if (NULL_PTR == data){
         return_value = E_NOT_OK;
   }

   else{
      *data = Component_Composition_SWC1_P_SR_State_1_Element_1;
      return_value = E_OK;
   }
   return return_value;
}



