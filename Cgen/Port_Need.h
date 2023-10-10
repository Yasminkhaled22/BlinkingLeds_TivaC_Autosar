#ifndef Port_NEED_H
#define Port_NEED_H

#include "PortF.h"
#include "Port_LCfg.h"
#include "Compiler.h"



 Port_ConfigType Port_pinConfigurationSet[] = {

  NULL_PTR,                 /* PORT_PA0 */
  NULL_PTR,                 /* PORT_PA1 */
  NULL_PTR,                 /* PORT_PA2 */
  NULL_PTR,                 /* PORT_PA3 */
  NULL_PTR,                /* PORT_PA4 */
  NULL_PTR,               /* PORT_PA5 */
  NULL_PTR,                 /* PORT_PA6 */
  NULL_PTR,                 /* PORT_PA7 */
  NULL_PTR,                 /* PORT_PB0 */
  NULL_PTR,                 /* PORT_PB1 */
  NULL_PTR,                 /* PORT_PB2 */
  NULL_PTR,                 /* PORT_PB3 */
  NULL_PTR,                 /* PORT_PB4 */
  NULL_PTR,                 /* PORT_PB5 */
  NULL_PTR,                 /* PORT_PB6 */
  NULL_PTR,                 /* PORT_PB7 */
  NULL_PTR,                                     /* PORT_PC0 */
  NULL_PTR,                                     /* PORT_PC1 */
  NULL_PTR,                                     /* PORT_PC2 */
  NULL_PTR,                                     /* PORT_PC3 */
  NULL_PTR,                /* PORT_PC4 */
  NULL_PTR,                 /* PORT_PC5 */
  NULL_PTR,                 /* PORT_PC6 */
  NULL_PTR,                /* PORT_PC7 */
  NULL_PTR,                 /* PORT_PD0 */
  NULL_PTR,                /* PORT_PD1 */
  NULL_PTR,                 /* PORT_PD2 */
  NULL_PTR,                 /* PORT_PD3 */
  NULL_PTR,                 /* PORT_PD4 */
  NULL_PTR,                /* PORT_PD5 */
  NULL_PTR,                 /* PORT_PD6 */
  NULL_PTR,                                     /* PORT_PD7 */
  NULL_PTR,                 /* PORT_PE0 */
  NULL_PTR,                 /* PORT_PE1 */
  NULL_PTR,                 /* PORT_PE2 */
  NULL_PTR,                 /* PORT_PE3 */
  NULL_PTR,                /* PORT_PE4 */
  NULL_PTR,                 /* PORT_PE5 */
  NULL_PTR,                                     /* PORT_PE6 */  
  NULL_PTR,                                     /* PORT_PE7 */  
  &PortPin[0],                                   /* PORT_PF0 */
  &PortPin[1],  /* PORT_PF1 */
  &PortPin[2],              /* PORT_PF2 */
  &PortPin[3],               /* PORT_PF3 */
  &PortPin[4],  /* PORT_PF4 */
  NULL_PTR,                                     /* PORT_PF5 */
};

#endif
