
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


typedef int ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {int * connection; } ;
struct TYPE_20__ {int request_sent; int request_body_blocked; TYPE_4__* conf; int store; int output; TYPE_2__ peer; TYPE_8__* request_bufs; scalar_t__ multi; } ;
typedef TYPE_5__ ngx_http_upstream_t ;
struct TYPE_21__ {int read_event_handler; int post_action; scalar_t__ reading_body; TYPE_3__* request_body; int pool; int request_body_no_buffering; TYPE_1__* connection; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_22__ {scalar_t__ tcp_nodelay; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;
typedef int ngx_connection_t ;
struct TYPE_23__ {struct TYPE_23__* next; } ;
typedef TYPE_8__ ngx_chain_t ;
struct TYPE_19__ {int ignore_client_abort; } ;
struct TYPE_18__ {TYPE_8__* bufs; } ;
struct TYPE_16__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,TYPE_8__*) ;
 int VAR_5 ;
 TYPE_7__* FUNC_1 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_8__*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_http_request_t *VAR_8,
    ngx_http_upstream_t *VAR_9, ngx_uint_t VAR_10)
{
    ngx_int_t VAR_11;
    ngx_chain_t *VAR_12, *VAR_13, *VAR_14;
    ngx_connection_t *VAR_15;
    ngx_http_core_loc_conf_t *VAR_16;

    FUNC_3(VAR_3, VAR_8->connection->log, 0,
                   "http upstream send request body");

    if (!VAR_8->request_body_no_buffering) {



        if (!VAR_9->request_sent) {
            VAR_9->request_sent = 1;
            VAR_12 = VAR_9->request_bufs;

        } else {
            VAR_12 = ((void*)0);
        }

        VAR_11 = FUNC_5(&VAR_9->output, VAR_12);

        if (VAR_11 == VAR_0) {
            VAR_9->request_body_blocked = 1;

        } else {





            VAR_9->request_body_blocked = 0;
        }

        return VAR_11;
    }

    if (!VAR_9->request_sent) {
        VAR_9->request_sent = 1;
        VAR_12 = VAR_9->request_bufs;

        if (VAR_8->request_body->bufs) {
            for (VAR_13 = VAR_12; VAR_13->next; VAR_13 = VAR_13->next) { }
            VAR_13->next = VAR_8->request_body->bufs;
            VAR_8->request_body->bufs = ((void*)0);
        }

        VAR_15 = VAR_9->peer.connection;
        VAR_16 = FUNC_1(VAR_8, VAR_5);

        if (VAR_16->tcp_nodelay && FUNC_6(VAR_15) != VAR_4) {
            return VAR_1;
        }

        VAR_8->read_event_handler = VAR_7;

    } else {
        VAR_12 = ((void*)0);
    }

    for ( ;; ) {

        if (VAR_10) {
            VAR_11 = FUNC_5(&VAR_9->output, VAR_12);

            if (VAR_11 == VAR_1) {
                return VAR_1;
            }

            while (VAR_12) {
                VAR_14 = VAR_12;
                VAR_12 = VAR_12->next;
                FUNC_0(VAR_8->pool, VAR_14);
            }

            if (VAR_11 == VAR_0) {
                VAR_9->request_body_blocked = 1;

            } else {
                VAR_9->request_body_blocked = 0;
            }

            if (VAR_11 == VAR_4 && !VAR_8->reading_body) {
                break;
            }
        }

        if (VAR_8->reading_body) {


            VAR_11 = FUNC_2(VAR_8);

            if (VAR_11 >= VAR_2) {
                return VAR_11;
            }

            VAR_12 = VAR_8->request_body->bufs;
            VAR_8->request_body->bufs = ((void*)0);
        }



        if (VAR_12 == ((void*)0)) {
            VAR_11 = VAR_0;
            break;
        }

        VAR_10 = 1;
    }

    if (!VAR_8->reading_body) {
        if (!VAR_9->store && !VAR_8->post_action && !VAR_9->conf->ignore_client_abort) {
            VAR_8->read_event_handler =
                                  VAR_6;
        }
    }

    return VAR_11;
}
