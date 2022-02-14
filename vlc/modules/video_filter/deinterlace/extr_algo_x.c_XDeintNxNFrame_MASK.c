
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static inline void FUNC_1( uint8_t *VAR_0, int VAR_1,
                                   uint8_t *VAR_2, int VAR_3,
                                   int VAR_4, int VAR_5 )
{
    int VAR_6, VAR_7;


    for( VAR_6 = 0; VAR_6 < VAR_5; VAR_6 += 2 )
    {
        FUNC_0( VAR_0, VAR_2, VAR_4 );
        VAR_0 += VAR_1;

        if( VAR_6 < VAR_5 - 2 )
        {
            for( VAR_7 = 0; VAR_7 < VAR_4; VAR_7++ )
                VAR_0[VAR_7] = (VAR_2[VAR_7] + 2*VAR_2[1*VAR_3+VAR_7] + VAR_2[2*VAR_3+VAR_7] + 2 ) >> 2;
        }
        else
        {

            for( VAR_7 = 0; VAR_7 < VAR_4; VAR_7++ )
                VAR_0[VAR_7] = (VAR_2[VAR_7] + VAR_2[1*VAR_3+VAR_7] ) >> 1;
        }
        VAR_0 += 1*VAR_1;
        VAR_2 += 2*VAR_3;
    }
}
