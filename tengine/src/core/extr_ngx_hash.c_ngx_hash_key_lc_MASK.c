
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef size_t ngx_uint_t ;


 size_t FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ) ;

ngx_uint_t
FUNC_2(u_char *VAR_0, size_t VAR_1)
{
    ngx_uint_t VAR_2, VAR_3;

    VAR_3 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        VAR_3 = FUNC_0(VAR_3, FUNC_1(VAR_0[VAR_2]));
    }

    return VAR_3;
}
