
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;



u_char *
FUNC_0(u_char *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    if (VAR_2 == 0) {
        return VAR_0;
    }

    while (--VAR_2) {
        *VAR_0 = *VAR_1;

        if (*VAR_0 == '\0') {
            return VAR_0;
        }

        VAR_0++;
        VAR_1++;
    }

    *VAR_0 = '\0';

    return VAR_0;
}
