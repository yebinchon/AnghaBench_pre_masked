
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char const*) ;

char *FUNC_1( char **VAR_0, const char *VAR_1 )
{
    char *VAR_2 = *VAR_0;
    if( !VAR_2 )
        return ((void*)0);

    char *VAR_3 = FUNC_0( VAR_2, VAR_1 );
    if( !VAR_3 )
    {
        *VAR_0 = ((void*)0);
        return VAR_2;
    }
    *VAR_3++ = '\0';

    *VAR_0 = VAR_3;
    return VAR_2;
}
