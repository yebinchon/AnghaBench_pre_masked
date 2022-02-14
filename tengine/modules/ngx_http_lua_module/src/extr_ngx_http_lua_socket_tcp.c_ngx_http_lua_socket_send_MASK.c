
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_27__ {int pool; TYPE_2__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_23__ {TYPE_8__* connection; } ;
struct TYPE_28__ {TYPE_4__* conf; int send_timeout; int write_event_handler; scalar_t__ raw_downstream; int socket_errno; TYPE_3__* request_bufs; TYPE_1__ peer; } ;
typedef TYPE_6__ ngx_http_lua_socket_tcp_upstream_t ;
struct TYPE_29__ {int writing_raw_req_socket; int busy_bufs; int free_bufs; } ;
typedef TYPE_7__ ngx_http_lua_ctx_t ;
struct TYPE_30__ {scalar_t__ (* send ) (TYPE_8__*,scalar_t__,scalar_t__) ;int error; TYPE_19__* write; int log; } ;
typedef TYPE_8__ ngx_connection_t ;
typedef int ngx_buf_tag_t ;
struct TYPE_31__ {scalar_t__ pos; scalar_t__ last; } ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_26__ {int send_lowat; } ;
struct TYPE_25__ {TYPE_9__* buf; } ;
struct TYPE_24__ {int log; } ;
struct TYPE_22__ {scalar_t__ timer_set; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_19__*,int ) ;
 int FUNC_1 (int ,int ,...) ;
 int FUNC_2 (TYPE_19__*) ;
 scalar_t__ FUNC_3 (TYPE_19__*,int ) ;
 TYPE_7__* FUNC_4 (TYPE_5__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_5__*,TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_6__*) ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_8__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_9,
    ngx_http_lua_socket_tcp_upstream_t *VAR_10)
{
    ngx_int_t VAR_11;
    ngx_connection_t *VAR_12;
    ngx_http_lua_ctx_t *VAR_13;
    ngx_buf_t *VAR_14;

    VAR_12 = VAR_10->peer.connection;

    FUNC_7(VAR_3, VAR_9->connection->log, 0,
                   "lua tcp socket send data");

    VAR_13 = FUNC_4(VAR_9, VAR_5);
    if (VAR_13 == ((void*)0)) {
        FUNC_5(VAR_9, VAR_10,
                                               VAR_2);
        return VAR_1;
    }

    VAR_14 = VAR_10->request_bufs->buf;

    for (;;) {
        VAR_11 = VAR_12->send(VAR_12, VAR_14->pos, VAR_14->last - VAR_14->pos);

        if (VAR_11 >= 0) {
            VAR_14->pos += VAR_11;

            if (VAR_14->pos == VAR_14->last) {
                FUNC_7(VAR_3, VAR_12->log, 0,
                               "lua tcp socket sent all the data");

                if (VAR_12->write->timer_set) {
                    FUNC_2(VAR_12->write);
                }





                FUNC_1(

                                        VAR_13->free_bufs, VAR_13->busy_bufs,
                                        &VAR_10->request_bufs,
                                        (ngx_buf_tag_t) &VAR_5);

                VAR_10->write_event_handler = VAR_6;

                if (FUNC_3(VAR_12->write, 0) != VAR_4) {
                    FUNC_5(VAR_9, VAR_10,
                                                VAR_2);
                    return VAR_1;
                }

                FUNC_6(VAR_9, VAR_10);
                return VAR_4;
            }


            continue;
        }


        break;
    }

    if (VAR_11 == VAR_1) {
        VAR_12->error = 1;
        VAR_10->socket_errno = VAR_8;
        FUNC_5(VAR_9, VAR_10,
                                               VAR_2);
        return VAR_1;
    }



    if (VAR_10->raw_downstream) {
        VAR_13->writing_raw_req_socket = 1;
    }

    VAR_10->write_event_handler = VAR_7;

    FUNC_0(VAR_12->write, VAR_10->send_timeout);

    if (FUNC_3(VAR_12->write, VAR_10->conf->send_lowat) != VAR_4) {
        FUNC_5(VAR_9, VAR_10,
                                               VAR_2);
        return VAR_1;
    }

    return VAR_0;
}
