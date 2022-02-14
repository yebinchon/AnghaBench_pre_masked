
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef char ngx_uint_t ;


 scalar_t__ FUNC_0 (int *,int *,size_t) ;

u_char *
FUNC_1(u_char *VAR_0, char *VAR_1, size_t VAR_2)
{
    ngx_uint_t VAR_3, VAR_4;

    VAR_4 = (ngx_uint_t) *VAR_1++;
    VAR_4 = (VAR_4 >= 'A' && VAR_4 <= 'Z') ? (VAR_4 | 0x20) : VAR_4;

    do {
        do {
            VAR_3 = (ngx_uint_t) *VAR_0++;

            if (VAR_3 == 0) {
                return ((void*)0);
            }

            VAR_3 = (VAR_3 >= 'A' && VAR_3 <= 'Z') ? (VAR_3 | 0x20) : VAR_3;

        } while (VAR_3 != VAR_4);

    } while (FUNC_0(VAR_0, (u_char *) VAR_1, VAR_2) != 0);

    return --VAR_0;
}
