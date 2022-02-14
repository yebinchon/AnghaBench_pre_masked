
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef scalar_t__ ssize_t ;
typedef int ngx_uint_t ;
struct TYPE_23__ {TYPE_6__* connection; TYPE_2__* proxy; TYPE_7__* buffer; } ;
typedef TYPE_3__ ngx_mail_session_t ;
struct TYPE_24__ {int timeout; } ;
typedef TYPE_4__ ngx_mail_proxy_conf_t ;
struct TYPE_25__ {int log; scalar_t__ write; scalar_t__ timedout; TYPE_6__* data; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_26__ {int timedout; scalar_t__ (* send ) (TYPE_6__*,size_t,size_t) ;scalar_t__ (* recv ) (TYPE_6__*,size_t,size_t) ;TYPE_16__* read; TYPE_15__* write; TYPE_14__* log; int fd; scalar_t__ close; TYPE_3__* data; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_27__ {size_t last; size_t pos; scalar_t__ start; size_t end; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_21__ {TYPE_6__* connection; } ;
struct TYPE_22__ {TYPE_1__ upstream; TYPE_7__* buffer; } ;
struct TYPE_20__ {int eof; scalar_t__ ready; } ;
struct TYPE_19__ {scalar_t__ ready; } ;
struct TYPE_18__ {char* action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_16__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_16__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_15__*,int ) ;
 int FUNC_3 (int ,int ,int ,char*,int,int ,int ) ;
 int FUNC_4 (int ,TYPE_14__*,int ,char*) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (TYPE_6__*,size_t,size_t) ;
 scalar_t__ FUNC_8 (TYPE_6__*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_9(ngx_event_t *VAR_7)
{
    char *VAR_8, *VAR_9, *VAR_10;
    size_t VAR_11;
    ssize_t VAR_12;
    ngx_buf_t *VAR_13;
    ngx_uint_t VAR_14;
    ngx_connection_t *VAR_15, *VAR_16, *VAR_17;
    ngx_mail_session_t *VAR_18;
    ngx_mail_proxy_conf_t *VAR_19;

    VAR_15 = VAR_7->data;
    VAR_18 = VAR_15->data;

    if (VAR_7->timedout || VAR_15->close) {
        VAR_15->log->action = "proxying";

        if (VAR_15->close) {
            FUNC_4(VAR_4, VAR_15->log, 0, "shutdown timeout");

        } else if (VAR_15 == VAR_18->connection) {
            FUNC_4(VAR_4, VAR_15->log, VAR_2,
                          "client timed out");
            VAR_15->timedout = 1;

        } else {
            FUNC_4(VAR_4, VAR_15->log, VAR_2,
                          "upstream timed out");
        }

        FUNC_6(VAR_18);
        return;
    }

    if (VAR_15 == VAR_18->connection) {
        if (VAR_7->write) {
            VAR_9 = "proxying and reading from upstream";
            VAR_10 = "proxying and sending to client";
            VAR_16 = VAR_18->proxy->upstream.connection;
            VAR_17 = VAR_15;
            VAR_13 = VAR_18->proxy->buffer;

        } else {
            VAR_9 = "proxying and reading from client";
            VAR_10 = "proxying and sending to upstream";
            VAR_16 = VAR_15;
            VAR_17 = VAR_18->proxy->upstream.connection;
            VAR_13 = VAR_18->buffer;
        }

    } else {
        if (VAR_7->write) {
            VAR_9 = "proxying and reading from client";
            VAR_10 = "proxying and sending to upstream";
            VAR_16 = VAR_18->connection;
            VAR_17 = VAR_15;
            VAR_13 = VAR_18->buffer;

        } else {
            VAR_9 = "proxying and reading from upstream";
            VAR_10 = "proxying and sending to client";
            VAR_16 = VAR_15;
            VAR_17 = VAR_18->connection;
            VAR_13 = VAR_18->proxy->buffer;
        }
    }

    VAR_14 = VAR_7->write ? 1 : 0;

    FUNC_3(VAR_3, VAR_7->log, 0,
                   "mail proxy handler: %ui, #%d > #%d",
                   VAR_14, VAR_16->fd, VAR_17->fd);

    for ( ;; ) {

        if (VAR_14) {

            VAR_11 = VAR_13->last - VAR_13->pos;

            if (VAR_11 && VAR_17->write->ready) {
                VAR_15->log->action = VAR_10;

                VAR_12 = VAR_17->send(VAR_17, VAR_13->pos, VAR_11);

                if (VAR_12 == VAR_1) {
                    FUNC_6(VAR_18);
                    return;
                }

                if (VAR_12 > 0) {
                    VAR_13->pos += VAR_12;

                    if (VAR_13->pos == VAR_13->last) {
                        VAR_13->pos = VAR_13->start;
                        VAR_13->last = VAR_13->start;
                    }
                }
            }
        }

        VAR_11 = VAR_13->end - VAR_13->last;

        if (VAR_11 && VAR_16->read->ready) {
            VAR_15->log->action = VAR_9;

            VAR_12 = VAR_16->recv(VAR_16, VAR_13->last, VAR_11);

            if (VAR_12 == VAR_0 || VAR_12 == 0) {
                break;
            }

            if (VAR_12 > 0) {
                VAR_14 = 1;
                VAR_13->last += VAR_12;

                continue;
            }

            if (VAR_12 == VAR_1) {
                VAR_16->read->eof = 1;
            }
        }

        break;
    }

    VAR_15->log->action = "proxying";

    if ((VAR_18->connection->read->eof && VAR_18->buffer->pos == VAR_18->buffer->last)
        || (VAR_18->proxy->upstream.connection->read->eof
            && VAR_18->proxy->buffer->pos == VAR_18->proxy->buffer->last)
        || (VAR_18->connection->read->eof
            && VAR_18->proxy->upstream.connection->read->eof))
    {
        VAR_8 = VAR_15->log->action;
        VAR_15->log->action = ((void*)0);
        FUNC_4(VAR_4, VAR_15->log, 0, "proxied session done");
        VAR_15->log->action = VAR_8;

        FUNC_6(VAR_18);
        return;
    }

    if (FUNC_2(VAR_17->write, 0) != VAR_5) {
        FUNC_6(VAR_18);
        return;
    }

    if (FUNC_1(VAR_17->read, 0) != VAR_5) {
        FUNC_6(VAR_18);
        return;
    }

    if (FUNC_2(VAR_16->write, 0) != VAR_5) {
        FUNC_6(VAR_18);
        return;
    }

    if (FUNC_1(VAR_16->read, 0) != VAR_5) {
        FUNC_6(VAR_18);
        return;
    }

    if (VAR_15 == VAR_18->connection) {
        VAR_19 = FUNC_5(VAR_18, VAR_6);
        FUNC_0(VAR_15->read, VAR_19->timeout);
    }
}
