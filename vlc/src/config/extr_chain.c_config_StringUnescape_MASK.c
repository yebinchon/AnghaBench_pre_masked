
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;

char *FUNC_1( char *VAR_0 )
{
    char *VAR_1 = VAR_0;
    char *VAR_2 = VAR_0;
    if( !VAR_1 )
        return ((void*)0);

    while( *VAR_1 )
    {
        if( FUNC_0( VAR_1 ) )
            VAR_1++;
        *VAR_2++ = *VAR_1++;
    }
    *VAR_2 = '\0';

    return VAR_0;
}
