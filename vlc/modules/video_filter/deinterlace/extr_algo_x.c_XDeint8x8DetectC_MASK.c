
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1( uint8_t *VAR_0, int VAR_1 )
{
    int VAR_2, VAR_3;
    int VAR_4, VAR_5;
    int VAR_6;


    VAR_6 = 0;
    for( VAR_2 = 0; VAR_2 < 7; VAR_2 += 2 )
    {
        VAR_4 = VAR_5 = 0;
        for( VAR_3 = 0; VAR_3 < 8; VAR_3++ )
        {
            VAR_5 += FUNC_0(VAR_0[ VAR_3] - VAR_0[1*VAR_1+VAR_3]) +
                  FUNC_0(VAR_0[VAR_1+VAR_3] - VAR_0[2*VAR_1+VAR_3]);
            VAR_4 += FUNC_0(VAR_0[ VAR_3] - VAR_0[2*VAR_1+VAR_3]) +
                  FUNC_0(VAR_0[VAR_1+VAR_3] - VAR_0[3*VAR_1+VAR_3]);
        }
        if( VAR_4 < 6*VAR_5/8 && VAR_5 > 32 )
            VAR_6++;

        VAR_0 += 2*VAR_1;
    }

    return VAR_6 < 1 ? 0 : 1;
}
