
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ tries; scalar_t__ start_time; TYPE_7__* connection; int * sockaddr; int data; int (* free ) (TYPE_8__*,int ,int ) ;} ;
struct TYPE_19__ {TYPE_8__ peer; TYPE_3__* state; int received; int * upstream_out; } ;
typedef TYPE_4__ ngx_stream_upstream_t ;
struct TYPE_20__ {TYPE_1__* connection; TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_stream_session_t ;
struct TYPE_21__ {scalar_t__ next_upstream_timeout; int next_upstream; } ;
typedef TYPE_6__ ngx_stream_proxy_srv_conf_t ;
typedef scalar_t__ ngx_msec_t ;
struct TYPE_22__ {int sent; TYPE_2__* ssl; int fd; scalar_t__ buffered; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_18__ {int bytes_sent; int bytes_received; } ;
struct TYPE_17__ {int no_wait_shutdown; int no_send_shutdown; } ;
struct TYPE_16__ {scalar_t__ type; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_7__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (TYPE_7__*) ;
 TYPE_6__* FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_8__*,int ,int ) ;

__attribute__((used)) static void
FUNC_9(ngx_stream_session_t *VAR_8)
{
    ngx_msec_t VAR_9;
    ngx_connection_t *VAR_10;
    ngx_stream_upstream_t *VAR_11;
    ngx_stream_proxy_srv_conf_t *VAR_12;

    FUNC_1(VAR_0, VAR_8->connection->log, 0,
                   "stream proxy next upstream");

    VAR_11 = VAR_8->upstream;
    VAR_10 = VAR_11->peer.connection;

    if (VAR_10 && VAR_10->buffered) {
        FUNC_3(VAR_1, VAR_8->connection->log, 0,
                      "buffered data on next upstream");
        FUNC_7(VAR_8, VAR_4);
        return;
    }

    if (VAR_8->connection->type == VAR_5) {
        VAR_11->upstream_out = ((void*)0);
    }

    if (VAR_11->peer.sockaddr) {
        VAR_11->peer.free(&VAR_11->peer, VAR_11->peer.data, VAR_2);
        VAR_11->peer.sockaddr = ((void*)0);
    }

    VAR_12 = FUNC_5(VAR_8, VAR_7);

    VAR_9 = VAR_12->next_upstream_timeout;

    if (VAR_11->peer.tries == 0
        || !VAR_12->next_upstream
        || (VAR_9 && VAR_6 - VAR_11->peer.start_time >= VAR_9))
    {
        FUNC_7(VAR_8, VAR_3);
        return;
    }

    if (VAR_10) {
        FUNC_2(VAR_0, VAR_8->connection->log, 0,
                       "close proxy upstream connection: %d", VAR_10->fd);
        VAR_11->state->bytes_received = VAR_11->received;
        VAR_11->state->bytes_sent = VAR_10->sent;

        FUNC_0(VAR_10);
        VAR_11->peer.connection = ((void*)0);
    }

    FUNC_6(VAR_8);
}
