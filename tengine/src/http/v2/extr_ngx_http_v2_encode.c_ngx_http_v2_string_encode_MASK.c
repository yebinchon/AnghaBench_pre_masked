
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *,size_t) ;
 size_t FUNC_1 (int *,size_t,int *,scalar_t__) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,int ,size_t) ;
 int FUNC_4 (int *,int *,size_t) ;

u_char *
FUNC_5(u_char *VAR_2, u_char *VAR_3, size_t VAR_4, u_char *VAR_5,
    ngx_uint_t VAR_6)
{
    size_t VAR_7;

    VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

    if (VAR_7 > 0) {
        *VAR_2 = VAR_0;
        VAR_2 = FUNC_3(VAR_2, FUNC_2(7), VAR_7);
        return FUNC_0(VAR_2, VAR_5, VAR_7);
    }

    *VAR_2 = VAR_1;
    VAR_2 = FUNC_3(VAR_2, FUNC_2(7), VAR_4);

    if (VAR_6) {
        FUNC_4(VAR_2, VAR_3, VAR_4);
        return VAR_2 + VAR_4;
    }

    return FUNC_0(VAR_2, VAR_3, VAR_4);
}
