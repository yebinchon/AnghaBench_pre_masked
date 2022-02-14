
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int config_chain_t ;


 int FUNC_0 (char const*) ;
 char* FUNC_1 (int **,char const*) ;
 size_t FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,size_t) ;

char *FUNC_5( char **VAR_0, config_chain_t **VAR_1,
                          const char *VAR_2 )
{
    size_t VAR_3;

    *VAR_0 = ((void*)0);
    *VAR_1 = ((void*)0);

    if( !VAR_2 )
        return ((void*)0);
    FUNC_0( VAR_2 );


    VAR_3 = FUNC_2( VAR_2, "{: \t" );
    *VAR_0 = FUNC_4( VAR_2, VAR_3 );
    VAR_2 += VAR_3;


    FUNC_0( VAR_2 );
    if( *VAR_2 == '{' )
        VAR_2 = FUNC_1( VAR_1, VAR_2 );

    if( *VAR_2 == ':' )
        return FUNC_3( VAR_2 + 1 );

    return ((void*)0);
}
