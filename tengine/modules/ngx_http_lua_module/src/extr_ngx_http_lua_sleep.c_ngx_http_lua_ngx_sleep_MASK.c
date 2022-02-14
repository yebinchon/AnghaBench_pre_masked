
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ngx_msec_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {int data; scalar_t__ len; } ;
struct TYPE_15__ {TYPE_2__* connection; TYPE_1__ uri; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_16__ {TYPE_5__* cur_co_ctx; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
struct TYPE_18__ {int delayed; int log; TYPE_5__* data; int handler; } ;
struct TYPE_17__ {TYPE_6__ sleep; TYPE_3__* data; int cleanup; } ;
typedef TYPE_5__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 TYPE_4__* FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int *,TYPE_4__*,int) ;
 int FUNC_8 (TYPE_5__*) ;
 TYPE_3__* FUNC_9 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_11 (int ,int ,int ,char*) ;
 int FUNC_12 (TYPE_6__*,int *) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_13(lua_State *VAR_12)
{
    int VAR_13;
    ngx_int_t VAR_14;
    ngx_http_request_t *VAR_15;
    ngx_http_lua_ctx_t *VAR_16;
    ngx_http_lua_co_ctx_t *VAR_17;

    VAR_13 = FUNC_3(VAR_12);
    if (VAR_13 != 1) {
        return FUNC_2(VAR_12, "attempt to pass %d arguments, but accepted 1", VAR_13);
    }

    VAR_15 = FUNC_9(VAR_12);
    if (VAR_15 == ((void*)0)) {
        return FUNC_2(VAR_12, "no request found");
    }

    VAR_14 = (ngx_int_t) (FUNC_1(VAR_12, 1) * 1000);

    if (VAR_14 < 0) {
        return FUNC_2(VAR_12, "invalid sleep duration \"%d\"", VAR_14);
    }

    VAR_16 = FUNC_6(VAR_15, VAR_8);
    if (VAR_16 == ((void*)0)) {
        return FUNC_2(VAR_12, "no request ctx found");
    }

    FUNC_7(VAR_12, VAR_16, VAR_2
                               | VAR_0
                               | VAR_1
                               | VAR_5
                               | VAR_3
                               | VAR_4);

    VAR_17 = VAR_16->cur_co_ctx;
    if (VAR_17 == ((void*)0)) {
        return FUNC_2(VAR_12, "no co ctx found");
    }

    FUNC_8(VAR_17);
    VAR_17->cleanup = VAR_9;
    VAR_17->data = VAR_15;

    VAR_17->sleep.handler = VAR_10;
    VAR_17->sleep.data = VAR_17;
    VAR_17->sleep.log = VAR_15->connection->log;

    if (VAR_14 == 0) {






        FUNC_11(VAR_7, VAR_15->connection->log, 0, "ngx.sleep(0)"
                      " called without delayed events patch, this will"
                      " hurt performance");
        FUNC_5(&VAR_17->sleep, (ngx_msec_t) VAR_14);


    } else {
        FUNC_0("adding timer with delay %lu ms, r:%.*s", (unsigned long) VAR_14,
           (int) VAR_15->uri.len, VAR_15->uri.data);

        FUNC_5(&VAR_17->sleep, (ngx_msec_t) VAR_14);
    }

    FUNC_10(VAR_6, VAR_15->connection->log, 0,
                   "lua ready to sleep for %d ms", VAR_14);

    return FUNC_4(VAR_12, 0);
}
