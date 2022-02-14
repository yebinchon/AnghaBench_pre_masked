
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef char ngx_uint_t ;
typedef char ngx_int_t ;


 char FUNC_0 (char) ;

ngx_int_t
FUNC_1(u_char *VAR_0, u_char *VAR_1, size_t VAR_2)
{
    ngx_uint_t VAR_3, VAR_4;

    while (VAR_2) {
        VAR_3 = (ngx_uint_t) *VAR_0++;
        VAR_4 = (ngx_uint_t) *VAR_1++;






        if (VAR_3 == VAR_4) {

            if (VAR_3) {
                VAR_2--;
                continue;
            }

            return 0;
        }



        if (VAR_3 == 0 || VAR_4 == 0) {
            return VAR_3 - VAR_4;
        }

        VAR_3 = (VAR_3 == '/') ? 0 : VAR_3;
        VAR_4 = (VAR_4 == '/') ? 0 : VAR_4;

        return VAR_3 - VAR_4;
    }

    return 0;
}
