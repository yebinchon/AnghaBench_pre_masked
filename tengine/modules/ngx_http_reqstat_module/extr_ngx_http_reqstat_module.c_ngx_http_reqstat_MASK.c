
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef size_t ngx_uint_t ;
struct TYPE_21__ {int data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_19__ {int data; } ;
struct TYPE_20__ {TYPE_2__ name; } ;
struct TYPE_22__ {TYPE_3__ shm; } ;
typedef TYPE_5__ ngx_shm_zone_t ;
struct TYPE_23__ {TYPE_15__* monitor; } ;
typedef TYPE_6__ ngx_http_reqstat_conf_t ;
struct TYPE_24__ {TYPE_1__* args; int pool; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_18__ {int nelts; TYPE_4__* elts; } ;
struct TYPE_17__ {size_t nelts; TYPE_5__** elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_15__* VAR_2 ;
 void* FUNC_0 (int ,int,int) ;
 TYPE_5__** FUNC_1 (TYPE_15__*) ;
 TYPE_6__* FUNC_2 (TYPE_7__*,int ) ;
 int VAR_3 ;
 TYPE_5__* FUNC_3 (TYPE_7__*,TYPE_4__*,int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_str_t *VAR_7;
    ngx_uint_t VAR_8, VAR_9;
    ngx_shm_zone_t *VAR_10, **VAR_11;
    ngx_http_reqstat_conf_t *VAR_12;

    ngx_http_reqstat_conf_t *VAR_13 = VAR_6;

    VAR_7 = VAR_4->args->elts;
    VAR_12 = FUNC_2(VAR_4, VAR_3);

    if (VAR_13->monitor != VAR_2) {
        return "is duplicate";
    }

    if (VAR_12->monitor == ((void*)0)) {
        VAR_12->monitor = FUNC_0(VAR_4->pool, VAR_4->args->nelts - 1,
                                         sizeof(ngx_shm_zone_t *));
        if (VAR_12->monitor == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_13->monitor = FUNC_0(VAR_4->pool, VAR_4->args->nelts - 1,
                                     sizeof(ngx_shm_zone_t *));
    if (VAR_13->monitor == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_8 = 1; VAR_8 < VAR_4->args->nelts; VAR_8++) {
        VAR_10 = FUNC_3(VAR_4, &VAR_7[VAR_8], 0,
                                         &VAR_3);
        if (VAR_10 == ((void*)0)) {
            return VAR_0;
        }

        VAR_11 = FUNC_1(VAR_13->monitor);
        *VAR_11 = VAR_10;

        VAR_11 = VAR_12->monitor->elts;
        for (VAR_9 = 0; VAR_9 < VAR_12->monitor->nelts; VAR_9++) {
            if (!FUNC_4(VAR_7[VAR_8].data, VAR_11[VAR_9]->shm.name.data)) {
                break;
            }
        }

        if (VAR_9 == VAR_12->monitor->nelts) {
            VAR_11 = FUNC_1(VAR_12->monitor);
            if (VAR_11 == ((void*)0)) {
                return VAR_0;
            }
            *VAR_11 = VAR_10;
        }
    }

    return VAR_1;
}
