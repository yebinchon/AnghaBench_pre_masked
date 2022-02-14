
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int**,size_t) ;

u_char *
FUNC_1(u_char *VAR_0, u_char *VAR_1, size_t VAR_2, size_t VAR_3)
{
    u_char VAR_4, *VAR_5;

    if (VAR_2 == 0) {
        return VAR_0;
    }

    while (--VAR_2) {

        VAR_4 = *VAR_1;
        *VAR_0 = VAR_4;

        if (VAR_4 < 0x80) {

            if (VAR_4 != '\0') {
                VAR_0++;
                VAR_1++;
                VAR_3--;

                continue;
            }

            return VAR_0;
        }

        VAR_5 = VAR_1;

        if (FUNC_0(&VAR_5, VAR_3) > 0x10ffff) {

            break;
        }

        while (VAR_1 < VAR_5) {
            *VAR_0++ = *VAR_1++;
            VAR_3--;
        }
    }

    *VAR_0 = '\0';

    return VAR_0;
}
