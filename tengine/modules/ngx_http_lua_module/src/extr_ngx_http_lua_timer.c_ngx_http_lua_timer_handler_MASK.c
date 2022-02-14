
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_53__ TYPE_9__ ;
typedef struct TYPE_52__ TYPE_8__ ;
typedef struct TYPE_51__ TYPE_7__ ;
typedef struct TYPE_50__ TYPE_6__ ;
typedef struct TYPE_49__ TYPE_5__ ;
typedef struct TYPE_48__ TYPE_4__ ;
typedef struct TYPE_47__ TYPE_3__ ;
typedef struct TYPE_46__ TYPE_39__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_1__ ;
typedef struct TYPE_43__ TYPE_13__ ;
typedef struct TYPE_42__ TYPE_12__ ;
typedef struct TYPE_41__ TYPE_11__ ;
typedef struct TYPE_40__ TYPE_10__ ;


struct TYPE_47__ {scalar_t__ data; int (* handler ) (scalar_t__) ;} ;
typedef TYPE_3__ ngx_pool_cleanup_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_48__ {TYPE_12__* connection; int read_event_handler; int pool; int loc_conf; int srv_conf; int main_conf; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_49__ {scalar_t__ delay; unsigned int co; scalar_t__ pool; scalar_t__ vm_state; scalar_t__ co_ref; int premature; int loc_conf; int srv_conf; int main_conf; int client_addr_text; int listening; TYPE_6__* lmcf; } ;
typedef TYPE_5__ ngx_http_lua_timer_ctx_t ;
struct TYPE_50__ {scalar_t__ running_timers; scalar_t__ max_running_timers; int pending_timers; } ;
typedef TYPE_6__ ngx_http_lua_main_conf_t ;
struct TYPE_45__ {unsigned int co; int co_top; int co_status; scalar_t__ co_ref; } ;
struct TYPE_51__ {int entered_content_phase; TYPE_2__* cur_co_ctx; int context; int * cleanup; TYPE_2__ entry_co_ctx; scalar_t__ vm_state; } ;
typedef TYPE_7__ ngx_http_lua_ctx_t ;
struct TYPE_52__ {TYPE_13__* error_log; } ;
typedef TYPE_8__ ngx_http_core_loc_conf_t ;
struct TYPE_53__ {int handler; TYPE_7__* data; } ;
typedef TYPE_9__ ngx_http_cleanup_t ;
struct TYPE_40__ {int data; } ;
typedef TYPE_10__ ngx_event_t ;
struct TYPE_41__ {TYPE_1__* log; int addr_text; int listening; } ;
typedef TYPE_11__ ngx_connection_t ;
typedef int lua_State ;
struct TYPE_46__ {int log; } ;
struct TYPE_44__ {int log_level; int file; TYPE_11__* data; int handler; } ;
struct TYPE_43__ {int log_level; int file; } ;
struct TYPE_42__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned int,int,scalar_t__) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (unsigned int,int ) ;
 TYPE_39__* VAR_11 ;
 int FUNC_8 (scalar_t__) ;
 int VAR_12 ;
 int FUNC_9 (TYPE_10__*) ;
 int VAR_13 ;
 TYPE_9__* FUNC_10 (TYPE_4__*,int ) ;
 int VAR_14 ;
 TYPE_8__* FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_11__*) ;
 scalar_t__ FUNC_14 (int *,TYPE_4__*,TYPE_7__*,int) ;
 TYPE_7__* FUNC_15 (TYPE_4__*) ;
 TYPE_11__* FUNC_16 (scalar_t__) ;
 TYPE_4__* FUNC_17 (TYPE_11__*) ;
 int FUNC_18 (TYPE_4__*,scalar_t__) ;
 int * FUNC_19 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_20 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_21 (int *,TYPE_4__*,TYPE_7__*,int) ;
 int FUNC_22 (unsigned int,TYPE_4__*) ;
 scalar_t__ FUNC_23 (TYPE_5__*) ;
 int FUNC_24 (TYPE_12__*,TYPE_13__*) ;
 int FUNC_25 (int ,int ,int ,char*) ;
 int FUNC_26 (int ,int ,int ,char*,unsigned int) ;
 int FUNC_27 (TYPE_5__*,int ,int) ;
 TYPE_3__* FUNC_28 (int ,int ) ;
 int FUNC_29 (TYPE_12__*,TYPE_13__*) ;

