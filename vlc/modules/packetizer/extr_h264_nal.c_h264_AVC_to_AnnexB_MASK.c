
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint32_t ;


 unsigned int VAR_0 ;

void FUNC_0( uint8_t *VAR_1, uint32_t VAR_2,
                             uint8_t VAR_3 )
{
    uint32_t VAR_4 = 0;
    uint8_t VAR_5 = 0;

    if( VAR_3 != 4 )
        return;



    while( VAR_2 > 0 )
    {
        if( VAR_5 < VAR_3 ) {
            unsigned int VAR_6;
            for( VAR_6 = 0; VAR_5 < VAR_3 && VAR_6 < VAR_2; VAR_6++, VAR_5++ ) {
                VAR_4 = (VAR_4 << 8) | VAR_1[VAR_6];
                VAR_1[VAR_6] = 0;
            }
            if( VAR_5 < VAR_3 )
                return;
            VAR_1[VAR_6 - 1] = 1;
            VAR_1 += VAR_6;
            VAR_2 -= VAR_6;
        }
        if( VAR_4 > VAR_0 )
            return;
        if( VAR_4 > VAR_2 )
        {
            VAR_4 -= VAR_2;
            return;
        }
        else
        {
            VAR_1 += VAR_4;
            VAR_2 -= VAR_4;
            VAR_4 = 0;
            VAR_5 = 0;
        }
    }
}
