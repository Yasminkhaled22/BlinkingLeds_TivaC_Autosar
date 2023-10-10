
#ifndef PortF_H
#define PortF_H



#include "Std_Types.h"

#include "Common_Macros.h"
#include "Compiler.h"


#include "Port_Types.h"

/* Number of Pins in the Single Port (MCU Specific) */
#define NUM_OF_PORT_SINGLE_PORT         (8U)

#define Port_ALL_PINS_NUMBERS           (43U)

/*
 * macros for pin different Modes,
 * assigned to mode of type Port_PinModeType
 */
#define PORT_DIO_MODE                   (0U)
#define PORT_ALTERNATE_FUNCTION_01_MODE (1U)
#define PORT_ALTERNATE_FUNCTION_02_MODE (2U)
#define PORT_ALTERNATE_FUNCTION_03_MODE (3U)
#define PORT_ALTERNATE_FUNCTION_04_MODE (4U)
#define PORT_ALTERNATE_FUNCTION_05_MODE (5U)
#define PORT_ALTERNATE_FUNCTION_06_MODE (6U)
#define PORT_ALTERNATE_FUNCTION_07_MODE (7U)
#define PORT_ALTERNATE_FUNCTION_08_MODE (8U)
#define PORT_ALTERNATE_FUNCTION_09_MODE (9U)
#define PORT_ALTERNATE_FUNCTION_10_MODE (10U)
#define PORT_ALTERNATE_FUNCTION_11_MODE (11U)
#define PORT_ALTERNATE_FUNCTION_12_MODE (12U)
#define PORT_ALTERNATE_FUNCTION_13_MODE (13U)
#define PORT_ALTERNATE_FUNCTION_14_MODE (14U)
#define PORT_ANALOG_MODE                (15U)


#define PORT_PA0                        (1U)
#define PORT_PA1                        (2U)
#define PORT_PA2                        (3U)
#define PORT_PA3                        (4U)
#define PORT_PA4                        (5U)
#define PORT_PA5                        (6U)
#define PORT_PA6                        (7U)
#define PORT_PA7                        (8U)

#define PORT_PB0                        (9U)
#define PORT_PB1                        (10U)
#define PORT_PB2                        (11U)
#define PORT_PB3                        (12U)
#define PORT_PB4                        (13U)
#define PORT_PB5                        (14U)
#define PORT_PB6                        (15U)
#define PORT_PB7                        (16U)

#define PORT_PC0                        (17U)
#define PORT_PC1                        (18U)
#define PORT_PC2                        (19U)
#define PORT_PC3                        (20U)
#define PORT_PC4                        (21U)
#define PORT_PC5                        (22U)
#define PORT_PC6                        (23U)
#define PORT_PC7                        (24U)

#define PORT_PD0                        (25U)
#define PORT_PD1                        (26U)
#define PORT_PD2                        (27U)
#define PORT_PD3                        (28U)
#define PORT_PD4                        (29U)
#define PORT_PD5                        (30U)
#define PORT_PD6                        (31U)
#define PORT_PD7                        (32U)

#define PORT_PE0                        (33U)
#define PORT_PE1                        (34U)
#define PORT_PE2                        (35U)
#define PORT_PE3                        (36U)
#define PORT_PE4                        (37U)
#define PORT_PE5                        (38U)


#define PORT_PF0                        (39U)
#define PORT_PF1                        (40U)
#define PORT_PF2                        (41U)
#define PORT_PF3                        (42U)
#define PORT_PF4                        (43U)


/******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/

/* service ID for PORT init */
#define PORT_INIT_SID                   (uint8)0x00

/* service ID for PORT set pin direction */
#define PORT_SET_PIN_DIRECTION_SID          (uint8)0x01

/* service ID for PORT refresh pin direction */
#define PORT_REFRESH_PORT_DIRECTION_SID      (uint8)0x02

/* service ID for PORT get version info */
#define PORT_GET_VERSION_INFO_SID           (uint8)0x03

/* service ID for PORT set pin mode */
#define PORT_SET_PIN_MODE_SID               (uint8)0x04

///////////////////////////////////////////////////////////////////////////////


/* function for PORT initialization API */
void Port_Init( const Port_ConfigType* ConfigPtr );

#if (PORT_SET_PIN_DIRECTION_API == STD_ON)
/* function for setting direction API */
void Port_SetPinDirection( Port_PinType Pin, Port_PinDirectionType Direction );
#endif

#endif