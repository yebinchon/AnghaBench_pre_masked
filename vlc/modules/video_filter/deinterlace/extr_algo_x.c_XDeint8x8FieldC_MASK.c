
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static inline void FUNC_2( uint8_t *VAR_0, int VAR_1,
                                    uint8_t *VAR_2, int VAR_3 )
{
    int VAR_4, VAR_5;


    for( VAR_4 = 0; VAR_4 < 8; VAR_4 += 2 )
    {
        FUNC_1( VAR_0, VAR_2, 8 );
        VAR_0 += VAR_1;

        for( VAR_5 = 0; VAR_5 < 8; VAR_5++ )
        {
            uint8_t *VAR_6 = &VAR_2[2*VAR_3];


            const int VAR_7 = FUNC_0(VAR_2[VAR_5-4]-VAR_6[VAR_5-2]) + FUNC_0(VAR_2[VAR_5-3]-VAR_6[VAR_5-1]) +
                           FUNC_0(VAR_2[VAR_5-2]-VAR_6[VAR_5+0]) + FUNC_0(VAR_2[VAR_5-1]-VAR_6[VAR_5+1]) +
                           FUNC_0(VAR_2[VAR_5+0]-VAR_6[VAR_5+2]) + FUNC_0(VAR_2[VAR_5+1]-VAR_6[VAR_5+3]) +
                           FUNC_0(VAR_2[VAR_5+2]-VAR_6[VAR_5+4]) + FUNC_0(VAR_2[VAR_5+3]-VAR_6[VAR_5+5]);

            const int VAR_8 = FUNC_0(VAR_2[VAR_5-3]-VAR_6[VAR_5-3]) + FUNC_0(VAR_2[VAR_5-2]-VAR_6[VAR_5-2]) +
                           FUNC_0(VAR_2[VAR_5-1]-VAR_6[VAR_5-1]) + FUNC_0(VAR_2[VAR_5+0]-VAR_6[VAR_5+0]) +
                           FUNC_0(VAR_2[VAR_5+1]-VAR_6[VAR_5+1]) + FUNC_0(VAR_2[VAR_5+2]-VAR_6[VAR_5+2]) +
                           FUNC_0(VAR_2[VAR_5+3]-VAR_6[VAR_5+3]) + FUNC_0(VAR_2[VAR_5+4]-VAR_6[VAR_5+4]);

            const int VAR_9 = FUNC_0(VAR_2[VAR_5-2]-VAR_6[VAR_5-4]) + FUNC_0(VAR_2[VAR_5-1]-VAR_6[VAR_5-3]) +
                           FUNC_0(VAR_2[VAR_5+0]-VAR_6[VAR_5-2]) + FUNC_0(VAR_2[VAR_5+1]-VAR_6[VAR_5-1]) +
                           FUNC_0(VAR_2[VAR_5+2]-VAR_6[VAR_5+0]) + FUNC_0(VAR_2[VAR_5+3]-VAR_6[VAR_5+1]) +
                           FUNC_0(VAR_2[VAR_5+4]-VAR_6[VAR_5+2]) + FUNC_0(VAR_2[VAR_5+5]-VAR_6[VAR_5+3]);

            if( VAR_7 < VAR_8 && VAR_8 <= VAR_9 )
                VAR_0[VAR_5] = (VAR_2[VAR_5-1] + VAR_6[VAR_5+1]) >> 1;
            else if( VAR_9 < VAR_8 && VAR_8 <= VAR_7 )
                VAR_0[VAR_5] = (VAR_2[VAR_5+1] + VAR_6[VAR_5-1]) >> 1;
            else
                VAR_0[VAR_5] = (VAR_2[VAR_5+0] + VAR_6[VAR_5+0]) >> 1;
        }

        VAR_0 += 1*VAR_1;
        VAR_2 += 2*VAR_3;
    }
}
