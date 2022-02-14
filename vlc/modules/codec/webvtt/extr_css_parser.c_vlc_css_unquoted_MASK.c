
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 size_t FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,size_t) ;

char * FUNC_3( const char *VAR_0 )
{
    char *VAR_1;
    if( *VAR_0 == '\'' || *VAR_0 == '\"' )
    {
        size_t VAR_2 = FUNC_1(VAR_0);
        if( VAR_0[VAR_2 - 1] == VAR_0[0] )
            VAR_1 = FUNC_2( VAR_0 + 1, VAR_2 - 2 );
        else
            VAR_1 = FUNC_0( VAR_0 );
    }
    else
    {
        VAR_1 = FUNC_0( VAR_0 );
    }
    return VAR_1;
}
