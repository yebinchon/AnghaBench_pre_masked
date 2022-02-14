
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_14__ {TYPE_6__* connection; } ;
struct TYPE_16__ {int requests; int responses; int received; TYPE_1__ peer; scalar_t__ connected; } ;
typedef TYPE_3__ ngx_stream_upstream_t ;
struct TYPE_17__ {int received; TYPE_3__* upstream; TYPE_6__* connection; } ;
typedef TYPE_4__ ngx_stream_session_t ;
struct TYPE_18__ {int requests; int responses; } ;
typedef TYPE_5__ ngx_stream_proxy_srv_conf_t ;
typedef void* ngx_log_handler_pt ;
typedef int ngx_int_t ;
struct TYPE_19__ {scalar_t__ type; TYPE_11__* log; int sent; scalar_t__ buffered; TYPE_2__* read; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_15__ {int eof; } ;
struct TYPE_13__ {int * handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int ,TYPE_11__*,int ,char*,...) ;
 TYPE_5__* FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int VAR_6 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_stream_session_t *VAR_7,
    ngx_uint_t VAR_8)
{
    ngx_connection_t *VAR_9, *VAR_10;
    ngx_log_handler_pt VAR_11;
    ngx_stream_upstream_t *VAR_12;
    ngx_stream_proxy_srv_conf_t *VAR_13;

    VAR_13 = FUNC_2(VAR_7, VAR_6);

    VAR_9 = VAR_7->connection;
    VAR_12 = VAR_7->upstream;
    VAR_10 = VAR_12->connected ? VAR_12->peer.connection : ((void*)0);

    if (VAR_9->type == VAR_5) {

        if (VAR_13->requests && VAR_12->requests < VAR_13->requests) {
            return VAR_0;
        }

        if (VAR_13->requests) {
            FUNC_0(VAR_9);
        }

        if (VAR_13->responses == VAR_2
            || VAR_12->responses < VAR_13->responses * VAR_12->requests)
        {
            return VAR_0;
        }

        if (VAR_10 == ((void*)0) || VAR_9->buffered || VAR_10->buffered) {
            return VAR_0;
        }

        VAR_11 = VAR_9->log->handler;
        VAR_9->log->handler = ((void*)0);

        FUNC_1(VAR_1, VAR_9->log, 0,
                      "udp done"
                      ", packets from/to client:%ui/%ui"
                      ", bytes from/to client:%O/%O"
                      ", bytes from/to upstream:%O/%O",
                      VAR_12->requests, VAR_12->responses,
                      VAR_7->received, VAR_9->sent, VAR_12->received, VAR_10 ? VAR_10->sent : 0);

        VAR_9->log->handler = VAR_11;

        FUNC_3(VAR_7, VAR_4);

        return VAR_3;
    }



    if (VAR_10 == ((void*)0)
        || (!VAR_9->read->eof && !VAR_10->read->eof)
        || (!VAR_9->read->eof && VAR_9->buffered)
        || (!VAR_10->read->eof && VAR_10->buffered))
    {
        return VAR_0;
    }

    VAR_11 = VAR_9->log->handler;
    VAR_9->log->handler = ((void*)0);

    FUNC_1(VAR_1, VAR_9->log, 0,
                  "%s disconnected"
                  ", bytes from/to client:%O/%O"
                  ", bytes from/to upstream:%O/%O",
                  VAR_8 ? "upstream" : "client",
                  VAR_7->received, VAR_9->sent, VAR_12->received, VAR_10 ? VAR_10->sent : 0);

    VAR_9->log->handler = VAR_11;

    FUNC_3(VAR_7, VAR_4);

    return VAR_3;
}
