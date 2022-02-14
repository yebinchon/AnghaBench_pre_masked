
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int * FUNC_0 (int const) ;
 int FUNC_1 (char const*) ;
 size_t FUNC_2 (int *,int const,char const*) ;

size_t FUNC_3( uint8_t **VAR_0, const char *VAR_1 )
{
    const int VAR_2 = FUNC_1( VAR_1 );
    uint8_t *VAR_3;

    *VAR_0 = VAR_3 = FUNC_0( VAR_2 );
    if( !VAR_3 )
        return 0;
    return FUNC_2( VAR_3, VAR_2, VAR_1 );
}
