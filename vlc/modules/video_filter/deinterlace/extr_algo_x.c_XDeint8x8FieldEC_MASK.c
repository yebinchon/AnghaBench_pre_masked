
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int*,int) ;

__attribute__((used)) static inline void FUNC_1( uint8_t *VAR_0, int VAR_1,
                                     uint8_t *VAR_2, int VAR_3 )
{
    int VAR_4, VAR_5;


    for( VAR_4 = 0; VAR_4 < 8; VAR_4 += 2 )
    {
        FUNC_0( VAR_0, VAR_2, 8 );
        VAR_0 += VAR_1;

        for( VAR_5 = 0; VAR_5 < 8; VAR_5++ )
            VAR_0[VAR_5] = (VAR_2[VAR_5] + VAR_2[2*VAR_3+VAR_5] ) >> 1;
        VAR_0 += 1*VAR_1;
        VAR_2 += 2*VAR_3;
    }
}
