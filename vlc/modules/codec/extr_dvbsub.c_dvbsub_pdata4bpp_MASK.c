
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int bs_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int*,int,int) ;

__attribute__((used)) static void FUNC_4( bs_t *VAR_0, uint8_t *VAR_1, int VAR_2, int *VAR_3 )
{
    bool VAR_4 = 0;

    while( !VAR_4 && !FUNC_1( VAR_0 ) )
    {
        int VAR_5 = 0, VAR_6 = 0;

        VAR_6 = FUNC_2( VAR_0, 4 );
        if( VAR_6 != 0x00 )
        {

            VAR_5 = 1;
        }
        else
        {
            if( FUNC_2( VAR_0, 1 ) == 0x00 )
            {
                VAR_5 = FUNC_2( VAR_0, 3 );
                if( VAR_5 != 0x00 )
                {
                    VAR_5 += 2;
                }
                else VAR_4 = 1;
            }
            else
            {
                if( FUNC_2( VAR_0, 1 ) == 0x00)
                {
                    VAR_5 = 4 + FUNC_2( VAR_0, 2 );
                    VAR_6 = FUNC_2( VAR_0, 4 );
                }
                else
                {
                    switch ( FUNC_2( VAR_0, 2 ) )
                    {
                    case 0x0:
                        VAR_5 = 1;
                        break;
                    case 0x1:
                        VAR_5 = 2;
                        break;
                    case 0x2:
                        VAR_5 = 9 + FUNC_2( VAR_0, 4 );
                        VAR_6 = FUNC_2( VAR_0, 4 );
                        break;
                    case 0x3:
                        VAR_5= 25 + FUNC_2( VAR_0, 8 );
                        VAR_6 = FUNC_2( VAR_0, 4 );
                        break;
                    }
                }
            }
        }

        if( !VAR_5 ) continue;


        if( ( VAR_5 + *VAR_3 ) > VAR_2 ) break;

        if( VAR_5 == 1 ) VAR_1[*VAR_3] = VAR_6;
        else FUNC_3( ( VAR_1 + *VAR_3 ), VAR_6, VAR_5 );

        (*VAR_3) += VAR_5;
    }

    FUNC_0( VAR_0 );
}
