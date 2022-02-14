
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int ngx_uint_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {scalar_t__ recv_window; TYPE_12__* request; scalar_t__ frames; int * pool; TYPE_4__* node; int in_closed; int out_closed; int rst_sent; int queued; TYPE_5__* connection; } ;
typedef TYPE_3__ ngx_http_v2_stream_t ;
struct TYPE_19__ {int id; int reuse; int * stream; } ;
typedef TYPE_4__ ngx_http_v2_node_t ;
struct TYPE_16__ {scalar_t__ keep_pool; int * pool; TYPE_3__* stream; } ;
struct TYPE_20__ {TYPE_2__* connection; scalar_t__ blocked; scalar_t__ pushing; scalar_t__ processing; TYPE_7__* free_fake_connections; TYPE_1__ state; int frames; int closed_nodes; int closed; } ;
typedef TYPE_5__ ngx_http_v2_connection_t ;
struct TYPE_21__ {int handler; scalar_t__ posted; scalar_t__ timer_set; } ;
typedef TYPE_6__ ngx_event_t ;
struct TYPE_22__ {struct TYPE_22__* data; TYPE_6__* write; TYPE_6__* read; scalar_t__ timedout; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_17__ {int error; TYPE_6__* read; int log; } ;
struct TYPE_15__ {TYPE_7__* connection; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_12__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (TYPE_5__*,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*,int,scalar_t__) ;
 int FUNC_6 (int ,int ,int ,char*,int,int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_6__*,int *) ;
 int VAR_9 ;
 int FUNC_8 (int *,int *) ;

void
FUNC_9(ngx_http_v2_stream_t *VAR_10, ngx_int_t VAR_11)
{
    ngx_pool_t *VAR_12;
    ngx_uint_t VAR_13;
    ngx_event_t *VAR_14;
    ngx_connection_t *VAR_15;
    ngx_http_v2_node_t *VAR_16;
    ngx_http_v2_connection_t *VAR_17;

    VAR_17 = VAR_10->connection;
    VAR_16 = VAR_10->node;

    FUNC_6(VAR_4, VAR_17->connection->log, 0,
                   "http2 close stream %ui, queued %ui, "
                   "processing %ui, pushing %ui",
                   VAR_16->id, VAR_10->queued, VAR_17->processing, VAR_17->pushing);

    VAR_15 = VAR_10->request->connection;

    if (VAR_10->queued) {
        VAR_15->write->handler = VAR_7;
        VAR_15->read->handler = VAR_6;
        return;
    }

    if (!VAR_10->rst_sent && !VAR_17->connection->error) {

        if (!VAR_10->out_closed) {
            if (FUNC_4(VAR_17, VAR_16->id,
                                      VAR_15->timedout ? VAR_3
                                                   : VAR_0)
                != VAR_5)
            {
                VAR_17->connection->error = 1;
            }

        } else if (!VAR_10->in_closed) {
            if (VAR_10->recv_window < VAR_1
                && FUNC_5(VAR_17, VAR_16->id,
                                                  VAR_1
                                                  - VAR_10->recv_window)
                   != VAR_5)
            {
                VAR_17->connection->error = 1;
            }

        }
    }

    if (VAR_17->state.stream == VAR_10) {
        VAR_17->state.stream = ((void*)0);
    }

    VAR_13 = VAR_10->node->id % 2 == 0;

    VAR_16->stream = ((void*)0);

    FUNC_8(&VAR_17->closed, &VAR_16->reuse);
    VAR_17->closed_nodes++;
    VAR_12 = VAR_10->pool;

    VAR_17->frames -= VAR_10->frames;

    FUNC_3(VAR_10->request, VAR_11);

    if (VAR_12 != VAR_17->state.pool) {
        FUNC_2(VAR_12);

    } else {

        VAR_17->state.keep_pool = 0;
    }

    VAR_14 = VAR_15->read;

    if (VAR_14->timer_set) {
        FUNC_0(VAR_14);
    }

    if (VAR_14->posted) {
        FUNC_1(VAR_14);
    }

    VAR_14 = VAR_15->write;

    if (VAR_14->timer_set) {
        FUNC_0(VAR_14);
    }

    if (VAR_14->posted) {
        FUNC_1(VAR_14);
    }

    VAR_15->data = VAR_17->free_fake_connections;
    VAR_17->free_fake_connections = VAR_15;

    if (VAR_13) {
        VAR_17->pushing--;

    } else {
        VAR_17->processing--;
    }

    if (VAR_17->processing || VAR_17->pushing || VAR_17->blocked) {
        return;
    }

    VAR_14 = VAR_17->connection->read;

    VAR_14->handler = VAR_8;
    FUNC_7(VAR_14, &VAR_9);
}
