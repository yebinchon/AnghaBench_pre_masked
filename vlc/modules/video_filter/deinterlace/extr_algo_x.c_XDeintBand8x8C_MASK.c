
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int *,int) ;
 int FUNC_2 (int *,int,int *,int) ;
 int FUNC_3 (int *,int,int *,int,int *,int) ;
 int FUNC_4 (int *,int,int *,int,int,int) ;

__attribute__((used)) static inline void FUNC_5( uint8_t *VAR_0, int VAR_1,
                                   uint8_t *VAR_2, int VAR_3,
                                   const int VAR_4, int VAR_5 )
{
    int VAR_6;

    for( VAR_6 = 0; VAR_6 < VAR_4; VAR_6++ )
    {
        int VAR_7;
        if( ( VAR_7 = FUNC_0( VAR_2, VAR_3 ) ) )
        {
            if( VAR_6 == 0 || VAR_6 == VAR_4 - 1 )
                FUNC_2( VAR_0, VAR_1, VAR_2, VAR_3 );
            else
                FUNC_1( VAR_0, VAR_1, VAR_2, VAR_3 );
        }
        else
        {
            FUNC_3( VAR_0, VAR_1,
                             &VAR_2[0*VAR_3], 2*VAR_3,
                             &VAR_2[1*VAR_3], 2*VAR_3 );
        }

        VAR_0 += 8;
        VAR_2 += 8;
    }

    if( VAR_5 )
        FUNC_4( VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, 8 );
}
