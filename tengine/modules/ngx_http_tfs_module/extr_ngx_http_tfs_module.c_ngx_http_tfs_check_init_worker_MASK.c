
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {int len; } ;
struct TYPE_8__ {int timer_data; int used; TYPE_1__ lock_file; int enable_rcs; } ;
typedef TYPE_3__ ngx_http_tfs_upstream_t ;
struct TYPE_7__ {size_t nelts; TYPE_3__** elts; } ;
struct TYPE_9__ {TYPE_2__ upstreams; } ;
typedef TYPE_4__ ngx_http_tfs_main_conf_t ;
typedef int ngx_cycle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_cycle_t *VAR_3)
{
    ngx_uint_t VAR_4;
    ngx_http_tfs_upstream_t **VAR_5;
    ngx_http_tfs_main_conf_t *VAR_6;


    VAR_6 = FUNC_0(VAR_3, VAR_2);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = VAR_6->upstreams.elts;

    for (VAR_4 = 0; VAR_4 < VAR_6->upstreams.nelts; VAR_4++) {
        if (!VAR_5[VAR_4]->enable_rcs
            || !VAR_5[VAR_4]->lock_file.len
            || !VAR_5[VAR_4]->used)
        {
            return VAR_1;
        }

        if (FUNC_1(VAR_3, VAR_5[VAR_4]->timer_data) == VAR_0)
        {
            return VAR_0;
        }
    }

    return VAR_1;
}
