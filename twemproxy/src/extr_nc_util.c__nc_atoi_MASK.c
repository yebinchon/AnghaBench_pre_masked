
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



int
FUNC_0(uint8_t *VAR_0, size_t VAR_1)
{
    int VAR_2;

    if (VAR_1 == 0) {
        return -1;
    }

    for (VAR_2 = 0; VAR_1--; VAR_0++) {
        if (*VAR_0 < '0' || *VAR_0 > '9') {
            return -1;
        }

        VAR_2 = VAR_2 * 10 + (*VAR_0 - '0');
    }

    if (VAR_2 < 0) {
        return -1;
    }

    return VAR_2;
}
