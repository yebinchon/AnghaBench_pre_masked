
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int,int) ;

__attribute__((used)) static void FUNC_1( uint8_t *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                           int VAR_4, int VAR_5, int VAR_6, int VAR_7 )
{
    if( VAR_4 + VAR_6 > VAR_2 || VAR_5 + VAR_7 > VAR_3 )
        return;


    FUNC_0( &VAR_0[VAR_5 * VAR_1 + VAR_4], 0xff, VAR_6 );


    for( int VAR_8 = 1; VAR_8 < VAR_7-1; VAR_8++ )
    {
        VAR_0[(VAR_5+VAR_8) * VAR_1 + VAR_4 + 0] = 0xff;
        VAR_0[(VAR_5+VAR_8) * VAR_1 + VAR_4 + VAR_6-1] = 0xff;
    }


    FUNC_0( &VAR_0[(VAR_5+VAR_7-1) * VAR_1 + VAR_4], 0xff, VAR_6 );
}
