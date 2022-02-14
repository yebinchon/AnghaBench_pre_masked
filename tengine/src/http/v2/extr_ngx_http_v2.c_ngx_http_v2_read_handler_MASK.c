
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_19__ {int recv_buffer_size; int * recv_buffer; } ;
typedef TYPE_3__ ngx_http_v2_main_conf_t ;
struct TYPE_18__ {int buffer_used; int * (* handler ) (TYPE_4__*,int *,int *) ;scalar_t__ incomplete; int buffer; } ;
struct TYPE_20__ {int blocked; int goaway; scalar_t__ pushing; scalar_t__ processing; scalar_t__ last_out; TYPE_2__ state; TYPE_1__* http_connection; } ;
typedef TYPE_4__ ngx_http_v2_connection_t ;
struct TYPE_21__ {scalar_t__ timer_set; scalar_t__ ready; scalar_t__ timedout; TYPE_6__* data; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_22__ {scalar_t__ (* recv ) (TYPE_6__*,int *,size_t) ;int error; int log; scalar_t__ close; TYPE_4__* data; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_17__ {int conf_ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 int FUNC_9 (int *,int ,int) ;
 scalar_t__ FUNC_10 (TYPE_6__*,int *,size_t) ;
 int * FUNC_11 (TYPE_4__*,int *,int *) ;

__attribute__((used)) static void
FUNC_12(ngx_event_t *VAR_11)
{
    u_char *VAR_12, *VAR_13;
    size_t VAR_14;
    ssize_t VAR_15;
    ngx_connection_t *VAR_16;
    ngx_http_v2_main_conf_t *VAR_17;
    ngx_http_v2_connection_t *VAR_18;

    VAR_16 = VAR_11->data;
    VAR_18 = VAR_16->data;

    if (VAR_11->timedout) {
        FUNC_8(VAR_8, VAR_16->log, VAR_2, "client timed out");
        FUNC_3(VAR_18, VAR_5);
        return;
    }

    FUNC_7(VAR_7, VAR_16->log, 0, "http2 read handler");

    VAR_18->blocked = 1;

    if (VAR_16->close) {
        VAR_16->close = 0;

        if (!VAR_18->goaway) {
            VAR_18->goaway = 1;

            if (FUNC_5(VAR_18, VAR_4)
                == VAR_1)
            {
                FUNC_3(VAR_18, 0);
                return;
            }

            if (FUNC_6(VAR_18) == VAR_1) {
                FUNC_3(VAR_18, 0);
                return;
            }
        }

        VAR_18->blocked = 0;

        return;
    }

    VAR_17 = FUNC_2(VAR_18->http_connection->conf_ctx,
                                          VAR_10);

    VAR_14 = VAR_17->recv_buffer_size - 2 * VAR_6;

    do {
        VAR_12 = VAR_17->recv_buffer;

        FUNC_9(VAR_12, VAR_18->state.buffer, VAR_6);
        VAR_13 = VAR_12 + VAR_18->state.buffer_used;

        VAR_15 = VAR_16->recv(VAR_16, VAR_13, VAR_14);

        if (VAR_15 == VAR_0) {
            break;
        }

        if (VAR_15 == 0
            && (VAR_18->state.incomplete || VAR_18->processing || VAR_18->pushing))
        {
            FUNC_8(VAR_8, VAR_16->log, 0,
                          "client prematurely closed connection");
        }

        if (VAR_15 == 0 || VAR_15 == VAR_1) {
            VAR_16->error = 1;
            FUNC_3(VAR_18, 0);
            return;
        }

        VAR_13 += VAR_15;

        VAR_18->state.buffer_used = 0;
        VAR_18->state.incomplete = 0;

        do {
            VAR_12 = VAR_18->state.handler(VAR_18, VAR_12, VAR_13);

            if (VAR_12 == ((void*)0)) {
                return;
            }

        } while (VAR_12 != VAR_13);

    } while (VAR_11->ready);

    if (FUNC_1(VAR_11, 0) != VAR_9) {
        FUNC_3(VAR_18, VAR_3);
        return;
    }

    if (VAR_18->last_out && FUNC_6(VAR_18) == VAR_1) {
        FUNC_3(VAR_18, 0);
        return;
    }

    VAR_18->blocked = 0;

    if (VAR_18->processing || VAR_18->pushing) {
        if (VAR_11->timer_set) {
            FUNC_0(VAR_11);
        }

        return;
    }

    FUNC_4(VAR_18);
}
