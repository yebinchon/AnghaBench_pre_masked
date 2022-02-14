
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {int * slice_key; } ;
typedef TYPE_1__ ngx_http_upstream_keepalive_srv_conf_t ;
typedef int ngx_http_complex_value_t ;
struct TYPE_8__ {int * complex_value; int * value; TYPE_3__* cf; } ;
typedef TYPE_2__ ngx_http_compile_complex_value_t ;
struct TYPE_9__ {int pool; } ;
typedef TYPE_3__ ngx_conf_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int * FUNC_2 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_conf_t *VAR_1, void *VAR_2,
    ngx_str_t *VAR_3)
{
    ngx_http_compile_complex_value_t VAR_4;
    ngx_http_upstream_keepalive_srv_conf_t *VAR_5 = VAR_2;

    VAR_5->slice_key = FUNC_2(VAR_1->pool,
                                sizeof(ngx_http_complex_value_t));
    if (VAR_5->slice_key == ((void*)0)) {
        return VAR_0;
    }

    FUNC_1(&VAR_4, sizeof(ngx_http_compile_complex_value_t));

    VAR_4.cf = VAR_1;
    VAR_4.value = VAR_3;
    VAR_4.complex_value = VAR_5->slice_key;

    return FUNC_0(&VAR_4);
}
