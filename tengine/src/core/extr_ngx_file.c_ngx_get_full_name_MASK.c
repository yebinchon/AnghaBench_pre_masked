
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {size_t len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (TYPE_1__*) ;

ngx_int_t
FUNC_4(ngx_pool_t *VAR_2, ngx_str_t *VAR_3, ngx_str_t *VAR_4)
{
    size_t VAR_5;
    u_char *VAR_6, *VAR_7;
    ngx_int_t VAR_8;

    VAR_8 = FUNC_3(VAR_4);

    if (VAR_8 == VAR_1) {
        return VAR_8;
    }

    VAR_5 = VAR_3->len;
    VAR_7 = FUNC_2(VAR_2, VAR_5 + VAR_4->len + 1);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_0(VAR_7, VAR_3->data, VAR_5);
    FUNC_1(VAR_6, VAR_4->data, VAR_4->len + 1);

    VAR_4->len += VAR_5;
    VAR_4->data = VAR_7;

    return VAR_1;
}
