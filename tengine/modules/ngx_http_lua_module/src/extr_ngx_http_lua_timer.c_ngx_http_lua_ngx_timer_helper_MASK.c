
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_22__ ;
typedef struct TYPE_26__ TYPE_20__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int u_char ;
typedef scalar_t__ ngx_socket_t ;
typedef scalar_t__ ngx_msec_t ;
struct TYPE_32__ {TYPE_5__* connection; int loc_conf; int srv_conf; int main_conf; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_28__ {int * data; scalar_t__ len; } ;
struct TYPE_33__ {int co_ref; int * pool; int * co; TYPE_3__* vm_state; TYPE_2__ client_addr_text; int * listening; TYPE_8__* lmcf; int loc_conf; int srv_conf; int main_conf; scalar_t__ premature; scalar_t__ delay; } ;
typedef TYPE_7__ ngx_http_lua_timer_ctx_t ;
struct TYPE_34__ {scalar_t__ pending_timers; scalar_t__ max_pending_timers; TYPE_20__* watcher; } ;
typedef TYPE_8__ ngx_http_lua_main_conf_t ;
struct TYPE_35__ {TYPE_3__* vm_state; } ;
typedef TYPE_9__ ngx_http_lua_ctx_t ;
typedef int ngx_http_core_main_conf_t ;
typedef int ngx_http_connection_t ;
struct TYPE_24__ {int log; TYPE_7__* data; int handler; } ;
typedef TYPE_10__ ngx_event_t ;
typedef int ngx_connection_t ;
typedef int lua_State ;
struct TYPE_25__ {scalar_t__ len; int data; } ;
struct TYPE_31__ {TYPE_1__ addr_text; int * listening; int log; } ;
struct TYPE_30__ {int handler; } ;
struct TYPE_29__ {int count; } ;
struct TYPE_27__ {int log; int ** files; } ;
struct TYPE_26__ {int idle; TYPE_8__* data; TYPE_4__* read; scalar_t__ fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int,char*) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int *,int) ;
 int FUNC_22 (TYPE_10__*,scalar_t__) ;
 int * FUNC_23 (int,int ) ;
 int * FUNC_24 (int,int ) ;
 TYPE_22__* VAR_3 ;
 int FUNC_25 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_26 (TYPE_10__*) ;
 TYPE_20__* FUNC_27 (int ,int ) ;
 TYPE_9__* FUNC_28 (TYPE_6__*,int ) ;
 TYPE_8__* FUNC_29 (TYPE_6__*,int ) ;
 int VAR_5 ;
 int FUNC_30 (int *) ;
 int * FUNC_31 (TYPE_6__*,TYPE_9__*) ;
 TYPE_6__* FUNC_32 (int *) ;
 int FUNC_33 (int ) ;
 int VAR_6 ;
 int FUNC_34 (TYPE_6__*,int *,int *) ;
 int FUNC_35 (int *) ;
 int VAR_7 ;
 int FUNC_36 (int ,int ,int ,char*) ;
 int FUNC_37 (int ,int ,int ,char*,int *,scalar_t__) ;
 int FUNC_38 (int *,int ,scalar_t__) ;
 int FUNC_39 (TYPE_10__*,int) ;
 int * FUNC_40 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_41(lua_State *VAR_8, int VAR_9)
{
    int VAR_10, VAR_11;
    u_char *VAR_12;
    lua_State *VAR_13;
    lua_State *VAR_14;
    ngx_msec_t VAR_15;
    ngx_event_t *VAR_16 = ((void*)0);
    ngx_http_request_t *VAR_17;
    ngx_connection_t *VAR_18 = ((void*)0);
    ngx_http_lua_ctx_t *VAR_19;




    ngx_http_lua_timer_ctx_t *VAR_20 = ((void*)0);
    ngx_http_lua_main_conf_t *VAR_21;




    VAR_10 = FUNC_7(VAR_8);
    if (VAR_10 < 2) {
        return FUNC_3(VAR_8, "expecting at least 2 arguments but got %d",
                          VAR_10);
    }

    VAR_15 = (ngx_msec_t) (FUNC_2(VAR_8, 1) * 1000);

    if (VAR_9 && VAR_15 == 0) {
        return FUNC_3(VAR_8, "delay cannot be zero");
    }

    FUNC_1(VAR_8, FUNC_9(VAR_8, 2) && !FUNC_8(VAR_8, 2), 2,
                  "Lua function expected");

    VAR_17 = FUNC_32(VAR_8);
    if (VAR_17 == ((void*)0)) {
        return FUNC_3(VAR_8, "no request");
    }

    VAR_19 = FUNC_28(VAR_17, VAR_6);

    if (VAR_4 && VAR_15 > 0) {
        FUNC_15(VAR_8);
        FUNC_14(VAR_8, "process exiting");
        return 2;
    }

    VAR_21 = FUNC_29(VAR_17, VAR_6);

    if (VAR_21->pending_timers >= VAR_21->max_pending_timers) {
        FUNC_15(VAR_8);
        FUNC_14(VAR_8, "too many pending timers");
        return 2;
    }

    if (VAR_21->watcher == ((void*)0)) {


        FUNC_36(VAR_1, VAR_3->log, 0,
                       "lua creating fake watcher connection");

        if (VAR_3->files) {
            VAR_18 = VAR_3->files[0];
        }

        VAR_21->watcher = FUNC_27(0, VAR_3->log);

        if (VAR_3->files) {
            VAR_3->files[0] = VAR_18;
        }

        if (VAR_21->watcher == ((void*)0)) {
            return FUNC_3(VAR_8, "no memory");
        }


        VAR_21->watcher->fd = (ngx_socket_t) -2;

        VAR_21->watcher->idle = 1;
        VAR_21->watcher->read->handler = VAR_5;
        VAR_21->watcher->data = VAR_21;
    }

    VAR_13 = FUNC_31(VAR_17, VAR_19);

    VAR_14 = FUNC_10(VAR_13);



    FUNC_34(VAR_17, VAR_8, VAR_14);


    FUNC_6(VAR_14, 0, 0);



    FUNC_6(VAR_14, 0, 1);
    FUNC_30(VAR_14);
    FUNC_19(VAR_14, -2, "__index");
    FUNC_20(VAR_14, -2);



    FUNC_35(VAR_14);




    FUNC_0("stack top: %d", FUNC_7(VAR_8));

    FUNC_21(VAR_13, VAR_8, 1);




    FUNC_16(VAR_8, 2);



    FUNC_21(VAR_8, VAR_14, 1);





    FUNC_30(VAR_14);
    FUNC_18(VAR_14, -2);




    FUNC_13(VAR_8, FUNC_33(
                          VAR_2));
    FUNC_17(VAR_8, VAR_0);



    FUNC_16(VAR_8, -2);



    VAR_11 = FUNC_4(VAR_8, -2);
    FUNC_11(VAR_8, 1);



    if (VAR_10 > 2) {
        FUNC_11(VAR_8, 1);
        FUNC_21(VAR_8, VAR_14, VAR_10 - 2);


    }

    VAR_12 = FUNC_23(sizeof(ngx_event_t) + sizeof(ngx_http_lua_timer_ctx_t),
                  VAR_17->connection->log);
    if (VAR_12 == ((void*)0)) {
        goto nomem;
    }

    VAR_16 = (ngx_event_t *) VAR_12;

    FUNC_39(VAR_16, sizeof(ngx_event_t));

    VAR_12 += sizeof(ngx_event_t);

    VAR_20 = (ngx_http_lua_timer_ctx_t *) VAR_12;

    VAR_20->delay = VAR_9 ? VAR_15 : 0;

    VAR_20->premature = 0;
    VAR_20->co_ref = VAR_11;
    VAR_20->co = VAR_14;
    VAR_20->main_conf = VAR_17->main_conf;
    VAR_20->srv_conf = VAR_17->srv_conf;
    VAR_20->loc_conf = VAR_17->loc_conf;
    VAR_20->lmcf = VAR_21;

    VAR_20->pool = FUNC_24(128, VAR_3->log);
    if (VAR_20->pool == ((void*)0)) {
        goto nomem;
    }

    if (VAR_17->connection) {
        VAR_20->listening = VAR_17->connection->listening;

    } else {
        VAR_20->listening = ((void*)0);
    }

    if (VAR_17->connection->addr_text.len) {
        VAR_20->client_addr_text.data = FUNC_40(VAR_20->pool,
                                                 VAR_17->connection->addr_text.len);
        if (VAR_20->client_addr_text.data == ((void*)0)) {
            goto nomem;
        }

        FUNC_38(VAR_20->client_addr_text.data, VAR_17->connection->addr_text.data,
                   VAR_17->connection->addr_text.len);
        VAR_20->client_addr_text.len = VAR_17->connection->addr_text.len;

    } else {
        VAR_20->client_addr_text.len = 0;
        VAR_20->client_addr_text.data = ((void*)0);
    }

    if (VAR_19 && VAR_19->vm_state) {
        VAR_20->vm_state = VAR_19->vm_state;
        VAR_20->vm_state->count++;

    } else {
        VAR_20->vm_state = ((void*)0);
    }

    VAR_16->handler = VAR_7;
    VAR_16->data = VAR_20;
    VAR_16->log = VAR_3->log;

    VAR_21->pending_timers++;

    FUNC_22(VAR_16, VAR_15);

    FUNC_37(VAR_1, VAR_3->log, 0,
                   "created timer (co: %p delay: %M ms)", VAR_20->co, VAR_15);

    FUNC_12(VAR_8, 1);
    return 1;

nomem:

    if (VAR_20 && VAR_20->pool) {
        FUNC_25(VAR_20->pool);
    }

    if (VAR_16) {
        FUNC_26(VAR_16);
    }

    FUNC_13(VAR_8, FUNC_33(
                          VAR_2));
    FUNC_17(VAR_8, VAR_0);
    FUNC_5(VAR_8, -1, VAR_11);

    return FUNC_3(VAR_8, "no memory");
}