__attribute__((used)) static void
FUNC_30(ngx_event_t *VAR_17)
{
    int VAR_18;
    lua_State *VAR_19;
    ngx_int_t VAR_20;
    ngx_connection_t *VAR_21 = ((void*)0);
    ngx_http_request_t *VAR_22 = ((void*)0);
    ngx_http_lua_ctx_t *VAR_23;
    ngx_http_cleanup_t *VAR_24;
    ngx_pool_cleanup_t *VAR_25;

    ngx_http_lua_timer_ctx_t VAR_26;
    ngx_http_lua_main_conf_t *VAR_27;
    ngx_http_core_loc_conf_t *VAR_28;

    FUNC_25(VAR_8, VAR_11->log, 0,
                   "lua ngx.timer expired");

    FUNC_27(&VAR_26, VAR_17->data, sizeof(ngx_http_lua_timer_ctx_t));
    FUNC_9(VAR_17);

    VAR_27 = VAR_26.lmcf;

    VAR_27->pending_timers--;

    if (!VAR_12 && VAR_26.delay > 0) {
        VAR_20 = FUNC_23(&VAR_26);
        if (VAR_20 != VAR_9) {
            FUNC_26(VAR_6, VAR_11->log, 0,
                          "failed to create the next timer of delay %ud ms",
                          (unsigned) VAR_26.delay);
        }
    }

    if (VAR_27->running_timers >= VAR_27->max_running_timers) {
        FUNC_26(VAR_6, VAR_11->log, 0,
                      "%i lua_max_running_timers are not enough",
                      VAR_27->max_running_timers);
        goto failed;
    }

    VAR_21 = FUNC_16(VAR_26.pool);
    if (VAR_21 == ((void*)0)) {
        FUNC_26(VAR_6, VAR_11->log, 0,
                      "failed to create fake connection to run timer (co: %p)",
                      VAR_26.co);
        goto failed;
    }

    VAR_21->log->handler = VAR_15;
    VAR_21->log->data = VAR_21;

    VAR_21->listening = VAR_26.listening;
    VAR_21->addr_text = VAR_26.client_addr_text;

    VAR_22 = FUNC_17(VAR_21);
    if (VAR_22 == ((void*)0)) {
        FUNC_26(VAR_6, VAR_11->log, 0,
                      "failed to create fake request to run timer (co: %p)",
                      VAR_26.co);
        goto failed;
    }

    VAR_22->main_conf = VAR_26.main_conf;
    VAR_22->srv_conf = VAR_26.srv_conf;
    VAR_22->loc_conf = VAR_26.loc_conf;

    VAR_28 = FUNC_11(VAR_22, VAR_14);
    VAR_21->log->file = VAR_28->error_log->file;

    if (!(VAR_21->log->log_level & VAR_7)) {
        VAR_21->log->log_level = VAR_28->error_log->log_level;
    }



    FUNC_0("lmcf: %p", VAR_27);

    VAR_23 = FUNC_15(VAR_22);
    if (VAR_23 == ((void*)0)) {
        FUNC_26(VAR_6, VAR_11->log, 0,
                      "failed to create ctx to run timer (co: %p)", VAR_26.co);
        goto failed;
    }

    if (VAR_26.vm_state) {
        VAR_23->vm_state = VAR_26.vm_state;

        VAR_25 = FUNC_28(VAR_22->pool, 0);
        if (VAR_25 == ((void*)0)) {
            FUNC_26(VAR_6, VAR_11->log, 0,
                          "failed to add vm cleanup to run timer (co: %p)",
                          VAR_26.co);
            goto failed;
        }

        VAR_25->handler = FUNC_12;
        VAR_25->data = VAR_26.vm_state;
    }

    VAR_23->cur_co_ctx = &VAR_23->entry_co_ctx;

    VAR_19 = FUNC_19(VAR_22, VAR_23);

    VAR_24 = FUNC_10(VAR_22, 0);
    if (VAR_24 == ((void*)0)) {
        FUNC_26(VAR_6, VAR_11->log, 0,
                      "failed to add request cleanup to run timer (co: %p)",
                      VAR_26.co);
        goto failed;
    }

    VAR_24->handler = VAR_16;
    VAR_24->data = VAR_23;
    VAR_23->cleanup = &VAR_24->handler;

    VAR_23->entered_content_phase = 1;
    VAR_23->context = VAR_4;

    VAR_22->read_event_handler = VAR_13;

    VAR_23->cur_co_ctx->co_ref = VAR_26.co_ref;
    VAR_23->cur_co_ctx->co = VAR_26.co;
    VAR_23->cur_co_ctx->co_status = VAR_5;

    FUNC_0("r connection: %p, log %p", VAR_22->connection, VAR_22->connection->log);


    FUNC_22(VAR_26.co, VAR_22);

    VAR_27->running_timers++;

    FUNC_4(VAR_26.co, VAR_26.premature);

    VAR_18 = FUNC_2(VAR_26.co);
    if (VAR_18 > 2) {
        FUNC_3(VAR_26.co, 2);
    }





    VAR_20 = FUNC_21(VAR_19, VAR_22, VAR_23, VAR_18 - 1);

    FUNC_0("timer lua run thread: %d", (int) VAR_20);

    if (VAR_20 == VAR_3 || VAR_20 >= VAR_9) {


    } else if (VAR_20 == VAR_1) {
        VAR_20 = FUNC_14(VAR_19, VAR_22, VAR_23, 0);

    } else if (VAR_20 == VAR_2) {
        VAR_20 = FUNC_14(VAR_19, VAR_22, VAR_23, 1);

    } else {
        VAR_20 = VAR_9;
    }

    FUNC_18(VAR_22, VAR_20);
    return;

failed:

    if (VAR_26.co_ref && VAR_26.co) {
        FUNC_5(VAR_26.co, FUNC_20(
                              VAR_10));
        FUNC_6(VAR_26.co, VAR_0);
        FUNC_1(VAR_26.co, -1, VAR_26.co_ref);
        FUNC_7(VAR_26.co, 0);
    }

    if (VAR_26.vm_state) {
        FUNC_12(VAR_26.vm_state);
    }

    if (VAR_21) {
        FUNC_13(VAR_21);

    } else if (VAR_26.pool) {
        FUNC_8(VAR_26.pool);
    }
}
