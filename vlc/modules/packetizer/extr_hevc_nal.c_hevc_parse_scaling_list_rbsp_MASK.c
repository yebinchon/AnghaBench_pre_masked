
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bs_t ;


 unsigned int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5( bs_t *VAR_0 )
{
    if( FUNC_4( VAR_0 ) < 16 )
        return 0;

    for( int VAR_1=0; VAR_1<4; VAR_1++ )
    {
        for( int VAR_2=0; VAR_2<6; VAR_2 += (VAR_1 == 3) ? 3 : 1 )
        {
            if( FUNC_1( VAR_0 ) == 0 )
                FUNC_3( VAR_0 );
            else
            {
                unsigned VAR_3 = 8;
                unsigned VAR_4 = FUNC_0( 64, (1 << (4 + (VAR_1 << 1))));
                if( VAR_1 > 1 )
                {
                    VAR_3 = FUNC_2( VAR_0 ) + 8;
                }
                for( unsigned VAR_5=0; VAR_5<VAR_4; VAR_5++ )
                {
                    VAR_3 = ( VAR_3 + FUNC_2( VAR_0 ) + 256 ) % 256;
                }
            }
        }
    }

    return 1;
}
