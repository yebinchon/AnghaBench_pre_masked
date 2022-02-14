
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



uint32_t
FUNC_0(const char *VAR_0, size_t VAR_1)
{
    const char *VAR_2 = VAR_0;
    uint32_t VAR_3 = 0;

    while (VAR_1--) {
        uint32_t VAR_4 = (uint32_t) *VAR_2++;
        VAR_3 += VAR_4;
        VAR_3 += (VAR_3 << 10);
        VAR_3 ^= (VAR_3 >> 6);
    }
    VAR_3 += (VAR_3 << 3);
    VAR_3 ^= (VAR_3 >> 11);
    VAR_3 += (VAR_3 << 15);

    return VAR_3;
}
