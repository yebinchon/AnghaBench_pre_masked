
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef char ngx_uint_t ;
typedef char ngx_int_t ;



ngx_int_t
FUNC_0(u_char *VAR_0, u_char *VAR_1)
{
    ngx_uint_t VAR_2, VAR_3;

    for ( ;; ) {
        VAR_2 = (ngx_uint_t) *VAR_0++;
        VAR_3 = (ngx_uint_t) *VAR_1++;

        VAR_2 = (VAR_2 >= 'A' && VAR_2 <= 'Z') ? (VAR_2 | 0x20) : VAR_2;
        VAR_3 = (VAR_3 >= 'A' && VAR_3 <= 'Z') ? (VAR_3 | 0x20) : VAR_3;

        if (VAR_2 == VAR_3) {

            if (VAR_2) {
                continue;
            }

            return 0;
        }



        VAR_2 = (VAR_2 == '.') ? ' ' : VAR_2;
        VAR_3 = (VAR_3 == '.') ? ' ' : VAR_3;

        return VAR_2 - VAR_3;
    }
}
