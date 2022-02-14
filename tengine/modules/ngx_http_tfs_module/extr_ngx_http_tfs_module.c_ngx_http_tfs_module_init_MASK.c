
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {int data; int len; } ;
struct TYPE_14__ {TYPE_4__* timer_data; TYPE_2__ lock_file; int used; int enable_rcs; } ;
typedef TYPE_3__ ngx_http_tfs_upstream_t ;
struct TYPE_15__ {int * lock; TYPE_3__* upstream; TYPE_5__* main_conf; } ;
typedef TYPE_4__ ngx_http_tfs_timers_data_t ;
struct TYPE_12__ {size_t nelts; TYPE_3__** elts; } ;
struct TYPE_16__ {TYPE_1__ upstreams; } ;
typedef TYPE_5__ ngx_http_tfs_main_conf_t ;
struct TYPE_17__ {int pool; } ;
typedef TYPE_6__ ngx_cycle_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_6__*,int ) ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_6__*,int ) ;
 TYPE_4__* FUNC_2 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_cycle_t *VAR_3)
{
    ngx_uint_t VAR_4;
    ngx_http_tfs_upstream_t **VAR_5;
    ngx_http_tfs_main_conf_t *VAR_6;
    ngx_http_tfs_timers_data_t *VAR_7;

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

        VAR_7 = FUNC_2(VAR_3->pool, sizeof(ngx_http_tfs_timers_data_t));
        if (VAR_7 == ((void*)0)) {
            return VAR_0;
        }

        VAR_7->main_conf = VAR_6;
        VAR_7->upstream = VAR_5[VAR_4];
        VAR_7->lock = FUNC_1(VAR_3, VAR_5[VAR_4]->lock_file.data);
        if (VAR_7->lock == ((void*)0))
        {
            return VAR_0;
        }

        VAR_5[VAR_4]->timer_data = VAR_7;
    }

    return VAR_1;
}
