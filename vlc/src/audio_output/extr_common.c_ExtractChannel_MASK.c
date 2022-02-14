
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static inline void FUNC_1( uint8_t *VAR_0, int VAR_1,
                                   const uint8_t *VAR_2, int VAR_3,
                                   int VAR_4,
                                   const int *VAR_5, int VAR_6 )
{
    for( int VAR_7 = 0; VAR_7 < VAR_4; VAR_7++ )
    {
        for( int VAR_8 = 0; VAR_8 < VAR_1; VAR_8++ )
            FUNC_0( &VAR_0[VAR_8 * VAR_6], &VAR_2[VAR_5[VAR_8] * VAR_6], VAR_6 );
        VAR_0 += VAR_1 * VAR_6;
        VAR_2 += VAR_3 * VAR_6;
    }
}
