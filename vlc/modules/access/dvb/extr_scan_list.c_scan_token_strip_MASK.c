
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0( const char **VAR_0, size_t *VAR_1 )
{
    const char *VAR_2 = *VAR_0;
    size_t VAR_3 = *VAR_1;

    for ( ; *VAR_2 <= ' ' && *VAR_2 ; VAR_2++ )
        VAR_3--;

    for( ; VAR_3 > 0; VAR_3-- )
    {
        const char VAR_4 = VAR_2[ VAR_3 - 1 ];
        if( VAR_4 > ' ' || VAR_4 == '\0' )
            break;
    }

    *VAR_0 = VAR_2;
    *VAR_1 = VAR_3;
}
