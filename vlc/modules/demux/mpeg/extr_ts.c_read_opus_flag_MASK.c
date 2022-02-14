
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;



__attribute__((used)) static int16_t FUNC_0(uint8_t **VAR_0, size_t *VAR_1)
{
    if (*VAR_1 < 2)
        return -1;

    int16_t VAR_2 = ((*VAR_0)[0] << 8) | (*VAR_0)[1];

    *VAR_1 -= 2;
    *VAR_0 += 2;

    if (VAR_2 & (3<<13))
        VAR_2 = -1;

    return VAR_2;
}
