#ifndef _NODE_TYPES_H
#define _NODE_TYPES_H

#include <stdint.h>

#define STRUCT_TYPE_TEMPERATUREMAN 0x76

typedef struct temperature_t
{
    uint8_t stype = STRUCT_TYPE_TEMPERATUREMAN;

    uint8_t battery = 0;

    //! temperature in range [-50C .. 100C]
    uint16_t temperature = 0;
} temperature_t;

#endif
