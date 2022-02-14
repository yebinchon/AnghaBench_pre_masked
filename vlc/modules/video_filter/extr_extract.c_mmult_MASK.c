
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0( double *VAR_0, double *VAR_1, double *VAR_2 )
{
    for( int VAR_3 = 0; VAR_3 < 3; VAR_3++ )
    {
        for( int VAR_4 = 0; VAR_4 < 3; VAR_4++ )
        {
            VAR_0[ VAR_3*3 + VAR_4 ] = 0.;
            for( int VAR_5 = 0; VAR_5 < 3; VAR_5++ )
            {
                VAR_0[ VAR_3*3 + VAR_4 ] += VAR_1[ VAR_3*3 + VAR_5 ] * VAR_2[ VAR_5*3 + VAR_4 ];
            }
        }
    }
}
