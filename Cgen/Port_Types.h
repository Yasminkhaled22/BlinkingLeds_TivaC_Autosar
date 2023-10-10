#ifndef Port_Types_H
#define Port_Types_H

/* Standard AUTOSAR types */
#include "Std_Types.h"



#define PORT_PIN_SIZE                              (43U)
/* Number of Pins in the Single Port (MCU Specific) */
#define NUM_OF_PORT_SINGLE_PORT         (8U)

/* Data type for the symbolic name of a port pin */
typedef uint8 Port_PinType;

/* Data type for the symbolic name of a port */
typedef uint8 Port_Type;

typedef enum
{
	PORT_PIN_MODE_ADC,
	PORT_PIN_MODE_CAN,
	PORT_PIN_MODE_DIO,
	PORT_PIN_MODE_DIO_GPT,
	PORT_PIN_MODE_DIO_WDG,
	PORT_PIN_MODE_FLEXRAY,
	PORT_PIN_MODE_ICU,
	PORT_PIN_MODE_LIN,
	PORT_PIN_MODE_MEM,
	PORT_PIN_MODE_PWM,
	PORT_PIN_MODE_SPI

}Port_PinModeType;


/* Possible directions of a port pin */
typedef enum{
  PORT_PIN_IN,          /* Sets port pin as input */
  PORT_PIN_OUT,         /* Sets port pin as output */
}Port_PinDirectionType;


/* Description: Enum to hold internal resistor type for PIN */
typedef enum
{
    PORT_PIN_IN_NO_PULL,
    PORT_PIN_IN_PULL_DOWN,
    PORT_PIN_IN_PULL_UP

}Port_InternalResistor;

typedef enum
{
	PORT_PIN_LEVEL_HIGH,
	PORT_PIN_LEVEL_LOW

}Port_PinLevelType;

typedef struct
{
    Port_PinDirectionType  PortPinDirection;              /* PORT_PIN_IN, PORT_PIN_OUT */
    boolean                PortPinDirectionChangeable;       /* STD_ON, STD_OFF */
    Port_PinType           PortPinId;
    Port_PinModeType       PortPinInitialMode;             /* STD_HIGH, STD_LOW */
    Port_PinLevelType      PortPinLevelValue;
    Port_PinModeType       PortPinMode;                   /* PORT_DIO_MODE...PORT_ANALOG_MODE */
    boolean                PortPinModeChangeable;             /* STD_ON, STD_OFF */
    Port_InternalResistor  PortPinInputPullResistor;               /* OFF,PULL_UP,PULL_DOWN */

}Pin_ConfigType;

typedef Pin_ConfigType PortPin_s;

/* structure that is required for initialization API */
typedef struct
{
  /* array of pointers to config struct to optimize memory storage */
  const PortPin_s* Pins [PORT_PIN_SIZE];
}Port_ConfigType;

typedef Port_ConfigType config;

typedef struct
{
	Port_Type PortContainer_startingIndex;
	Port_Type PortContainer_numberOfInstances;

}PortConfigSet_s;

typedef struct
{
	Port_Type PortNumberOfPortPins;
	Port_Type PortPin_startingIndex;
	Port_Type PortPin_numberOfInstances;
}PortContainer_s;


#endif /* PORT_TYPES_H_ */