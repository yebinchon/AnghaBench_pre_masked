
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ int_fast16_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1( uint8_t *VAR_1, uint8_t *VAR_2,
                                 int VAR_3, int VAR_4,
                                 int* VAR_5, int* VAR_6 )
{


    int32_t VAR_7 = 0;
    int32_t VAR_8 = 0;
    int32_t VAR_9 = 0;

    for( int VAR_10 = 0; VAR_10 < 8; ++VAR_10 )
    {
        uint8_t *VAR_11 = VAR_2;
        uint8_t *VAR_12 = VAR_1;
        int VAR_13 = 0;
        for( int VAR_14 = 0; VAR_14 < 8; ++VAR_14 )
        {
            int_fast16_t VAR_15 = FUNC_0((*VAR_11) - (*VAR_12));
            if( VAR_15 > VAR_0 )
                ++VAR_13;

            ++VAR_11;
            ++VAR_12;
        }

        VAR_7 += VAR_13;
        if( VAR_10 % 2 == 0 )
            VAR_8 += VAR_13;
        else
            VAR_9 += VAR_13;

        VAR_2 += VAR_4;
        VAR_1 += VAR_3;
    }
    (*VAR_5) = ( VAR_8 >= 8 );
    (*VAR_6) = ( VAR_9 >= 8 );



    return (VAR_7 >= 8);
}
