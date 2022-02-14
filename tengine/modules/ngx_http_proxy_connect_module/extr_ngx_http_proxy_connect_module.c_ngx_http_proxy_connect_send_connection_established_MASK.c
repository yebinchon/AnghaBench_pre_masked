
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_20__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_23__ {int status; } ;
struct TYPE_27__ {int write_event_handler; int (* read_event_handler ) (TYPE_4__*) ;TYPE_2__* header_in; TYPE_1__ headers_out; TYPE_8__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_28__ {int connected; } ;
typedef TYPE_5__ ngx_http_proxy_connect_upstream_t ;
struct TYPE_32__ {scalar_t__ pos; scalar_t__ last; } ;
struct TYPE_29__ {int send_established; int send_established_done; int send_timeout; TYPE_9__ buf; TYPE_5__* u; } ;
typedef TYPE_6__ ngx_http_proxy_connect_ctx_t ;
struct TYPE_30__ {int send_lowat; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;
struct TYPE_31__ {scalar_t__ (* send ) (TYPE_8__*,scalar_t__,scalar_t__) ;TYPE_20__* write; TYPE_3__* read; int log; } ;
typedef TYPE_8__ ngx_connection_t ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_26__ {scalar_t__ ready; } ;
struct TYPE_25__ {scalar_t__ last; scalar_t__ pos; } ;
struct TYPE_24__ {scalar_t__ timer_set; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_20__*,int ) ;
 int FUNC_1 (TYPE_20__*) ;
 scalar_t__ FUNC_2 (TYPE_20__*,int ) ;
 int VAR_4 ;
 TYPE_6__* FUNC_3 (TYPE_4__*,int ) ;
 TYPE_7__* FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,scalar_t__) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_8 (TYPE_8__*,scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_10(ngx_http_request_t *VAR_8)
{
    ngx_int_t VAR_9;
    ngx_buf_t *VAR_10;
    ngx_connection_t *VAR_11;
    ngx_http_core_loc_conf_t *VAR_12;
    ngx_http_proxy_connect_upstream_t *VAR_13;
    ngx_http_proxy_connect_ctx_t *VAR_14;

    VAR_14 = FUNC_3(VAR_8, VAR_5);
    VAR_11 = VAR_8->connection;

    FUNC_7(VAR_2, VAR_8->connection->log, 0,
                   "proxy_connect: send 200 connection established");

    VAR_12 = FUNC_4(VAR_8, VAR_4);

    VAR_13 = VAR_14->u;

    VAR_10 = &VAR_14->buf;

    VAR_14->send_established = 1;
    VAR_13->connected = 1;

    for (;;) {
        VAR_9 = VAR_11->send(VAR_11, VAR_10->pos, VAR_10->last - VAR_10->pos);

        if (VAR_9 >= 0) {

            VAR_8->headers_out.status = 200;

            VAR_10->pos += VAR_9;

            if (VAR_10->pos == VAR_10->last) {
                FUNC_7(VAR_2, VAR_11->log, 0,
                              "proxy_connect: sent 200 connection established");

                if (VAR_11->write->timer_set) {
                    FUNC_1(VAR_11->write);
                }

                VAR_14->send_established_done = 1;

                VAR_8->write_event_handler =
                                        VAR_7;
                VAR_8->read_event_handler = FUNC_6;

                if (FUNC_2(VAR_11->write, VAR_12->send_lowat)
                    != VAR_3)
                {
                    FUNC_5(VAR_8, VAR_13,
                                                VAR_1);
                    return;
                }

                if (VAR_8->header_in->last > VAR_8->header_in->pos || VAR_11->read->ready) {
                    VAR_8->read_event_handler(VAR_8);
                    return;
                }

                return;
            }


            continue;
        }


        break;
    }

    if (VAR_9 == VAR_0) {
        FUNC_5(VAR_8, VAR_13, VAR_0);
        return;
    }


    VAR_8->write_event_handler = VAR_6;

    FUNC_0(VAR_11->write, VAR_14->send_timeout);

    if (FUNC_2(VAR_11->write, VAR_12->send_lowat) != VAR_3) {
        FUNC_5(VAR_8, VAR_13,
                                                VAR_1);
        return;
    }

    return;
}
