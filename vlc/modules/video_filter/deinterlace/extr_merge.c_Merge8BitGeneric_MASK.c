
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



void FUNC_0( void *VAR_0, const void *VAR_1,
                       const void *VAR_2, size_t VAR_3 )
{
    uint8_t *VAR_4 = VAR_0;
    const uint8_t *VAR_5 = VAR_1;
    const uint8_t *VAR_6 = VAR_2;

    for( ; VAR_3 > 0; VAR_3-- )
        *VAR_4++ = ( *VAR_5++ + *VAR_6++ ) >> 1;
}
