
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int ngx_uint_t ;
typedef int in_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

in_addr_t
FUNC_1(u_char *VAR_1, size_t VAR_2)
{
    u_char *VAR_3, VAR_4;
    in_addr_t VAR_5;
    ngx_uint_t VAR_6, VAR_7;

    VAR_5 = 0;
    VAR_6 = 0;
    VAR_7 = 0;

    for (VAR_3 = VAR_1; VAR_3 < VAR_1 + VAR_2; VAR_3++) {
        VAR_4 = *VAR_3;

        if (VAR_4 >= '0' && VAR_4 <= '9') {
            VAR_6 = VAR_6 * 10 + (VAR_4 - '0');

            if (VAR_6 > 255) {
                return VAR_0;
            }

            continue;
        }

        if (VAR_4 == '.') {
            VAR_5 = (VAR_5 << 8) + VAR_6;
            VAR_6 = 0;
            VAR_7++;
            continue;
        }

        return VAR_0;
    }

    if (VAR_7 == 3) {
        VAR_5 = (VAR_5 << 8) + VAR_6;
        return FUNC_0(VAR_5);
    }

    return VAR_0;
}
