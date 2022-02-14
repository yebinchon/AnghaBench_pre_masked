
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (int const*,int,int*,int*) ;

__attribute__((used)) static inline bool FUNC_1( uint64_t *VAR_0, const uint8_t *VAR_1, uint64_t *VAR_2, uint64_t VAR_3 )
{
    uint32_t VAR_4;

    if( FUNC_0( VAR_1 + *VAR_2, VAR_3 - *VAR_2, VAR_0, &VAR_4 ))
        return 0;

    *VAR_2 += VAR_4;

    return 1;
}
