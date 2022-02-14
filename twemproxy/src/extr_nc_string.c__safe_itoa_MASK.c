
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;



__attribute__((used)) static char *
FUNC_0(int VAR_0, int64_t VAR_1, char *VAR_2)
{
    char VAR_3[] = "0123456789abcdef";
    char *VAR_4 = VAR_2;
    const int32_t VAR_5 = (VAR_1 < 0);
    *VAR_2-- = 0;

    if (VAR_5) {
        VAR_1 = -VAR_1;
    }
    if (VAR_5 && VAR_0 == 16) {
        int VAR_6;
        VAR_1 -= 1;
        for (VAR_6 = 0; VAR_6 < 16; ++VAR_6)
            VAR_2[-VAR_6] = '0';
    }

    do {
        *VAR_2-- = VAR_3[VAR_1 % VAR_0];
    } while ((VAR_1 /= VAR_0) != 0);

    if (VAR_5 && VAR_0 == 10) {
        *VAR_2-- = '-';
    }

    if (VAR_5 && VAR_0 == 16) {
        int VAR_7;
        VAR_2 = VAR_4 - 1;
        for (VAR_7 = 0; VAR_7 < 16; ++VAR_7, --VAR_2) {

            switch (*VAR_2) {
            case '0': *VAR_2 = 'f'; break;
            case '1': *VAR_2 = 'e'; break;
            case '2': *VAR_2 = 'd'; break;
            case '3': *VAR_2 = 'c'; break;
            case '4': *VAR_2 = 'b'; break;
            case '5': *VAR_2 = 'a'; break;
            case '6': *VAR_2 = '9'; break;
            case '7': *VAR_2 = '8'; break;
            case '8': *VAR_2 = '7'; break;
            case '9': *VAR_2 = '6'; break;
            case 'a': *VAR_2 = '5'; break;
            case 'b': *VAR_2 = '4'; break;
            case 'c': *VAR_2 = '3'; break;
            case 'd': *VAR_2 = '2'; break;
            case 'e': *VAR_2 = '1'; break;
            case 'f': *VAR_2 = '0'; break;
            }

        }
    }
    return VAR_2 + 1;
}
