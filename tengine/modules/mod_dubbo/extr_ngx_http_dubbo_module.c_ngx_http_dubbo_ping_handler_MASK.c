
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int u_char ;
struct TYPE_27__ {int id; TYPE_10__* out; } ;
typedef TYPE_3__ ngx_multi_request_t ;
struct TYPE_26__ {TYPE_1__* connection; } ;
struct TYPE_28__ {TYPE_2__ peer; } ;
typedef TYPE_4__ ngx_http_upstream_t ;
struct TYPE_29__ {int pool; TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_30__ {int free; TYPE_10__* out; TYPE_8__* connection; } ;
typedef TYPE_6__ ngx_http_dubbo_ctx_t ;
struct TYPE_31__ {TYPE_9__* data; } ;
typedef TYPE_7__ ngx_event_t ;
struct TYPE_32__ {int log; } ;
typedef TYPE_8__ ngx_dubbo_connection_t ;
struct TYPE_33__ {TYPE_5__* data; } ;
typedef TYPE_9__ ngx_connection_t ;
struct TYPE_23__ {struct TYPE_23__* next; TYPE_11__* buf; } ;
typedef TYPE_10__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_24__ {int last_shadow; scalar_t__ last_in_chain; scalar_t__ last_buf; struct TYPE_24__* shadow; scalar_t__ tag; int * start; } ;
typedef TYPE_11__ ngx_buf_t ;
struct TYPE_25__ {int write; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_10__* FUNC_0 (int ,int *) ;
 TYPE_3__* FUNC_1 (TYPE_9__*,TYPE_5__*) ;
 scalar_t__ FUNC_2 (TYPE_8__*,TYPE_3__*) ;
 int VAR_3 ;
 TYPE_6__* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,int ,int ,char*,...) ;
 int FUNC_5 (TYPE_11__*,TYPE_11__*,int) ;
 int FUNC_6 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7(ngx_event_t *VAR_5)
{
    ngx_connection_t *VAR_6;
    ngx_http_request_t *VAR_7;
    ngx_http_upstream_t *VAR_8;
    ngx_multi_request_t *VAR_9;
    ngx_dubbo_connection_t *VAR_10;
    ngx_http_dubbo_ctx_t *VAR_11;
    u_char *VAR_12;
    ngx_chain_t *VAR_13, *VAR_14, **VAR_15;
    ngx_buf_t *VAR_16;

    VAR_6 = VAR_5->data;
    VAR_7 = VAR_6->data;
    VAR_8 = VAR_7->upstream;

    VAR_11 = FUNC_3(VAR_7);
    VAR_10 = VAR_11->connection;

    VAR_9 = FUNC_1(VAR_6, VAR_7);
    if (VAR_9 == ((void*)0)) {
        return;
    }

    if (VAR_0 == FUNC_2(VAR_10, VAR_9)) {
        FUNC_4(VAR_1, VAR_10->log, 0,
                      "dubbo: encode ping request failed");
        return;
    }

    for (VAR_13 = VAR_11->out, VAR_15 = &VAR_11->out; VAR_13; VAR_13 = VAR_13->next) {
        VAR_15 = &VAR_13->next;
    }

    for (VAR_13 = VAR_9->out; VAR_13; VAR_13 = VAR_13->next) {
        VAR_14 = FUNC_0(VAR_7->pool, &VAR_11->free);
        if (VAR_14 == ((void*)0)) {
            return;
        }

        VAR_16 = VAR_14->buf;
        VAR_12 = VAR_16->start;

        FUNC_5(VAR_16, VAR_13->buf, sizeof(ngx_buf_t));






        VAR_16->start = VAR_12;

        VAR_16->tag = (ngx_buf_tag_t) &VAR_3;
        VAR_16->shadow = VAR_13->buf;
        VAR_16->last_shadow = 1;

        VAR_16->last_buf = 0;
        VAR_16->last_in_chain = 0;

        *VAR_15 = VAR_14;
        VAR_15 = &VAR_14->next;
    }

    FUNC_6(VAR_8->peer.connection->write, &VAR_4);
    FUNC_4(VAR_2, VAR_10->log, 0,
                  "dubbo: send ping request [%ul] frame to backend", VAR_9->id);
    return;
}
