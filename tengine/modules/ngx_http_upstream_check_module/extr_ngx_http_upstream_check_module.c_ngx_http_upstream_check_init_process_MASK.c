
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_int_t ;
typedef int ngx_http_upstream_check_main_conf_t ;
typedef int ngx_cycle_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_cycle_t *VAR_2)
{
    ngx_http_upstream_check_main_conf_t *VAR_3;

    VAR_3 = FUNC_0(VAR_2, VAR_1);
    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }

    return FUNC_1(VAR_2);
}
