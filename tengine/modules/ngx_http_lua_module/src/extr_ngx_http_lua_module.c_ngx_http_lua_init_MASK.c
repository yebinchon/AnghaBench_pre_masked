
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


typedef int ngx_str_t ;
struct TYPE_17__ {int handler; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_pool_cleanup_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {scalar_t__ host_var_index; scalar_t__ postponed_to_rewrite_phase_end; scalar_t__ postponed_to_access_phase_end; scalar_t__ (* init_handler ) (int ,TYPE_3__*,int *) ;int * lua; int requires_shm; scalar_t__ requires_body_filter; scalar_t__ requires_header_filter; scalar_t__ requires_log; scalar_t__ requires_access; scalar_t__ requires_rewrite; scalar_t__ requires_capture_filter; } ;
typedef TYPE_3__ ngx_http_lua_main_conf_t ;
typedef int ngx_http_handler_pt ;
struct TYPE_19__ {TYPE_1__* phases; } ;
typedef TYPE_4__ ngx_http_core_main_conf_t ;
typedef int ngx_cycle_t ;
struct TYPE_20__ {int log; int * cycle; int pool; } ;
typedef TYPE_5__ ngx_conf_t ;
struct TYPE_21__ {int nelts; int * elts; } ;
typedef TYPE_6__ ngx_array_t ;
struct TYPE_16__ {TYPE_6__ handlers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,...) ;
 int * FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,TYPE_5__*,int ,char*) ;
 int volatile* VAR_9 ;
 void* FUNC_3 (TYPE_5__*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (TYPE_5__*,int *) ;
 int VAR_11 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 void* VAR_12 ;
 void* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 () ;
 int * FUNC_9 (int *,int *,int ,TYPE_3__*,int ,int *) ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 () ;
 int volatile* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_11 (int ,int ,int ,char*) ;
 int FUNC_12 (int *,int *,int) ;
 TYPE_2__* FUNC_13 (int ,int ) ;
 scalar_t__ VAR_20 ;
 int FUNC_14 (char*) ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_15 (int ,TYPE_3__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_16(ngx_conf_t *VAR_22)
{
    int VAR_23;
    ngx_int_t VAR_24;
    ngx_array_t *VAR_25;
    ngx_http_handler_pt *VAR_26;
    volatile ngx_cycle_t *VAR_27;
    ngx_http_core_main_conf_t *VAR_28;
    ngx_http_lua_main_conf_t *VAR_29;

    ngx_pool_cleanup_t *VAR_30;

    ngx_str_t VAR_31 = FUNC_14("host");

    if (VAR_20 == VAR_8 || VAR_21) {
        return VAR_7;
    }

    VAR_29 = FUNC_3(VAR_22, VAR_15);

    VAR_29->host_var_index = FUNC_4(VAR_22, &VAR_31);
    if (VAR_29->host_var_index == VAR_1) {
        return VAR_1;
    }

    if (VAR_17 != VAR_9) {
        VAR_17 = VAR_9;
        VAR_23 = 0;

    } else {
        VAR_23 = 1;
    }

    if (VAR_23 || VAR_29->requires_capture_filter) {
        VAR_24 = FUNC_6(VAR_22);
        if (VAR_24 != VAR_7) {
            return VAR_24;
        }
    }

    if (VAR_29->postponed_to_rewrite_phase_end == VAR_0) {
        VAR_29->postponed_to_rewrite_phase_end = 0;
    }

    if (VAR_29->postponed_to_access_phase_end == VAR_0) {
        VAR_29->postponed_to_access_phase_end = 0;
    }

    VAR_28 = FUNC_3(VAR_22, VAR_10);

    if (VAR_29->requires_rewrite) {
        VAR_26 = FUNC_1(&VAR_28->phases[VAR_4].handlers);
        if (VAR_26 == ((void*)0)) {
            return VAR_1;
        }

        *VAR_26 = VAR_18;
    }

    if (VAR_29->requires_access) {
        VAR_26 = FUNC_1(&VAR_28->phases[VAR_2].handlers);
        if (VAR_26 == ((void*)0)) {
            return VAR_1;
        }

        *VAR_26 = VAR_11;
    }

    FUNC_0("requires log: %d", (int) VAR_29->requires_log);

    if (VAR_29->requires_log) {
        VAR_25 = &VAR_28->phases[VAR_3].handlers;
        VAR_26 = FUNC_1(VAR_25);
        if (VAR_26 == ((void*)0)) {
            return VAR_1;
        }

        if (VAR_25->nelts > 1) {
            VAR_26 = VAR_25->elts;
            FUNC_12(&VAR_26[1], VAR_26,
                        (VAR_25->nelts - 1) * sizeof(ngx_http_handler_pt));
        }

        *VAR_26 = VAR_14;
    }

    if (VAR_23 || VAR_29->requires_header_filter) {
        VAR_24 = FUNC_8();
        if (VAR_24 != VAR_7) {
            return VAR_24;
        }
    }

    if (VAR_23 || VAR_29->requires_body_filter) {
        VAR_24 = FUNC_5();
        if (VAR_24 != VAR_7) {
            return VAR_24;
        }
    }



    VAR_30 = FUNC_13(VAR_22->pool, 0);
    if (VAR_30 == ((void*)0)) {
        return VAR_1;
    }

    VAR_30->data = VAR_29;
    VAR_30->handler = VAR_19;
    if (VAR_29->lua == ((void*)0)) {
        FUNC_0("initializing lua vm");


        if (VAR_20 != VAR_8 && !VAR_21) {
            FUNC_11(VAR_5, VAR_22->log, 0,
                          "detected a LuaJIT version which is not OpenResty's"
                          "; many optimizations will be disabled and "
                          "performance will be compromised (see "
                          "https://github.com/openresty/luajit2 for "
                          "OpenResty's LuaJIT or, even better, consider using "
                          "the OpenResty releases from https://openresty.org/"
                          "en/download.html)");
        }


        VAR_12 =
                                  FUNC_7("content-length");
        VAR_13 = FUNC_7("location");

        VAR_29->lua = FUNC_9(((void*)0), VAR_22->cycle, VAR_22->pool, VAR_29,
                                         VAR_22->log, ((void*)0));
        if (VAR_29->lua == ((void*)0)) {
            FUNC_2(VAR_6, VAR_22, 0,
                               "failed to initialize Lua VM");
            return VAR_1;
        }

        if (!VAR_29->requires_shm && VAR_29->init_handler) {
            VAR_27 = VAR_9;
            VAR_9 = VAR_22->cycle;

            VAR_24 = VAR_29->init_handler(VAR_22->log, VAR_29, VAR_29->lua);

            VAR_9 = VAR_27;

            if (VAR_24 != VAR_7) {

                return VAR_1;
            }
        }

        FUNC_0("Lua VM initialized!");
    }

    return VAR_7;
}
