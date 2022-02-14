
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_str_t ;
struct TYPE_18__ {int name; } ;
struct TYPE_19__ {TYPE_3__ shm; TYPE_7__* data; } ;
typedef TYPE_4__ ngx_shm_zone_t ;
struct TYPE_20__ {TYPE_2__* connection; int pool; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_21__ {int bypass; int monitor_index; int value_index; TYPE_8__* conf; } ;
typedef TYPE_6__ ngx_http_reqstat_store_t ;
typedef int ngx_http_reqstat_rbnode_t ;
struct TYPE_22__ {int * val; int value; } ;
typedef TYPE_7__ ngx_http_reqstat_ctx_t ;
struct TYPE_23__ {TYPE_1__* monitor; int bypass; } ;
typedef TYPE_8__ ngx_http_reqstat_conf_t ;
struct TYPE_17__ {int log; } ;
struct TYPE_16__ {size_t nelts; TYPE_4__** elts; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int const FUNC_0 (int *,int ,size_t,int) ;
 void* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int *,int *) ;
 int * FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (int ,int ,int ,char*,int *) ;
 TYPE_6__* FUNC_6 (int ,int) ;

__attribute__((used)) static ngx_http_reqstat_store_t *
FUNC_7(ngx_http_request_t *VAR_2,
    ngx_http_reqstat_conf_t *VAR_3)
{
    ngx_str_t VAR_4, *VAR_5;
    ngx_uint_t VAR_6;
    ngx_shm_zone_t **VAR_7, *VAR_8;
    ngx_http_reqstat_ctx_t *VAR_9;
    ngx_http_reqstat_store_t *VAR_10;
    ngx_http_reqstat_rbnode_t *VAR_11, **VAR_12;

    VAR_10 = FUNC_6(VAR_2->pool, sizeof(ngx_http_reqstat_store_t));
    if (VAR_10 == ((void*)0)) {
        return ((void*)0);
    }

    if (VAR_3->monitor == ((void*)0)) {
        VAR_10->bypass = 1;
        return VAR_10;
    }

    VAR_10->conf = VAR_3;

    switch (FUNC_4(VAR_2, VAR_3->bypass)) {

    case 128:
        return ((void*)0);

    case 129:
        VAR_10->bypass = 1;
        return VAR_10;

    default:
        break;
    }

    if (FUNC_0(&VAR_10->monitor_index, VAR_2->pool, VAR_3->monitor->nelts,
                       sizeof(ngx_http_reqstat_rbnode_t *)) == 128)
    {
        return ((void*)0);
    }

    if (FUNC_0(&VAR_10->value_index, VAR_2->pool, VAR_3->monitor->nelts,
                       sizeof(ngx_str_t)) == 128)
    {
        return ((void*)0);
    }

    VAR_7 = VAR_3->monitor->elts;
    for (VAR_6 = 0; VAR_6 < VAR_3->monitor->nelts; VAR_6++) {
        VAR_8 = VAR_7[VAR_6];
        VAR_9 = VAR_8->data;

        if (FUNC_2(VAR_2, &VAR_9->value, &VAR_4) != VAR_1) {
            FUNC_5(VAR_0, VAR_2->connection->log, 0,
                          "failed to reap the key \"%V\"", VAR_9->val);
            continue;
        }

        VAR_5 = FUNC_1(&VAR_10->value_index);
        *VAR_5 = VAR_4;

        VAR_11 = FUNC_3(VAR_7[VAR_6], &VAR_4);
        if (VAR_11 == ((void*)0)) {
            FUNC_5(VAR_0, VAR_2->connection->log, 0,
                          "failed to alloc node in zone \"%V\", "
                          "enlarge it please",
                          &VAR_8->shm.name);
        }

        VAR_12 = FUNC_1(&VAR_10->monitor_index);
        *VAR_12 = VAR_11;
    }

    return VAR_10;
}
