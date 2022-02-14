
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 char const* FUNC_0 (int const*,size_t,int const,char**) ;

__attribute__((used)) static inline const char * FUNC_1( const uint8_t *VAR_0, size_t VAR_1,
                                           char **VAR_2 )
{
    if( VAR_1 == 0 )
    {
        *VAR_2 = ((void*)0);
        return ((void*)0);
    }
    return FUNC_0( &VAR_0[1], VAR_1 - 1, VAR_0[0], VAR_2 );
}
