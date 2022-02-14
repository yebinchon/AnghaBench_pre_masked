
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_3__ {int * format; } ;
typedef TYPE_1__ ngx_http_upstream_check_status_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(
    ngx_http_upstream_check_status_ctx_t *VAR_2, ngx_str_t *VAR_3)
{
    VAR_2->format = FUNC_0(VAR_3);
    if (VAR_2->format == ((void*)0)) {
        return VAR_0;
    }

    return VAR_1;
}
