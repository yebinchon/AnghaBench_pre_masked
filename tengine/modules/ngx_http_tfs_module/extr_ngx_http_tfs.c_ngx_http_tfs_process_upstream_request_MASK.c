
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_21__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_29__ {scalar_t__ parse_state; scalar_t__ (* process_request_body ) (TYPE_5__*) ;TYPE_3__* main_conf; TYPE_8__* recv_chain; int request_sent; TYPE_6__* tfs_peer; } ;
typedef TYPE_5__ ngx_http_tfs_t ;
struct TYPE_28__ {int last; } ;
struct TYPE_24__ {int name; TYPE_7__* connection; } ;
struct TYPE_30__ {TYPE_4__ body_buffer; int peer_addr_text; TYPE_1__ peer; } ;
typedef TYPE_6__ ngx_http_tfs_peer_connection_t ;
typedef int ngx_http_request_t ;
struct TYPE_31__ {scalar_t__ (* recv_chain ) (TYPE_7__*,TYPE_8__*,int ) ;int log; TYPE_21__* read; } ;
typedef TYPE_7__ ngx_connection_t ;
struct TYPE_32__ {TYPE_2__* buf; struct TYPE_32__* next; } ;
typedef TYPE_8__ ngx_chain_t ;
struct TYPE_27__ {int tfs_read_timeout; } ;
struct TYPE_26__ {scalar_t__ last; scalar_t__ end; } ;
struct TYPE_25__ {scalar_t__ timer_set; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_21__*,int ) ;
 int FUNC_1 (TYPE_21__*) ;
 scalar_t__ FUNC_2 (TYPE_21__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,scalar_t__) ;
 int FUNC_6 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_7 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_11 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_12 (TYPE_7__*,TYPE_8__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_14(ngx_http_request_t *VAR_9, ngx_http_tfs_t *VAR_10)
{
    ngx_int_t VAR_11, VAR_12;
    ngx_chain_t *VAR_13;
    ngx_connection_t *VAR_14;
    ngx_http_tfs_peer_connection_t *VAR_15;

    VAR_15 = VAR_10->tfs_peer;
    VAR_14 = VAR_15->peer.connection;

    FUNC_10(VAR_6, VAR_14->log, 0,
                   "http tfs process request body for %V, addr: %s",
                   VAR_15->peer.name,
                   VAR_15->peer_addr_text);







    if (!VAR_10->request_sent && FUNC_9(VAR_14) != VAR_8) {
        FUNC_6(VAR_10, VAR_15);
        return;
    }

    VAR_12 = FUNC_3(VAR_10);
    if (VAR_12 == VAR_2) {
        FUNC_11(VAR_7, VAR_14->log, 0,
                      "tfs alloc buf failed");
        FUNC_4(VAR_9, VAR_10, VAR_3);
        return;
    }

    if (VAR_14->read->timer_set) {
        FUNC_1(VAR_14->read);
    }

    for ( ;; ) {

        for (VAR_13 = VAR_10->recv_chain; VAR_13; VAR_13 = VAR_13->next) {
            if (VAR_13->buf->last != VAR_13->buf->end) {
                break;
            }
        }

        if (VAR_13 == ((void*)0)) {

            FUNC_7(VAR_9, VAR_10);
            return;
        }

        VAR_11 = VAR_14->recv_chain(VAR_14, VAR_13, 0);

        if (VAR_11 == VAR_0) {
            if (VAR_13->buf->last == VAR_13->buf->end) {
                FUNC_7(VAR_9, VAR_10);
                return;
            }

            FUNC_0(VAR_14->read, VAR_10->main_conf->tfs_read_timeout);
            if (FUNC_2(VAR_14->read, 0) != VAR_8) {
                FUNC_11(VAR_7, VAR_14->log, 0,
                              "tfs handle read event failed");
                FUNC_4(VAR_9, VAR_10,
                                              VAR_3);
                return;
            }

            return;
        }

        if (VAR_11 == 0) {
            FUNC_11(VAR_7, VAR_14->log, 0,
                          "tfs prematurely closed connection");
        }

        if (VAR_11 == VAR_2 || VAR_11 == 0) {
            FUNC_11(VAR_7, VAR_14->log, 0, "recv chain error");
            FUNC_4(VAR_9, VAR_10, VAR_3);

            return;
        }

        if (VAR_10->parse_state == VAR_5) {
            VAR_12 = FUNC_8(VAR_10, VAR_11);

            if (VAR_12 == VAR_0) {
                continue;
            }

            if (VAR_12 < 0 || VAR_12 == VAR_1) {
                break;
            }

            VAR_10->parse_state = VAR_4;

        } else {
            VAR_15->body_buffer.last += VAR_11;
        }

        VAR_12 = VAR_10->process_request_body(VAR_10);

        if (VAR_12 == VAR_0) {
            continue;
        }

        break;
    }


    FUNC_5(VAR_10, VAR_12);
}
