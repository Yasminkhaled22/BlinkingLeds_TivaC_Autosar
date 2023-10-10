

#ifndef DIO_H
#define DIO_H


#include "Std_Types.h"

/* Non AUTOSAR files */
#include "Common_Macros.h"

#define PB2_ID      (0U)
#define Red_ID       (1U)
#define Blue_ID      (2U)
#define Green_ID     (3U)
#define PB1_ID      (4U)

/* Number of Pins in the Single Port (MCU Specific) */
#define NUM_OF_PORT_SINGLE_PORT         (8U)
/******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/
/* Service ID for DIO read Channel */
#define DIO_READ_CHANNEL_SID           (uint8)0x00

/* Service ID for DIO write Channel */
#define DIO_WRITE_CHANNEL_SID          (uint8)0x01

/* Service ID for DIO read Port */
#define DIO_READ_PORT_SID              (uint8)0x02

/* Service ID for DIO write Port */
#define DIO_WRITE_PORT_SID             (uint8)0x03

/* Service ID for DIO read Channel Group */
#define DIO_READ_CHANNEL_GROUP_SID     (uint8)0x04

/* Service ID for DIO write Channel Group */
#define DIO_WRITE_CHANNEL_GROUP_SID    (uint8)0x05

/* Service ID for DIO GetVersionInfo */
#define DIO_GET_VERSION_INFO_SID       (uint8)0x12

/* Service ID for DIO Init Channel */
#define DIO_INIT_SID                   (uint8)0x10

/* Service ID for DIO flip Channel */
#define DIO_FLIP_CHANNEL_SID           (uint8)0x11




#define PORT_A 0
#define PORT_B 1
#define PORT_C 2
#define PORT_D 3
#define PORT_E 4
#define PORT_F 5

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/

/* Type definition for Dio_ChannelType used by the DIO APIs */
typedef uint8 Dio_ChannelType;

/* Type definition for Dio_PortType used by the DIO APIs */
typedef uint8 Dio_PortType;

/* Type definition for Dio_LevelType used by the DIO APIs */
typedef uint8 Dio_LevelType;

/* Type definition for Dio_PortLevelType used by the DIO APIs */
typedef uint8 Dio_PortLevelType;

typedef uint32 Dio_PortRegisterType;

enum Channels_IDS
{
    /*PORTA IDS*/
    channel0_ID,
    channel1_ID,
    channel2_ID,
    channel3_ID,
    channel4_ID,
    channel5_ID,
    channel6_ID,
    channel7_ID,
    /*PORTB IDS*/
    channel8_ID,
    channel9_ID,
    channel10_ID,
    channel11_ID,
    channel12_ID,
    channel13_ID,
    channel14_ID,
    channel15_ID,
    /*PORTC IDS*/
    channel16_ID,
    channel17_ID,
    channel18_ID,
    channel19_ID,
    cahnnel20_ID,
    channel21_ID,
    channel22_ID,
    channel23_ID,
    /*PORTD IDS*/
    channel24_ID,
    channel25_ID,
    channel26_ID,
    channel27_ID,
    channel28_ID,
    channel29_ID,
    channel30_ID,
    cahnnel31_ID,
    /*PORTE IDS*/
    channel32_ID,
    channel33_ID,
    channel34_ID,
    channel35_ID,
    channel36_ID,
    channel37_ID,
    /*PORTF IDS*/
    channel38_ID,
    channel39_ID,
    channel40_ID,
    cahnnel41_ID,
    channel42_ID,
    cahnnel43_ID,
};



/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

/* Function for DIO read Channel API */
Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId);

/* Function for DIO write Channel API */
void Dio_WritePort(Dio_PortType PortId, Dio_PortLevelType Level);

/* Function for DIO read Port API */
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);

/* Function for DIO write Port API */
void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level);

#if (DIO_FLIP_CHANNEL_API == STD_ON)
/* Function for DIO flip channel API */
Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId);

#endif

#endif
