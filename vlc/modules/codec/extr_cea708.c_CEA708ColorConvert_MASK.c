
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0( uint8_t VAR_0 )
{
    const uint32_t VAR_1[4] = {0x00,0x3F,0xF0,0xFF};
    VAR_0 = VAR_0 & 0x3F;
    return (VAR_1[(VAR_0 >> 4) & 0x03] << 16) |
           (VAR_1[(VAR_0 >> 2) & 0x03] << 8) |
           VAR_1[VAR_0 & 0x03];
}
