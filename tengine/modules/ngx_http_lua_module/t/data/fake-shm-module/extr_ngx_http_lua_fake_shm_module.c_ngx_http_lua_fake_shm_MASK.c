
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_17__ {scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_18__ {TYPE_5__* data; int init; } ;
typedef TYPE_3__ ngx_shm_zone_t ;
struct TYPE_19__ {int * shm_zones; } ;
typedef TYPE_4__ ngx_http_lua_fake_shm_main_conf_t ;
struct TYPE_20__ {int size; TYPE_2__ name; } ;
typedef TYPE_5__ ngx_http_lua_fake_shm_ctx_t ;
struct TYPE_21__ {int pool; TYPE_1__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
typedef int ngx_array_t ;
struct TYPE_16__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 TYPE_3__** FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_6__*,int ,char*,TYPE_2__*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_3 (TYPE_6__*,TYPE_2__*,size_t,int *) ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_5__* FUNC_6 (int ,int) ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_http_lua_fake_shm_main_conf_t *VAR_9 = VAR_8;

    ngx_str_t *VAR_10, VAR_11;
    ngx_shm_zone_t *VAR_12;
    ngx_shm_zone_t **VAR_13;
    ngx_http_lua_fake_shm_ctx_t *VAR_14;
    ssize_t VAR_15;

    if (VAR_9->shm_zones == ((void*)0)) {
        VAR_9->shm_zones = FUNC_4(VAR_6->pool, sizeof(ngx_array_t));
        if (VAR_9->shm_zones == ((void*)0)) {
            return VAR_0;
        }

        if (FUNC_0(VAR_9->shm_zones, VAR_6->pool, 2,
                           sizeof(ngx_shm_zone_t *))
            != VAR_3)
        {
            return VAR_0;
        }
    }

    VAR_10 = VAR_6->args->elts;

    VAR_14 = ((void*)0);

    if (VAR_10[1].len == 0) {
        FUNC_2(VAR_2, VAR_6, 0,
                           "invalid lua fake_shm name \"%V\"", &VAR_10[1]);
        return VAR_0;
    }

    VAR_11 = VAR_10[1];

    VAR_15 = FUNC_5(&VAR_10[2]);

    if (VAR_15 <= 8191) {
        FUNC_2(VAR_2, VAR_6, 0,
                           "invalid lua fake_shm size \"%V\"", &VAR_10[2]);
        return VAR_0;
    }

    VAR_14 = FUNC_6(VAR_6->pool, sizeof(ngx_http_lua_fake_shm_ctx_t));
    if (VAR_14 == ((void*)0)) {
        return VAR_0;
    }

    VAR_14->name = VAR_11;
    VAR_14->size = VAR_15;

    VAR_12 = FUNC_3(VAR_6, &VAR_11, (size_t) VAR_15,
                                          &VAR_5);
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_12->data) {
        VAR_14 = VAR_12->data;

        FUNC_2(VAR_2, VAR_6, 0,
                           "lua_fake_shm \"%V\" is already defined as "
                           "\"%V\"", &VAR_11, &VAR_14->name);
        return VAR_0;
    }

    VAR_12->init = VAR_4;
    VAR_12->data = VAR_14;

    VAR_13 = FUNC_1(VAR_9->shm_zones);
    if (VAR_13 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_13 = VAR_12;

    return VAR_1;
}
