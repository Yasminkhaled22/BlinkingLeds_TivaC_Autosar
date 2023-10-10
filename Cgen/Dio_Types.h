#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_

#include "Std_Types.h"

#define DIO_CONFIGURED_CHANNLES 5
#define DIO_CONFIGURED_PORTS 1
#define DIO_CONFIGURED_GROUPS 3

/***************************
 *                              Module Data Types                              *
 ***************************/

/* Type definition for Dio_ChannelType used by the DIO APIs */
typedef uint8 Dio_ChannelType;

/* Type definition for Dio_PortType used by the DIO APIs */
typedef uint8 Dio_PortType;

/* Type definition for Dio_LevelType used by the DIO APIs */
typedef uint8 Dio_LevelType;

/* Type definition for Dio_PortLevelType used by the DIO APIs */
typedef uint8 Dio_PortLevelType;

typedef uint32 Dio_PortRegisterType;

typedef uint8 Dio_Channel_Group_MaskType;

typedef uint8 Dio_Channel_Group_OffsetType;

typedef struct
{
  /* Mask which defines the positions of the channel group */
  uint8 mask;
  /* Position of the group from LSB */
  uint8 offset;
  /* This shall be the port ID which the Channel group is defined. */
  Dio_PortType PortIndex;
} Dio_ChannelGroupType;

typedef struct
{
	/* Member contains the ID of the Port that this channel belongs to */
	Dio_PortType Port_Num;
	/* Member contains the ID of the Channel*/
	Dio_ChannelType Ch_Num;
}Dio_ConfigChannel;

/* Data Structure required for initializing the Dio Driver */
typedef struct
{
	Dio_ConfigChannel Channels[DIO_CONFIGURED_CHANNLES];
	Dio_PortType ports[DIO_CONFIGURED_PORTS];
	Dio_ChannelGroupType groups [DIO_CONFIGURED_GROUPS];
} Dio_ConfigType;

typedef struct  

	{	
	
	    Dio_PortType DioPortId ;
		Dio_ChannelType DioChannel_startingIndex ;
		Dio_ChannelType DioChannel_numberOfInstances ;
		Dio_ChannelType DioChannelGroup_startingIndex ;
		Dio_ChannelType DioChannelGroup_numberOfInstances ;
	}DioPort_s;
	
	/* Array Of Structures Linking Configurations*/
	typedef struct

		{
		Dio_PortType DioPort_startingIndex ;
		Dio_PortType DioPort_numberOfInstances ;
		}DioConfig_s;

	/* Array Of Structures Linking Configurations*/
	typedef struct 
		{	
		Dio_ChannelType DioChannelId ;
		}DioChannel_s;
		
	/* Array Of Structures Linking Configurations*/
    typedef struct  
	{
    	/* Mask which defines the positions of the channel group */
    	Dio_Channel_Group_MaskType DioPortMask ;
        /* Position of the group from LSB */
    	Dio_Channel_Group_OffsetType DioPortOffset ;
    	/* This shall be the port ID which the Channel group is defined. */
    	Dio_PortType DioPortId ;
		
	}DioChannelGroup_s;


#endif