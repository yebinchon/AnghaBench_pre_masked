
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t FUNC_0 (char const**) ;



 char* FUNC_1 (char const*) ;

__attribute__((used)) static char *FUNC_2( uint8_t VAR_0 )
{
    static const char *VAR_1[] = {

        129,
        130,
        128,
    };

    if ( VAR_0 == 0 || VAR_0 >= FUNC_0(VAR_1) )
        return ((void*)0);

    return FUNC_1( VAR_1[ --VAR_0 ] );
}
