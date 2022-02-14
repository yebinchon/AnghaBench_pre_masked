
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline int FUNC_0( const uint8_t *VAR_0, size_t VAR_1 )
{
    if( VAR_1 < 17 || VAR_0[0] )
        return -1;

    size_t VAR_2 = 6;
    size_t VAR_3 = VAR_0[VAR_2];
    VAR_2 += VAR_3 + 1;
    if( VAR_2 >= VAR_1 )
        return -1;

    VAR_3 = VAR_0[VAR_2];
    VAR_2 += VAR_3 + 1;

    VAR_2 += 1 + 4 + 2 + 1;

    if( VAR_2 >= VAR_1 )
        return -1;

    return (VAR_0[VAR_2] & 0x0f);
}
