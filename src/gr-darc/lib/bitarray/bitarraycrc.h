/***************************************************************************
*                         Arrays of Arbitrary Bit Length
*
*   File    : bitarraycrc.cpp
*   Purpose : 
*
*   Author  : 
*   Date    : 
*
****************************************************************************
*   HISTORY
*
*
****************************************************************************
*
* <insert GNU license here>
*
***************************************************************************/
#ifndef BIT_ARRAY_CRC_H
#define BIT_ARRAY_CRC_H

/***************************************************************************
*                             INCLUDED FILES
***************************************************************************/
#include <ostream>
#include "bitarray.h"

/***************************************************************************
*                            TYPE DEFINITIONS
***************************************************************************/
void bit_array_crc(bit_array_c &crc, 
            const bit_array_c &input, 
            const bit_array_c &polynom, 
            const bit_array_c &code);

#endif  /* ndef BIT_ARRAY_CRC_H */
