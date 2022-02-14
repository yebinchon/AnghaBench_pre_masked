
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int ngx_uint_t ;
typedef char ngx_int_t ;


 char VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_0(u_char *VAR_2, size_t VAR_3, size_t VAR_4)
{
    ngx_int_t VAR_5, VAR_6, VAR_7;
    ngx_uint_t VAR_8;



    if (VAR_3 == 0) {
        return VAR_0;
    }

    VAR_6 = VAR_1 / 10;
    VAR_7 = VAR_1 % 10;

    VAR_8 = 0;

    for (VAR_5 = 0; VAR_3--; VAR_2++) {

        if (*VAR_2 == '.') {
            if (VAR_8) {
                return VAR_0;
            }

            VAR_8 = 1;
            continue;
        }

        if (*VAR_2 < '0' || *VAR_2 > '9') {
            return VAR_0;
        }

        if (VAR_4 == 0) {
            continue;
        }

        if (VAR_5 >= VAR_6 && (VAR_5 > VAR_6 || *VAR_2 - '0' > VAR_7)) {
            return VAR_0;
        }

        VAR_5 = VAR_5 * 10 + (*VAR_2 - '0');
        VAR_4 -= VAR_8;
    }

    while (VAR_4--) {
        if (VAR_5 > VAR_6) {
            return VAR_0;
        }

        VAR_5 = VAR_5 * 10;
    }

    return VAR_5;
}
