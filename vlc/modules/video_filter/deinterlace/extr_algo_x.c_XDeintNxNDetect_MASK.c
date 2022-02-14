
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static inline int FUNC_1( uint8_t *VAR_0, int VAR_1,
                                   int VAR_2, int VAR_3 )
{
    int VAR_4, VAR_5;
    int VAR_6, VAR_7;
    int VAR_8;




    VAR_6 = VAR_7 = 0;
    VAR_8 = 0;
    for( VAR_4 = 0; VAR_4 < VAR_2 - 2; VAR_4 += 2 )
    {
        const uint8_t *VAR_9 = &VAR_0[VAR_4*VAR_1];
        for( VAR_5 = 0; VAR_5 < VAR_3; VAR_5++ )
        {
            VAR_7 += FUNC_0(VAR_9[ VAR_5] - VAR_9[1*VAR_1+VAR_5]);
            VAR_6 += FUNC_0(VAR_9[ VAR_5] - VAR_9[2*VAR_1+VAR_5]);
        }
        if( VAR_6 < VAR_7 && VAR_7 > VAR_3 / 2 )
            VAR_8++;
    }

    return VAR_8 < 2 ? 0 : 1;
}
