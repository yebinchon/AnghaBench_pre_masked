
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;


 long long VAR_0 ;

long long
FUNC_0(u_char *VAR_1, size_t VAR_2)
{
    long long VAR_3;

    if (VAR_2 == 0) {
        return VAR_0;
    }

    for (VAR_3 = 0; VAR_2--; VAR_1++) {
        if (*VAR_1 < '0' || *VAR_1 > '9') {
            return VAR_0;
        }

        VAR_3 = VAR_3 * 10 + (*VAR_1 - '0');
    }

    if (VAR_3 < 0) {
        return VAR_0;

    } else {
        return VAR_3;
    }
}
