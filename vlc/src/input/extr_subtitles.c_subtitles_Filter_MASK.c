
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__*,char const*) ;
 char* FUNC_1 (char const*,char) ;
 scalar_t__** VAR_0 ;

int FUNC_2( const char *VAR_1 )
{
    const char *VAR_2 = FUNC_1( VAR_1, '.');

    if( !VAR_2 )
        return 0;
    VAR_2++;

    for( int VAR_3 = 0; VAR_0[VAR_3][0]; VAR_3++ )
        if( FUNC_0( VAR_0[VAR_3], VAR_2 ) == 0 )
            return 1;
    return 0;
}
