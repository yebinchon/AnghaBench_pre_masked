
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ssize_t ;



void FUNC_0( const void *VAR_0, void *VAR_1, ssize_t VAR_2 )
{
    const uint8_t *VAR_3 = VAR_0;
    uint8_t *VAR_4 = VAR_1;

    if( VAR_2 < 0 )
        return;

    for( ssize_t VAR_5 = 0; VAR_5 < VAR_2-1; VAR_5 += 2 )
    {
        uint8_t VAR_6 = VAR_3[VAR_5+0];
        VAR_4[VAR_5+0] = VAR_3[VAR_5+1];
        VAR_4[VAR_5+1] = VAR_6;
    }
}
