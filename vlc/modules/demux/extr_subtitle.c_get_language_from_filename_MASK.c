
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static char * FUNC_3( const char * VAR_0 )
{
    char *VAR_1 = ((void*)0);
    char *VAR_2, *VAR_3;

    if( !VAR_0 ) return ((void*)0);
    char *VAR_4 = FUNC_1( VAR_0 );


    VAR_2 = FUNC_2( VAR_4, '.' );
    if( VAR_2 )
    {
        VAR_2[0] = '\0';
        VAR_3 = FUNC_2( VAR_4, '.' );
        if( VAR_3 )
            VAR_1 = FUNC_1(++VAR_3);
        VAR_2[0] = '.';
    }

    FUNC_0( VAR_4 );
    return VAR_1;
}
