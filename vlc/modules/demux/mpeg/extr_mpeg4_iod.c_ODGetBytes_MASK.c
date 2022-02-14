
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;



__attribute__((used)) static unsigned FUNC_0( unsigned *VAR_0, const uint8_t **VAR_1, size_t VAR_2 )
{
    unsigned VAR_3 = 0;
    while( *VAR_0 > 0 && VAR_2-- )
    {
        VAR_3 <<= 8;
        VAR_3 |= **VAR_1;
        (*VAR_1)++;
        (*VAR_0)--;
    }

    return VAR_3;
}
