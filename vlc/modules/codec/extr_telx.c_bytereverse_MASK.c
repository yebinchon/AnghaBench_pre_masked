
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static uint8_t FUNC_0( int VAR_0 )
{
    VAR_0 = (((VAR_0 >> 1) & 0x55) | ((VAR_0 << 1) & 0xaa));
    VAR_0 = (((VAR_0 >> 2) & 0x33) | ((VAR_0 << 2) & 0xcc));
    VAR_0 = (((VAR_0 >> 4) & 0x0f) | ((VAR_0 << 4) & 0xf0));
    return VAR_0;
}
