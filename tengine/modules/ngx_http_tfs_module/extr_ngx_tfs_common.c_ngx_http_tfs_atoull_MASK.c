
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;

ngx_int_t
FUNC_0(u_char *VAR_3, size_t VAR_4, unsigned long long *VAR_5)
{
    unsigned long long VAR_6;

    for (VAR_6 = 0; VAR_4--; VAR_3++) {
        unsigned int VAR_7;

        if (*VAR_3 < '0' || *VAR_3 > '9') {
            return VAR_0;
        }

        VAR_7 = *VAR_3 - '0';





        if (VAR_6 & (~0ull << 60)) {

            if (VAR_6 > ((VAR_2 - VAR_7) / 10)) {
                return VAR_0;
            }
        }

        VAR_6 = VAR_6 * 10 + VAR_7;
    }

    *VAR_5 = VAR_6;

    return VAR_1;
}
