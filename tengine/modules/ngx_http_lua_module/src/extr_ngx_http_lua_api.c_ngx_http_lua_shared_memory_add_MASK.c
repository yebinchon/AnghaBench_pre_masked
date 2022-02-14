
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_17__ {TYPE_3__* data; int init; } ;
typedef TYPE_2__ ngx_shm_zone_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {TYPE_2__ zone; TYPE_1__* cycle; int * log; TYPE_4__* lmcf; } ;
typedef TYPE_3__ ngx_http_lua_shm_zone_ctx_t ;
struct TYPE_19__ {int requires_shm; int * shm_zones; } ;
typedef TYPE_4__ ngx_http_lua_main_conf_t ;
struct TYPE_20__ {TYPE_1__* cycle; int pool; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_array_t ;
struct TYPE_16__ {int new_log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 TYPE_2__** FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (TYPE_5__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 int * FUNC_4 (int ,int) ;
 TYPE_3__* FUNC_5 (int ,int) ;
 TYPE_2__* FUNC_6 (TYPE_5__*,int *,size_t,void*) ;

ngx_shm_zone_t *
FUNC_7(ngx_conf_t *VAR_3, ngx_str_t *VAR_4, size_t VAR_5,
    void *VAR_6)
{
    ngx_http_lua_main_conf_t *VAR_7;
    ngx_shm_zone_t **VAR_8;
    ngx_shm_zone_t *VAR_9;
    ngx_http_lua_shm_zone_ctx_t *VAR_10;
    ngx_int_t VAR_11;

    VAR_7 = FUNC_2(VAR_3, VAR_1);
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    if (VAR_7->shm_zones == ((void*)0)) {
        VAR_7->shm_zones = FUNC_4(VAR_3->pool, sizeof(ngx_array_t));
        if (VAR_7->shm_zones == ((void*)0)) {
            return ((void*)0);
        }

        if (FUNC_0(VAR_7->shm_zones, VAR_3->pool, 2,
                           sizeof(ngx_shm_zone_t *))
            != VAR_0)
        {
            return ((void*)0);
        }
    }

    VAR_9 = FUNC_6(VAR_3, VAR_4, (size_t) VAR_5, VAR_6);
    if (VAR_9 == ((void*)0)) {
        return ((void*)0);
    }

    if (VAR_9->data) {
        VAR_10 = (ngx_http_lua_shm_zone_ctx_t *) VAR_9->data;
        return &VAR_10->zone;
    }

    VAR_11 = sizeof(ngx_http_lua_shm_zone_ctx_t);

    VAR_10 = FUNC_5(VAR_3->pool, VAR_11);
    if (VAR_10 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_10->lmcf = VAR_7;
    VAR_10->log = &VAR_3->cycle->new_log;
    VAR_10->cycle = VAR_3->cycle;

    FUNC_3(&VAR_10->zone, VAR_9, sizeof(ngx_shm_zone_t));

    VAR_8 = FUNC_1(VAR_7->shm_zones);
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    *VAR_8 = VAR_9;


    VAR_9->init = VAR_2;
    VAR_9->data = VAR_10;

    VAR_7->requires_shm = 1;

    return &VAR_10->zone;
}
