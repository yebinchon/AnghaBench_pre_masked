
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_uint_t ;
typedef int ngx_pool_t ;
typedef int ngx_list_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int ,size_t) ;
 int * FUNC_1 (int *,int) ;

ngx_list_t *
FUNC_2(ngx_pool_t *VAR_1, ngx_uint_t VAR_2, size_t VAR_3)
{
    ngx_list_t *VAR_4;

    VAR_4 = FUNC_1(VAR_1, sizeof(ngx_list_t));
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    if (FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3) != VAR_0) {
        return ((void*)0);
    }

    return VAR_4;
}
