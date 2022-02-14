
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 char* FUNC_0 (int const) ;
 int FUNC_1 (char const*) ;
 size_t FUNC_2 (int *,int const,char const*) ;

char *FUNC_3( const char *VAR_0 )
{
    const int VAR_1 = FUNC_1( VAR_0 );
    char *VAR_2 = FUNC_0( VAR_1 + 1 );
    size_t VAR_3;
    if( !VAR_2 )
        return ((void*)0);

    VAR_3 = FUNC_2( (uint8_t*)VAR_2, VAR_1, VAR_0 );
    VAR_2[VAR_3] = '\0';

    return VAR_2;
}
