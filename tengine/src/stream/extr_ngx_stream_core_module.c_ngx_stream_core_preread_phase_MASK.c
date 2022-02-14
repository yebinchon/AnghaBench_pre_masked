
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_21__ {int phase_handler; TYPE_4__* connection; } ;
typedef TYPE_1__ ngx_stream_session_t ;
struct TYPE_22__ {scalar_t__ (* handler ) (TYPE_1__*) ;int next; } ;
typedef TYPE_2__ ngx_stream_phase_handler_t ;
struct TYPE_23__ {int preread_timeout; int preread_buffer_size; } ;
typedef TYPE_3__ ngx_stream_core_srv_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_24__ {scalar_t__ (* recv ) (TYPE_4__*,size_t,size_t) ;TYPE_14__* read; TYPE_16__* buffer; TYPE_13__* log; int pool; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_20__ {size_t end; size_t last; } ;
struct TYPE_19__ {scalar_t__ timer_set; int handler; int ready; scalar_t__ eof; scalar_t__ timedout; } ;
struct TYPE_18__ {char* action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_14__*,int ) ;
 TYPE_16__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_14__*) ;
 scalar_t__ FUNC_3 (TYPE_14__*,int ) ;
 int FUNC_4 (int ,TYPE_13__*,int ,char*) ;
 int VAR_9 ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 TYPE_3__* FUNC_6 (TYPE_1__*,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,size_t,size_t) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

ngx_int_t
FUNC_10(ngx_stream_session_t *VAR_11,
    ngx_stream_phase_handler_t *VAR_12)
{
    size_t VAR_13;
    ssize_t VAR_14;
    ngx_int_t VAR_15;
    ngx_connection_t *VAR_16;
    ngx_stream_core_srv_conf_t *VAR_17;

    VAR_16 = VAR_11->connection;

    VAR_16->log->action = "prereading client data";

    VAR_17 = FUNC_6(VAR_11, VAR_9);

    if (VAR_16->read->timedout) {
        VAR_15 = VAR_8;

    } else if (VAR_16->read->timer_set) {
        VAR_15 = VAR_0;

    } else {
        VAR_15 = VAR_12->handler(VAR_11);
    }

    while (VAR_15 == VAR_0) {

        if (VAR_16->buffer == ((void*)0)) {
            VAR_16->buffer = FUNC_1(VAR_16->pool, VAR_17->preread_buffer_size);
            if (VAR_16->buffer == ((void*)0)) {
                VAR_15 = VAR_3;
                break;
            }
        }

        VAR_13 = VAR_16->buffer->end - VAR_16->buffer->last;

        if (VAR_13 == 0) {
            FUNC_4(VAR_4, VAR_16->log, 0, "preread buffer full");
            VAR_15 = VAR_6;
            break;
        }

        if (VAR_16->read->eof) {
            VAR_15 = VAR_8;
            break;
        }

        if (!VAR_16->read->ready) {
            break;
        }

        VAR_14 = VAR_16->recv(VAR_16, VAR_16->buffer->last, VAR_13);

        if (VAR_14 == VAR_3 || VAR_14 == 0) {
            VAR_15 = VAR_8;
            break;
        }

        if (VAR_14 == VAR_0) {
            break;
        }

        VAR_16->buffer->last += VAR_14;

        VAR_15 = VAR_12->handler(VAR_11);
    }

    if (VAR_15 == VAR_0) {
        if (FUNC_3(VAR_16->read, 0) != VAR_5) {
            FUNC_5(VAR_11, VAR_7);
            return VAR_5;
        }

        if (!VAR_16->read->timer_set) {
            FUNC_0(VAR_16->read, VAR_17->preread_timeout);
        }

        VAR_16->read->handler = VAR_10;

        return VAR_5;
    }

    if (VAR_16->read->timer_set) {
        FUNC_2(VAR_16->read);
    }

    if (VAR_15 == VAR_5) {
        VAR_11->phase_handler = VAR_12->next;
        return VAR_0;
    }

    if (VAR_15 == VAR_1) {
        VAR_11->phase_handler++;
        return VAR_0;
    }

    if (VAR_15 == VAR_2) {
        return VAR_5;
    }

    if (VAR_15 == VAR_3) {
        VAR_15 = VAR_7;
    }

    FUNC_5(VAR_11, VAR_15);

    return VAR_5;
}
