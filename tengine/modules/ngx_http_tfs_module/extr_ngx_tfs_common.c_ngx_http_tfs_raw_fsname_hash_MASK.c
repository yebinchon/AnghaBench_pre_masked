
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
typedef scalar_t__ int32_t ;



int32_t
FUNC_0(const u_char *VAR_0, const int32_t VAR_1)
{
    int32_t VAR_2, VAR_3;

    VAR_2 = 0;

    if (VAR_0 == ((void*)0) || VAR_1 <=0) {
        return 0;
    }

    for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
        VAR_2 += VAR_0[VAR_3];
        VAR_2 *= 7;
    }

    return (VAR_2 | 0x80000000);
}
