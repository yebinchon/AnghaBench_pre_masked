
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int const*,size_t,int *,size_t) ;

__attribute__((used)) static inline void FUNC_1( const uint8_t *VAR_0, size_t VAR_1, uint8_t **VAR_2, size_t VAR_3 )
{
    if( FUNC_0( VAR_0, VAR_1, *VAR_2, VAR_3 ) )
        *VAR_2 += VAR_3;
    else
        *VAR_2 = (uint8_t*)&VAR_0[VAR_1];
}
