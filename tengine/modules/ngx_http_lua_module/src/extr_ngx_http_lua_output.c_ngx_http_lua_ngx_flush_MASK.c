
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_22__ {TYPE_1__* connection; int write_event_handler; int header_sent; scalar_t__ header_only; struct TYPE_22__* main; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_23__ {TYPE_4__* cur_co_ctx; scalar_t__ entered_content_phase; int flushing_coros; int seen_body_data; int header_sent; scalar_t__ buffering; scalar_t__ eof; scalar_t__ acquired_raw_req_socket; } ;
typedef TYPE_3__ ngx_http_lua_ctx_t ;
struct TYPE_24__ {int flushing; TYPE_2__* data; int cleanup; } ;
typedef TYPE_4__ ngx_http_lua_co_ctx_t ;
struct TYPE_25__ {int send_lowat; int send_timeout; } ;
typedef TYPE_5__ ngx_http_core_loc_conf_t ;
struct TYPE_26__ {scalar_t__ delayed; scalar_t__ timer_set; } ;
typedef TYPE_6__ ngx_event_t ;
typedef int ngx_chain_t ;
typedef int lua_State ;
struct TYPE_21__ {int buffered; int log; TYPE_6__* write; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,unsigned int,...) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 unsigned int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_6__*,int ) ;
 int FUNC_10 (TYPE_6__*) ;
 scalar_t__ FUNC_11 (TYPE_6__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_12 (TYPE_2__*,int ) ;
 TYPE_5__* FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (int *,TYPE_3__*,int) ;
 int FUNC_15 (TYPE_4__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_16 (TYPE_2__*,TYPE_3__*) ;
 TYPE_2__* FUNC_17 (int *) ;
 int VAR_13 ;
 scalar_t__ FUNC_18 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_19 (int ,int ,int ,char*) ;
 int FUNC_20 (int ,int ,int ,char*,unsigned int,scalar_t__) ;

__attribute__((used)) static int
FUNC_21(lua_State *VAR_14)
{
    ngx_http_request_t *VAR_15;
    ngx_http_lua_ctx_t *VAR_16;
    ngx_chain_t *VAR_17;
    ngx_int_t VAR_18;
    int VAR_19;
    unsigned VAR_20 = 0;
    ngx_event_t *VAR_21;
    ngx_http_core_loc_conf_t *VAR_22;
    ngx_http_lua_co_ctx_t *VAR_23;

    VAR_19 = FUNC_3(VAR_14);
    if (VAR_19 > 1) {
        return FUNC_2(VAR_14, "attempt to pass %d arguments, but accepted 0 "
                          "or 1", VAR_19);
    }

    VAR_15 = FUNC_17(VAR_14);

    if (VAR_19 == 1 && VAR_15 == VAR_15->main) {
        FUNC_1(VAR_14, 1, VAR_0);
        VAR_20 = FUNC_7(VAR_14, 1);
    }

    VAR_16 = FUNC_12(VAR_15, VAR_13);
    if (VAR_16 == ((void*)0)) {
        return FUNC_2(VAR_14, "no request ctx found");
    }

    FUNC_14(VAR_14, VAR_16, VAR_5
                               | VAR_3
                               | VAR_4);

    if (VAR_16->acquired_raw_req_socket) {
        FUNC_6(VAR_14);
        FUNC_5(VAR_14, "raw request socket acquired");
        return 2;
    }

    VAR_23 = VAR_16->cur_co_ctx;
    if (VAR_23 == ((void*)0)) {
        return FUNC_2(VAR_14, "no co ctx found");
    }

    if (VAR_15->header_only) {
        FUNC_6(VAR_14);
        FUNC_5(VAR_14, "header only");
        return 2;
    }

    if (VAR_16->eof) {
        FUNC_6(VAR_14);
        FUNC_5(VAR_14, "seen eof");
        return 2;
    }

    if (VAR_16->buffering) {
        FUNC_19(VAR_7, VAR_15->connection->log, 0,
                       "lua http 1.0 buffering makes ngx.flush() a no-op");

        FUNC_6(VAR_14);
        FUNC_5(VAR_14, "buffering");
        return 2;
    }


    if ((!VAR_15->header_sent && !VAR_16->header_sent)
        || (!VAR_16->seen_body_data && !VAR_20))
    {
        FUNC_6(VAR_14);
        FUNC_5(VAR_14, "nothing to flush");
        return 2;
    }


    VAR_17 = FUNC_16(VAR_15, VAR_16);
    if (VAR_17 == ((void*)0)) {
        return FUNC_2(VAR_14, "no memory");
    }

    VAR_18 = FUNC_18(VAR_15, VAR_16, VAR_17);

    FUNC_0("send chain: %d", (int) VAR_18);

    if (VAR_18 == VAR_1 || VAR_18 >= VAR_6) {
        FUNC_6(VAR_14);
        FUNC_5(VAR_14, "nginx output filter error");
        return 2;
    }

    FUNC_0("wait:%d, rc:%d, buffered:0x%x", VAR_20, (int) VAR_18,
       VAR_15->connection->buffered);

    VAR_21 = VAR_15->connection->write;

    if (VAR_20 && (VAR_15->connection->buffered & VAR_2
                 || VAR_21->delayed))
    {
        FUNC_20(VAR_7, VAR_15->connection->log, 0,
                       "lua flush requires waiting: buffered 0x%uxd, "
                       "delayed:%d", (unsigned) VAR_15->connection->buffered,
                       VAR_21->delayed);

        VAR_23->flushing = 1;
        VAR_16->flushing_coros++;

        if (VAR_16->entered_content_phase) {

            VAR_15->write_event_handler = VAR_11;

        } else {
            VAR_15->write_event_handler = VAR_10;
        }

        VAR_22 = FUNC_13(VAR_15, VAR_9);

        if (!VAR_21->delayed) {
            FUNC_9(VAR_21, VAR_22->send_timeout);
        }

        if (FUNC_11(VAR_21, VAR_22->send_lowat) != VAR_8) {
            if (VAR_21->timer_set) {
                VAR_21->delayed = 0;
                FUNC_10(VAR_21);
            }

            FUNC_6(VAR_14);
            FUNC_5(VAR_14, "connection broken");
            return 2;
        }

        FUNC_15(VAR_16->cur_co_ctx);
        VAR_23->cleanup = VAR_12;
        VAR_23->data = VAR_15;

        return FUNC_8(VAR_14, 0);
    }

    FUNC_19(VAR_7, VAR_15->connection->log, 0,
                   "lua flush asynchronously");

    FUNC_4(VAR_14, 1);
    return 1;
}
