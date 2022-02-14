
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_6__ {int * pool; } ;
typedef TYPE_2__ ngx_http_dyups_srv_conf_t ;
struct TYPE_5__ {size_t nelts; TYPE_2__* elts; } ;
struct TYPE_7__ {TYPE_1__ dy_upstreams; } ;
typedef TYPE_3__ ngx_http_dyups_main_conf_t ;
typedef int ngx_cycle_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(ngx_cycle_t *VAR_2)
{
    ngx_uint_t VAR_3;
    ngx_http_dyups_srv_conf_t *VAR_4, *VAR_5;
    ngx_http_dyups_main_conf_t *VAR_6;

    VAR_6 = FUNC_1(VAR_0,
                                                VAR_1);
    if (!VAR_6) {
        return;
    }

    VAR_4 = VAR_6->dy_upstreams.elts;
    for (VAR_3 = 0; VAR_3 < VAR_6->dy_upstreams.nelts; VAR_3++) {

        VAR_5 = &VAR_4[VAR_3];

        if (VAR_5->pool) {
            FUNC_0(VAR_5->pool);
            VAR_5->pool = ((void*)0);
        }
    }
}
