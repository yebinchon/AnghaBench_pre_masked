
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_12__ ;
typedef struct TYPE_32__ TYPE_11__ ;
typedef struct TYPE_31__ TYPE_10__ ;


typedef int u_char ;
typedef int ngx_queue_t ;
struct TYPE_37__ {int front_queue; int backend_queue; TYPE_11__* out; } ;
typedef TYPE_4__ ngx_multi_request_t ;
struct TYPE_38__ {int send_list; } ;
typedef TYPE_5__ ngx_multi_connection_t ;
typedef int ngx_int_t ;
struct TYPE_39__ {int pool; TYPE_3__* upstream; int * backend_r; TYPE_2__* connection; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_40__ {int heartbeat_interval; } ;
typedef TYPE_7__ ngx_http_dubbo_loc_conf_t ;
struct TYPE_41__ {TYPE_11__* free; int busy; TYPE_11__* out; TYPE_9__* connection; } ;
typedef TYPE_8__ ngx_http_dubbo_ctx_t ;
struct TYPE_42__ {int ping_event; } ;
typedef TYPE_9__ ngx_dubbo_connection_t ;
struct TYPE_31__ {int log; TYPE_6__* data; } ;
typedef TYPE_10__ ngx_connection_t ;
struct TYPE_32__ {TYPE_12__* buf; struct TYPE_32__* next; } ;
typedef TYPE_11__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_33__ {int last_shadow; struct TYPE_33__* shadow; int last; int pos; scalar_t__ last_in_chain; scalar_t__ last_buf; scalar_t__ tag; int * start; } ;
typedef TYPE_12__ ngx_buf_t ;
struct TYPE_34__ {TYPE_10__* connection; } ;
struct TYPE_36__ {int writer; int multi; TYPE_1__ peer; } ;
struct TYPE_35__ {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 TYPE_11__* FUNC_1 (int ,TYPE_11__**) ;
 int FUNC_2 (int ,TYPE_11__**,int *,TYPE_11__**,scalar_t__) ;
 int FUNC_3 (int *,TYPE_11__*) ;
 TYPE_5__* FUNC_4 (TYPE_10__*) ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_10__*,TYPE_4__**,TYPE_11__*) ;
 TYPE_8__* FUNC_6 (TYPE_6__*) ;
 int VAR_4 ;
 TYPE_7__* FUNC_7 (TYPE_6__*,int ) ;
 int FUNC_8 (int ,int ,int ,char*,...) ;
 int FUNC_9 (TYPE_12__*,TYPE_12__*,int) ;
 int * FUNC_10 (int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_14(void *VAR_5, ngx_chain_t *VAR_6)
{
    ngx_http_request_t *VAR_7 = VAR_5;
    ngx_connection_t *VAR_8 = VAR_7->upstream->peer.connection;
    ngx_http_request_t *VAR_9 = VAR_8->data;
    ngx_chain_t *VAR_10, *VAR_11, **VAR_12, *VAR_13;
    ngx_multi_request_t *VAR_14;
    ngx_buf_t *VAR_15;
    u_char *VAR_16;
    ngx_int_t VAR_17;
    ngx_multi_connection_t *VAR_18;
    ngx_dubbo_connection_t *VAR_19;
    ngx_http_dubbo_loc_conf_t *VAR_20;

    ngx_http_dubbo_ctx_t *VAR_21 = FUNC_6(VAR_9);

    if (!VAR_7->upstream->multi) {
        FUNC_8(VAR_2, VAR_8->log, 0, "dubbo: only support upstream multi module");
        return VAR_1;
    }

    VAR_18 = FUNC_4(VAR_8);
    VAR_19 = VAR_21->connection;

    VAR_20 = FUNC_7(VAR_7, VAR_4);

    if (VAR_7 == VAR_9 && VAR_6 != ((void*)0)) {
        FUNC_8(VAR_2, VAR_8->log, 0, "dubbo: body output failed %p, %p", VAR_8, VAR_7);

        return VAR_0;
    }

    VAR_10 = ((void*)0);
    VAR_12 = &VAR_10;

    if (VAR_21->out) {

        *VAR_12 = VAR_21->out;

        for (VAR_11 = VAR_21->out, VAR_12 = &VAR_11->next; VAR_11; VAR_11 = VAR_11->next) {
            VAR_12 = &VAR_11->next;
        }

        VAR_21->out = ((void*)0);
    }

    if (VAR_7 != VAR_9) {

        if (VAR_3 != FUNC_5(VAR_7, VAR_8, &VAR_14, VAR_6)) {
            FUNC_8(VAR_2, VAR_8->log, 0, "dubbo: http create request failed %p, %p", VAR_8, VAR_7);
            return VAR_0;
        }

        for (VAR_11 = VAR_14->out; VAR_11; VAR_11 = VAR_11->next) {
            VAR_13 = FUNC_1(VAR_9->pool, &VAR_21->free);
            if (VAR_13 == ((void*)0)) {
                return VAR_0;
            }

            VAR_15 = VAR_13->buf;
            VAR_16 = VAR_15->start;

            FUNC_9(VAR_15, VAR_11->buf, sizeof(ngx_buf_t));






            VAR_15->start = VAR_16;

            VAR_15->tag = (ngx_buf_tag_t) &FUNC_14;
            VAR_15->shadow = VAR_11->buf;
            VAR_15->last_shadow = 1;

            VAR_15->last_buf = 0;
            VAR_15->last_in_chain = 0;

            *VAR_12 = VAR_13;
            VAR_12 = &VAR_13->next;
        }

        FUNC_12(&VAR_18->send_list, &VAR_14->backend_queue);


        if (VAR_7->backend_r == ((void*)0)) {
            VAR_7->backend_r = FUNC_10(VAR_7->connection->pool, sizeof(ngx_queue_t));
            if (VAR_7->backend_r == ((void*)0)) {
                return VAR_0;
            }

            FUNC_11(VAR_7->backend_r);
        }


        FUNC_13(VAR_7->backend_r, &VAR_14->front_queue);
    }

    VAR_17 = FUNC_3(&VAR_9->upstream->writer, VAR_10);

    FUNC_2(VAR_9->pool, &VAR_21->free, &VAR_21->busy, &VAR_10,
            (ngx_buf_tag_t) &FUNC_14);

    for (VAR_11 = VAR_21->free; VAR_11; VAR_11 = VAR_11->next) {


        if (VAR_11->buf->shadow) {
            if (VAR_11->buf->last_shadow) {
                VAR_15 = VAR_11->buf->shadow;
                VAR_15->pos = VAR_15->last;
            }

            VAR_11->buf->shadow = ((void*)0);
        }
    }

    FUNC_0(&VAR_19->ping_event, VAR_20->heartbeat_interval);

    return VAR_17;
}
