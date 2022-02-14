
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
struct TYPE_19__ {int write_event_handler; TYPE_2__* connection; int read_event_handler; int pool; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_20__ {int read_waiting; int (* read_prepare_retvals ) (TYPE_3__*,TYPE_4__*,int *) ;scalar_t__ body_downstream; scalar_t__ raw_downstream; struct TYPE_20__* read_co_ctx; struct TYPE_20__* data; int cleanup; int read_event_handler; scalar_t__ ft_type; int read_timeout; struct TYPE_20__* bufs_in; struct TYPE_20__* buf_in; int * buf; int buffer; TYPE_1__* conf; struct TYPE_20__* input_filter_ctx; } ;
typedef TYPE_4__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_21__ {TYPE_4__* downstream; scalar_t__ entered_content_phase; TYPE_4__* cur_co_ctx; int free_recv_bufs; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
typedef TYPE_4__ ngx_http_lua_co_ctx_t ;
typedef int lua_State ;
struct TYPE_18__ {int log; } ;
struct TYPE_17__ {int buffer_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 TYPE_5__* FUNC_3 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*,int *) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 int FUNC_9 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_10(ngx_http_request_t *VAR_9,
    ngx_http_lua_socket_tcp_upstream_t *VAR_10, lua_State *VAR_11)
{
    ngx_int_t VAR_12;
    ngx_http_lua_ctx_t *VAR_13;
    ngx_http_lua_co_ctx_t *VAR_14;

    VAR_10->input_filter_ctx = VAR_10;

    VAR_13 = FUNC_3(VAR_9, VAR_6);

    if (VAR_10->bufs_in == ((void*)0)) {
        VAR_10->bufs_in =
            FUNC_4(VAR_9->connection->log, VAR_9->pool,
                                            &VAR_13->free_recv_bufs,
                                            VAR_10->conf->buffer_size);

        if (VAR_10->bufs_in == ((void*)0)) {
            return FUNC_1(VAR_11, "no memory");
        }

        VAR_10->buf_in = VAR_10->bufs_in;
        VAR_10->buffer = *VAR_10->buf_in->buf;
    }

    FUNC_0("tcp receive: buf_in: %p, bufs_in: %p", VAR_10->buf_in, VAR_10->bufs_in);

    FUNC_9(VAR_1, VAR_9->connection->log, 0,
                   "lua tcp socket read timeout: %M", VAR_10->read_timeout);

    if (VAR_10->raw_downstream || VAR_10->body_downstream) {
        VAR_9->read_event_handler = VAR_7;
    }

    VAR_10->read_waiting = 0;
    VAR_10->read_co_ctx = ((void*)0);

    VAR_12 = FUNC_6(VAR_9, VAR_10);

    if (VAR_12 == VAR_0) {
        FUNC_0("read failed: %d", (int) VAR_10->ft_type);
        VAR_12 = FUNC_7(VAR_9, VAR_10, VAR_11);
        FUNC_0("tcp receive retval returned: %d", (int) VAR_12);
        return VAR_12;
    }

    if (VAR_12 == VAR_2) {

        FUNC_8(VAR_1, VAR_9->connection->log, 0,
                       "lua tcp socket receive done in a single run");

        return FUNC_7(VAR_9, VAR_10, VAR_11);
    }



    VAR_10->read_event_handler = VAR_8;

    VAR_14 = VAR_13->cur_co_ctx;

    FUNC_5(VAR_14);
    VAR_14->cleanup = VAR_4;
    VAR_14->data = VAR_10;

    if (VAR_13->entered_content_phase) {
        VAR_9->write_event_handler = VAR_5;

    } else {
        VAR_9->write_event_handler = VAR_3;
    }

    VAR_10->read_co_ctx = VAR_14;
    VAR_10->read_waiting = 1;
    VAR_10->read_prepare_retvals = FUNC_7;

    FUNC_0("setting data to %p, coctx:%p", VAR_10, VAR_14);

    if (VAR_10->raw_downstream || VAR_10->body_downstream) {
        VAR_13->downstream = VAR_10;
    }

    return FUNC_2(VAR_11, 0);
}
