
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_19__ {int (* write_event_handler ) (TYPE_3__*) ;TYPE_2__* connection; scalar_t__ done; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_20__ {scalar_t__ entered_content_phase; TYPE_1__* on_abort_co_ctx; TYPE_1__* cur_co_ctx; int resume_handler; int uthreads; } ;
typedef TYPE_4__ ngx_http_lua_ctx_t ;
struct TYPE_21__ {scalar_t__ active; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_18__ {int error; int log; TYPE_5__* read; } ;
struct TYPE_17__ {scalar_t__ co_status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (TYPE_3__*) ;

void
FUNC_9(ngx_http_request_t *VAR_10)
{
    ngx_int_t VAR_11;
    ngx_event_t *VAR_12;
    ngx_http_lua_ctx_t *VAR_13;

    if (VAR_10->done) {
        return;
    }

    VAR_11 = FUNC_3(VAR_10, VAR_10->connection->read);

    if (VAR_11 == VAR_4) {
        return;
    }



    VAR_13 = FUNC_2(VAR_10, VAR_8);
    if (VAR_13 == ((void*)0)) {
        return;
    }

    if (VAR_13->on_abort_co_ctx == ((void*)0)) {
        VAR_10->connection->error = 1;
        FUNC_6(VAR_13, 0);
        FUNC_5(VAR_10, VAR_11);
        return;
    }

    if (VAR_13->on_abort_co_ctx->co_status != VAR_2) {



        VAR_12 = VAR_10->connection->read;

        if ((VAR_7 & VAR_6) && VAR_12->active) {
            if (FUNC_0(VAR_12, VAR_5, 0) != VAR_4) {
                FUNC_6(VAR_13, 0);
                FUNC_5(VAR_10,
                                              VAR_0);
                return;
            }
        }

        return;
    }

    VAR_13->uthreads++;
    VAR_13->resume_handler = VAR_9;
    VAR_13->on_abort_co_ctx->co_status = VAR_1;
    VAR_13->cur_co_ctx = VAR_13->on_abort_co_ctx;

    FUNC_7(VAR_3, VAR_10->connection->log, 0,
                   "lua waking up the on_abort callback thread");

    if (VAR_13->entered_content_phase) {
        VAR_10->write_event_handler = FUNC_4;

    } else {
        VAR_10->write_event_handler = FUNC_1;
    }

    VAR_10->write_event_handler(VAR_10);
}
