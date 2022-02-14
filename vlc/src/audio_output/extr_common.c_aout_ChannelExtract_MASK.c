
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int,void const*,int,int,int const*,int) ;
 int FUNC_1 (int) ;

void FUNC_2( void *VAR_0, int VAR_1,
                          const void *VAR_2, int VAR_3,
                          int VAR_4, const int *VAR_5, int VAR_6 )
{

    FUNC_1( VAR_0 != VAR_2 );


    if( VAR_6 == 8 )
        FUNC_0( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 1 );
    else if( VAR_6 == 16 )
        FUNC_0( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 2 );
    else if( VAR_6 == 32 )
        FUNC_0( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 4 );
    else if( VAR_6 == 64 )
        FUNC_0( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 8 );
}
