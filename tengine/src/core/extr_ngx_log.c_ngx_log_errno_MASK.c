
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ ngx_err_t ;


 int * FUNC_0 (int *,int *,char*,scalar_t__) ;
 int * FUNC_1 (scalar_t__,int *,int) ;

u_char *
FUNC_2(u_char *VAR_0, u_char *VAR_1, ngx_err_t VAR_2)
{
    if (VAR_0 > VAR_1 - 50) {



        VAR_0 = VAR_1 - 50;
        *VAR_0++ = '.';
        *VAR_0++ = '.';
        *VAR_0++ = '.';
    }





    VAR_0 = FUNC_0(VAR_0, VAR_1, " (%d: ", VAR_2);


    VAR_0 = FUNC_1(VAR_2, VAR_0, VAR_1 - VAR_0);

    if (VAR_0 < VAR_1) {
        *VAR_0++ = ')';
    }

    return VAR_0;
}
