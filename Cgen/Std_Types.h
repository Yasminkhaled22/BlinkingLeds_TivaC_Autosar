#ifndef STD_TYPES_H
#define STD_TYPES_H

#define STD_HIGH        0x01U       /* Standard HIGH */
#define STD_LOW         0x00U       /* Standard LOW */

#define STD_ON       0x01U          /* Standard ON */
#define STD_OFF      0x00U          /* Standard OFF */

typedef    signed char    sint8;
typedef    signed short    sint16;
typedef    signed long    sint32;
typedef    signed long long    sint64;
typedef    unsigned char    uint8;
typedef    unsigned short    uint16;
typedef    unsigned long    uint32;
typedef    unsigned long long    uint64;
typedef    signed char    sint8_least;
typedef    signed short    sint16_least;
typedef    signed long    sint32_least;
typedef    unsigned char    uint8_least;
typedef    unsigned short    uint16_least;
typedef    unsigned long    uint32_least;
typedef    unsigned char    boolean;
typedef    float    float32;
typedef    double    float64;

#endif /* STD_TYPES_H */