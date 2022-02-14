
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void FUNC_0( uint8_t *VAR_0, uint32_t VAR_1 )
{
    *VAR_0 = ( VAR_1 & 0xFF000000 ) >> 24;
    *( VAR_0 + 1 ) = ( VAR_1 & 0xFF0000 ) >> 16;
    *( VAR_0 + 2 ) = ( VAR_1 & 0xFF00 ) >> 8;
    *( VAR_0 + 3 ) = VAR_1 & 0xFF;
}
