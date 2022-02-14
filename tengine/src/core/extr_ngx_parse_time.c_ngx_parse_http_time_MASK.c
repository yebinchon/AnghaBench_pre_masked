
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef char u_char ;
typedef int time_t ;
typedef int ngx_uint_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int* VAR_1 ;

time_t
FUNC_0(u_char *VAR_2, size_t VAR_3)
{
    u_char *VAR_4, *VAR_5;
    ngx_int_t VAR_6;
    ngx_uint_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    uint64_t VAR_12;
    enum {
        no = 0,
        rfc822,
        rfc850,
        isoc
    } VAR_13;

    VAR_13 = 0;
    VAR_5 = VAR_2 + VAR_3;






    for (VAR_4 = VAR_2; VAR_4 < VAR_5; VAR_4++) {
        if (*VAR_4 == ',') {
            break;
        }

        if (*VAR_4 == ' ') {
            VAR_13 = isoc;
            break;
        }
    }

    for (VAR_4++; VAR_4 < VAR_5; VAR_4++) {
        if (*VAR_4 != ' ') {
            break;
        }
    }

    if (VAR_5 - VAR_4 < 18) {
        return VAR_0;
    }

    if (VAR_13 != isoc) {
        if (*VAR_4 < '0' || *VAR_4 > '9' || *(VAR_4 + 1) < '0' || *(VAR_4 + 1) > '9') {
            return VAR_0;
        }

        VAR_7 = (*VAR_4 - '0') * 10 + (*(VAR_4 + 1) - '0');
        VAR_4 += 2;

        if (*VAR_4 == ' ') {
            if (VAR_5 - VAR_4 < 18) {
                return VAR_0;
            }
            VAR_13 = rfc822;

        } else if (*VAR_4 == '-') {
            VAR_13 = rfc850;

        } else {
            return VAR_0;
        }

        VAR_4++;
    }

    switch (*VAR_4) {

    case 'J':
        VAR_6 = *(VAR_4 + 1) == 'a' ? 0 : *(VAR_4 + 2) == 'n' ? 5 : 6;
        break;

    case 'F':
        VAR_6 = 1;
        break;

    case 'M':
        VAR_6 = *(VAR_4 + 2) == 'r' ? 2 : 4;
        break;

    case 'A':
        VAR_6 = *(VAR_4 + 1) == 'p' ? 3 : 7;
        break;

    case 'S':
        VAR_6 = 8;
        break;

    case 'O':
        VAR_6 = 9;
        break;

    case 'N':
        VAR_6 = 10;
        break;

    case 'D':
        VAR_6 = 11;
        break;

    default:
        return VAR_0;
    }

    VAR_4 += 3;

    if ((VAR_13 == rfc822 && *VAR_4 != ' ') || (VAR_13 == rfc850 && *VAR_4 != '-')) {
        return VAR_0;
    }

    VAR_4++;

    if (VAR_13 == rfc822) {
        if (*VAR_4 < '0' || *VAR_4 > '9' || *(VAR_4 + 1) < '0' || *(VAR_4 + 1) > '9'
            || *(VAR_4 + 2) < '0' || *(VAR_4 + 2) > '9'
            || *(VAR_4 + 3) < '0' || *(VAR_4 + 3) > '9')
        {
            return VAR_0;
        }

        VAR_8 = (*VAR_4 - '0') * 1000 + (*(VAR_4 + 1) - '0') * 100
               + (*(VAR_4 + 2) - '0') * 10 + (*(VAR_4 + 3) - '0');
        VAR_4 += 4;

    } else if (VAR_13 == rfc850) {
        if (*VAR_4 < '0' || *VAR_4 > '9' || *(VAR_4 + 1) < '0' || *(VAR_4 + 1) > '9') {
            return VAR_0;
        }

        VAR_8 = (*VAR_4 - '0') * 10 + (*(VAR_4 + 1) - '0');
        VAR_8 += (VAR_8 < 70) ? 2000 : 1900;
        VAR_4 += 2;
    }

    if (VAR_13 == isoc) {
        if (*VAR_4 == ' ') {
            VAR_4++;
        }

        if (*VAR_4 < '0' || *VAR_4 > '9') {
            return VAR_0;
        }

        VAR_7 = *VAR_4++ - '0';

        if (*VAR_4 != ' ') {
            if (*VAR_4 < '0' || *VAR_4 > '9') {
                return VAR_0;
            }

            VAR_7 = VAR_7 * 10 + (*VAR_4++ - '0');
        }

        if (VAR_5 - VAR_4 < 14) {
            return VAR_0;
        }
    }

    if (*VAR_4++ != ' ') {
        return VAR_0;
    }

    if (*VAR_4 < '0' || *VAR_4 > '9' || *(VAR_4 + 1) < '0' || *(VAR_4 + 1) > '9') {
        return VAR_0;
    }

    VAR_9 = (*VAR_4 - '0') * 10 + (*(VAR_4 + 1) - '0');
    VAR_4 += 2;

    if (*VAR_4++ != ':') {
        return VAR_0;
    }

    if (*VAR_4 < '0' || *VAR_4 > '9' || *(VAR_4 + 1) < '0' || *(VAR_4 + 1) > '9') {
        return VAR_0;
    }

    VAR_10 = (*VAR_4 - '0') * 10 + (*(VAR_4 + 1) - '0');
    VAR_4 += 2;

    if (*VAR_4++ != ':') {
        return VAR_0;
    }

    if (*VAR_4 < '0' || *VAR_4 > '9' || *(VAR_4 + 1) < '0' || *(VAR_4 + 1) > '9') {
        return VAR_0;
    }

    VAR_11 = (*VAR_4 - '0') * 10 + (*(VAR_4 + 1) - '0');

    if (VAR_13 == isoc) {
        VAR_4 += 2;

        if (*VAR_4++ != ' ') {
            return VAR_0;
        }

        if (*VAR_4 < '0' || *VAR_4 > '9' || *(VAR_4 + 1) < '0' || *(VAR_4 + 1) > '9'
            || *(VAR_4 + 2) < '0' || *(VAR_4 + 2) > '9'
            || *(VAR_4 + 3) < '0' || *(VAR_4 + 3) > '9')
        {
            return VAR_0;
        }

        VAR_8 = (*VAR_4 - '0') * 1000 + (*(VAR_4 + 1) - '0') * 100
               + (*(VAR_4 + 2) - '0') * 10 + (*(VAR_4 + 3) - '0');
    }

    if (VAR_9 > 23 || VAR_10 > 59 || VAR_11 > 59) {
        return VAR_0;
    }

    if (VAR_7 == 29 && VAR_6 == 1) {
        if ((VAR_8 & 3) || ((VAR_8 % 100 == 0) && (VAR_8 % 400) != 0)) {
            return VAR_0;
        }

    } else if (VAR_7 > VAR_1[VAR_6]) {
        return VAR_0;
    }






    if (--VAR_6 <= 0) {
        VAR_6 += 12;
        VAR_8 -= 1;
    }



    VAR_12 = (uint64_t) (


            365 * VAR_8 + VAR_8 / 4 - VAR_8 / 100 + VAR_8 / 400



            + 367 * VAR_6 / 12 - 30



            + VAR_7 - 1






            - 719527 + 31 + 28) * 86400 + VAR_9 * 3600 + VAR_10 * 60 + VAR_11;



    if (VAR_12 > 0x7fffffff) {
        return VAR_0;
    }



    return (time_t) VAR_12;
}
