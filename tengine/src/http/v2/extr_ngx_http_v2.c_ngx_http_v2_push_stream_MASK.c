
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_14__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_40__ {int len; int data; } ;
struct TYPE_42__ {TYPE_3__ value; } ;
typedef TYPE_5__ ngx_table_elt_t ;
struct TYPE_43__ {char* data; size_t len; } ;
typedef TYPE_6__ ngx_str_t ;
typedef int ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_44__ {int in_closed; TYPE_11__* request; TYPE_9__* node; int * pool; TYPE_10__* connection; } ;
typedef TYPE_7__ ngx_http_v2_stream_t ;
typedef int ngx_http_v2_srv_conf_t ;
struct TYPE_39__ {scalar_t__ len; } ;
struct TYPE_45__ {int offset; TYPE_2__ name; } ;
typedef TYPE_8__ ngx_http_v2_parse_header_t ;
struct TYPE_46__ {int id; int weight; TYPE_7__* stream; int reuse; int * parent; int index; } ;
typedef TYPE_9__ ngx_http_v2_node_t ;
struct TYPE_34__ {TYPE_4__* connection; int last_push; int closed_nodes; int closed; int * streams_index; TYPE_1__* http_connection; } ;
typedef TYPE_10__ ngx_http_v2_connection_t ;
struct TYPE_35__ {int headers_in; TYPE_6__ schema; int method; int method_name; TYPE_12__* connection; } ;
typedef TYPE_11__ ngx_http_request_t ;
struct TYPE_36__ {TYPE_14__* write; } ;
typedef TYPE_12__ ngx_connection_t ;
struct TYPE_41__ {int error; int log; } ;
struct TYPE_38__ {int conf_ctx; } ;
struct TYPE_37__ {int handler; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_11__*,int ) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (TYPE_7__*,int ) ;
 TYPE_7__* FUNC_6 (TYPE_10__*,int) ;
 TYPE_9__* FUNC_7 (TYPE_10__*,int ,int) ;
 size_t FUNC_8 (int *,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (TYPE_11__*,TYPE_8__*,TYPE_6__*) ;
 TYPE_8__* VAR_10 ;
 scalar_t__ FUNC_10 (TYPE_11__*,TYPE_6__*) ;
 int VAR_11 ;
 scalar_t__ FUNC_11 (TYPE_10__*,int ,int ) ;
 int FUNC_12 (TYPE_10__*,TYPE_9__*,int ,int ) ;
 int FUNC_13 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_14 (char*,int ,int) ;
 char* FUNC_15 (int *,int) ;
 int FUNC_16 (TYPE_14__*,int *) ;
 int VAR_12 ;
 void* FUNC_17 (int *,TYPE_6__*) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;

ngx_http_v2_stream_t *
FUNC_20(ngx_http_v2_stream_t *VAR_13, ngx_str_t *VAR_14)
{
    ngx_int_t VAR_15;
    ngx_str_t VAR_16;
    ngx_pool_t *VAR_17;
    ngx_uint_t VAR_18;
    ngx_table_elt_t **VAR_19;
    ngx_connection_t *VAR_20;
    ngx_http_request_t *VAR_21;
    ngx_http_v2_node_t *VAR_22;
    ngx_http_v2_stream_t *VAR_23;
    ngx_http_v2_srv_conf_t *VAR_24;
    ngx_http_v2_connection_t *VAR_25;
    ngx_http_v2_parse_header_t *VAR_26;

    VAR_25 = VAR_13->connection;

    VAR_17 = FUNC_0(1024, VAR_25->connection->log);
    if (VAR_17 == ((void*)0)) {
        goto rst_stream;
    }

    VAR_22 = FUNC_7(VAR_25, VAR_25->last_push, 1);

    if (VAR_22 == ((void*)0)) {
        FUNC_1(VAR_17);
        goto rst_stream;
    }

    VAR_23 = FUNC_6(VAR_25, 1);
    if (VAR_23 == ((void*)0)) {

        if (VAR_22->parent == ((void*)0)) {
            VAR_24 = FUNC_3(VAR_25->http_connection->conf_ctx,
                                                 VAR_9);

            VAR_18 = FUNC_8(VAR_24, VAR_25->last_push);
            VAR_25->streams_index[VAR_18] = VAR_22->index;

            FUNC_18(&VAR_25->closed, &VAR_22->reuse);
            VAR_25->closed_nodes++;
        }

        FUNC_1(VAR_17);
        goto rst_stream;
    }

    if (VAR_22->parent) {
        FUNC_19(&VAR_22->reuse);
        VAR_25->closed_nodes--;
    }

    VAR_23->pool = VAR_17;

    VAR_21 = VAR_23->request;
    VAR_20 = VAR_21->connection;

    VAR_23->in_closed = 1;
    VAR_23->node = VAR_22;

    VAR_22->stream = VAR_23;

    FUNC_13(VAR_6, VAR_25->connection->log, 0,
                   "http2 push stream sid:%ui "
                   "depends on %ui excl:0 weight:16",
                   VAR_25->last_push, VAR_13->node->id);

    VAR_22->weight = VAR_5;
    FUNC_12(VAR_25, VAR_22, VAR_13->node->id, 0);

    VAR_21->method_name = VAR_8;
    VAR_21->method = VAR_3;

    VAR_21->schema.data = FUNC_17(VAR_17, &VAR_13->request->schema);
    if (VAR_21->schema.data == ((void*)0)) {
        goto close;
    }

    VAR_21->schema.len = VAR_13->request->schema.len;

    VAR_16.data = FUNC_17(VAR_17, VAR_14);
    if (VAR_16.data == ((void*)0)) {
        goto close;
    }

    VAR_16.len = VAR_14->len;

    VAR_15 = FUNC_10(VAR_21, &VAR_16);

    if (VAR_15 != VAR_7) {
        goto error;
    }

    for (VAR_26 = VAR_10; VAR_26->name.len; VAR_26++) {
        VAR_19 = (ngx_table_elt_t **)
                ((char *) &VAR_13->request->headers_in + VAR_26->offset);

        if (*VAR_19 == ((void*)0)) {
            continue;
        }

        VAR_16.len = (*VAR_19)->value.len;

        VAR_16.data = FUNC_15(VAR_17, VAR_16.len + 1);
        if (VAR_16.data == ((void*)0)) {
            goto close;
        }

        FUNC_14(VAR_16.data, (*VAR_19)->value.data, VAR_16.len);
        VAR_16.data[VAR_16.len] = '\0';

        VAR_15 = FUNC_9(VAR_21, VAR_26, &VAR_16);

        if (VAR_15 != VAR_7) {
            goto error;
        }
    }

    VAR_20->write->handler = VAR_11;
    FUNC_16(VAR_20->write, &VAR_12);

    return VAR_23;

error:

    if (VAR_15 == VAR_0) {

        FUNC_4(VAR_20);
        return ((void*)0);
    }

    if (VAR_15 == VAR_1) {
        FUNC_2(VAR_21, VAR_2);
        FUNC_4(VAR_20);
        return ((void*)0);
    }

close:

    FUNC_5(VAR_23, VAR_4);

    return ((void*)0);

rst_stream:

    if (FUNC_11(VAR_25, VAR_25->last_push,
                                    VAR_4)
        != VAR_7)
    {
        VAR_25->connection->error = 1;
    }

    return ((void*)0);
}
