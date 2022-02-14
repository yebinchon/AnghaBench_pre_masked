
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;

ngx_int_t
FUNC_0(u_char *VAR_2, size_t VAR_3)
{
    u_char VAR_4, VAR_5;
    ngx_int_t VAR_6, VAR_7;

    if (VAR_3 == 0) {
        return VAR_0;
    }

    VAR_7 = VAR_1 / 16;

    for (VAR_6 = 0; VAR_3--; VAR_2++) {
        if (VAR_6 > VAR_7) {
            return VAR_0;
        }

        VAR_5 = *VAR_2;

        if (VAR_5 >= '0' && VAR_5 <= '9') {
            VAR_6 = VAR_6 * 16 + (VAR_5 - '0');
            continue;
        }

        VAR_4 = (u_char) (VAR_5 | 0x20);

        if (VAR_4 >= 'a' && VAR_4 <= 'f') {
            VAR_6 = VAR_6 * 16 + (VAR_4 - 'a' + 10);
            continue;
        }

        return VAR_0;
    }

    return VAR_6;
}
