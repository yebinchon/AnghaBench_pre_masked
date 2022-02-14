
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int*,int*) ;

__attribute__((used)) static void FUNC_1( const char *VAR_0,
                         int *VAR_1, int *VAR_2,
                         int *VAR_3, int *VAR_4 )
{
    *VAR_1 = *VAR_2 = *VAR_3 = *VAR_4 = -1;

    int VAR_5, VAR_6, VAR_7, VAR_8;

    if( !VAR_0 )
        return;

    if( *VAR_0 != '-' )
        VAR_0 = FUNC_0( VAR_0, &VAR_5, &VAR_6 );
    else
        VAR_5 = VAR_6 = -1;

    if( *VAR_0 == '-' )
        VAR_0 = FUNC_0( VAR_0 + 1, &VAR_7, &VAR_8 );
    else
        VAR_7 = VAR_8 = -1;

    if( *VAR_0 )
        return;

    *VAR_1 = VAR_5;
    *VAR_2 = VAR_7;
    *VAR_3 = VAR_6;
    *VAR_4 = VAR_8;
}
