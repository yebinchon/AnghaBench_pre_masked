
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ (* init ) (TYPE_2__*,void*) ;int noreuse; int shm; void* data; } ;
typedef TYPE_2__ ngx_shm_zone_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int log; int * cycle; TYPE_4__* lmcf; TYPE_2__ zone; } ;
typedef TYPE_3__ ngx_http_lua_shm_zone_ctx_t ;
struct TYPE_11__ {scalar_t__ shm_zones_inited; scalar_t__ (* init_handler ) (int ,TYPE_4__*,int ) ;int lua; TYPE_1__* shm_zones; } ;
typedef TYPE_4__ ngx_http_lua_main_conf_t ;
typedef int ngx_cycle_t ;
struct TYPE_8__ {scalar_t__ nelts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int volatile* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,void*) ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_shm_zone_t *VAR_4, void *VAR_5)
{
    ngx_http_lua_shm_zone_ctx_t *VAR_6 = VAR_5;
    ngx_shm_zone_t *VAR_7;
    void *VAR_8;

    ngx_int_t VAR_9;
    volatile ngx_cycle_t *VAR_10;
    ngx_http_lua_main_conf_t *VAR_11;
    ngx_http_lua_shm_zone_ctx_t *VAR_12;
    ngx_shm_zone_t *VAR_13;

    VAR_12 = (ngx_http_lua_shm_zone_ctx_t *) VAR_4->data;
    VAR_13 = &VAR_12->zone;

    VAR_8 = ((void*)0);
    if (VAR_6) {
        VAR_7 = &VAR_6->zone;
        VAR_8 = VAR_7->data;
    }

    VAR_13->shm = VAR_4->shm;




    if (VAR_13->init(VAR_13, VAR_8) != VAR_1) {
        return VAR_0;
    }

    FUNC_0("get lmcf");

    VAR_11 = VAR_12->lmcf;
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_0("lmcf->lua: %p", VAR_11->lua);

    VAR_11->shm_zones_inited++;

    if (VAR_11->shm_zones_inited == VAR_11->shm_zones->nelts
        && VAR_11->init_handler && !VAR_3)
    {
        VAR_10 = VAR_2;
        VAR_2 = VAR_12->cycle;

        VAR_9 = VAR_11->init_handler(VAR_12->log, VAR_11, VAR_11->lua);

        VAR_2 = VAR_10;

        if (VAR_9 != VAR_1) {

            return VAR_0;
        }
    }

    return VAR_1;
}
