
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline bool FUNC_0( const uint8_t *VAR_0, size_t VAR_1, const uint8_t *VAR_2, size_t VAR_3 )
{
    if( VAR_3 > VAR_1 )
        return 0;
    return &VAR_2[VAR_3] <= &VAR_0[VAR_1];
}
