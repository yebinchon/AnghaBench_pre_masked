
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_17__ {int (* handler ) (TYPE_2__*) ;int kq_errno; scalar_t__ pending_eof; scalar_t__ timedout; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_18__ {scalar_t__ (* recv ) (TYPE_3__*,int *,size_t) ;scalar_t__ received; scalar_t__ destroyed; scalar_t__ sent; int * data; scalar_t__ idle; TYPE_8__* log; int addr_text; int pool; scalar_t__ async_enable; int log_error; TYPE_4__* buffer; TYPE_1__* ssl; scalar_t__ close; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_19__ {int * last; int * pos; int * start; int * end; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_20__ {char* action; int * handler; } ;
struct TYPE_16__ {int no_send_shutdown; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int * FUNC_3 (TYPE_3__*) ;
 int * VAR_9 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_8__*,int ,char*) ;
 int FUNC_6 (int ,TYPE_8__*,int ,char*,int *) ;
 int * FUNC_7 (int ,size_t) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (int ) ;
 int VAR_10 ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int *,size_t) ;

__attribute__((used)) static void
FUNC_13(ngx_event_t *VAR_11)
{
    size_t VAR_12;
    ssize_t VAR_13;
    ngx_buf_t *VAR_14;
    ngx_connection_t *VAR_15;

    VAR_15 = VAR_11->data;

    FUNC_5(VAR_4, VAR_15->log, 0, "http keepalive handler");

    if (VAR_11->timedout || VAR_15->close) {
        FUNC_2(VAR_15);
        return;
    }
    VAR_14 = VAR_15->buffer;
    VAR_12 = VAR_14->end - VAR_14->start;

    if (VAR_14->pos == ((void*)0)) {







        VAR_14->pos = FUNC_7(VAR_15->pool, VAR_12);
        if (VAR_14->pos == ((void*)0)) {
            FUNC_2(VAR_15);
            return;
        }

        VAR_14->start = VAR_14->pos;
        VAR_14->last = VAR_14->pos;
        VAR_14->end = VAR_14->pos + VAR_12;
    }






    VAR_15->log_error = VAR_2;
    FUNC_10(0);

    VAR_13 = VAR_15->recv(VAR_15, VAR_14->last, VAR_12);
    VAR_15->log_error = VAR_3;

    if (VAR_13 == VAR_0) {
        if (FUNC_1(VAR_11, 0) != VAR_6) {
            FUNC_2(VAR_15);
            return;
        }
        if (FUNC_8(VAR_15->pool, VAR_14->start) == VAR_6) {





            VAR_14->pos = ((void*)0);
        }




        return;
    }

    if (VAR_13 == VAR_1) {
        FUNC_2(VAR_15);
        return;
    }

    VAR_15->log->handler = ((void*)0);

    if (VAR_13 == 0) {
        FUNC_6(VAR_5, VAR_15->log, VAR_10,
                      "client %V closed keepalive connection", &VAR_15->addr_text);
        FUNC_2(VAR_15);
        return;
    }

    VAR_14->last += VAR_13;

    VAR_15->log->handler = VAR_9;
    VAR_15->log->action = "reading client request line";

    VAR_15->idle = 0;
    FUNC_9(VAR_15, 0);

    VAR_15->data = FUNC_3(VAR_15);
    if (VAR_15->data == ((void*)0)) {
        FUNC_2(VAR_15);
        return;
    }

    VAR_15->sent = 0;
    VAR_15->destroyed = 0;




    FUNC_0(VAR_11);

    VAR_11->handler = FUNC_4;
    FUNC_4(VAR_11);
}
