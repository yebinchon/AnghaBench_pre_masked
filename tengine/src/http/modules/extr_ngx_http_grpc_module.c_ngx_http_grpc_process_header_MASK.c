
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_64__ TYPE_9__ ;
typedef struct TYPE_63__ TYPE_8__ ;
typedef struct TYPE_62__ TYPE_7__ ;
typedef struct TYPE_61__ TYPE_6__ ;
typedef struct TYPE_60__ TYPE_5__ ;
typedef struct TYPE_59__ TYPE_4__ ;
typedef struct TYPE_58__ TYPE_3__ ;
typedef struct TYPE_57__ TYPE_2__ ;
typedef struct TYPE_56__ TYPE_1__ ;
typedef struct TYPE_55__ TYPE_19__ ;
typedef struct TYPE_54__ TYPE_16__ ;
typedef struct TYPE_53__ TYPE_13__ ;
typedef struct TYPE_52__ TYPE_12__ ;
typedef struct TYPE_51__ TYPE_11__ ;
typedef struct TYPE_50__ TYPE_10__ ;


typedef int u_char ;
typedef scalar_t__ ssize_t ;
struct TYPE_55__ {int len; char* data; } ;
struct TYPE_62__ {int len; int data; } ;
struct TYPE_61__ {char* lowcase_key; TYPE_19__ key; int hash; TYPE_7__ value; } ;
typedef TYPE_6__ ngx_table_elt_t ;
typedef TYPE_7__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_59__ {scalar_t__ content_length_n; int headers; scalar_t__ status_n; } ;
struct TYPE_57__ {TYPE_1__* connection; } ;
struct TYPE_53__ {int last; int pos; int start; } ;
struct TYPE_63__ {int keepalive; TYPE_4__ headers_in; TYPE_3__* state; TYPE_2__ peer; TYPE_13__ buffer; } ;
typedef TYPE_8__ ngx_http_upstream_t ;
struct TYPE_64__ {int headers_in_hash; } ;
typedef TYPE_9__ ngx_http_upstream_main_conf_t ;
struct TYPE_50__ {scalar_t__ (* handler ) (TYPE_11__*,TYPE_6__*,int ) ;int offset; } ;
typedef TYPE_10__ ngx_http_upstream_header_t ;
struct TYPE_51__ {TYPE_5__* connection; TYPE_8__* upstream; } ;
typedef TYPE_11__ ngx_http_request_t ;
struct TYPE_52__ {scalar_t__ state; scalar_t__ type; scalar_t__ stream_id; scalar_t__ id; scalar_t__ rest; int status; int output_blocked; scalar_t__ output_closed; int * out; int * in; scalar_t__ end_stream; TYPE_7__ value; TYPE_19__ name; int error; scalar_t__ parsing_headers; } ;
typedef TYPE_12__ ngx_http_grpc_ctx_t ;
typedef TYPE_13__ ngx_buf_t ;
struct TYPE_60__ {TYPE_16__* log; } ;
struct TYPE_58__ {scalar_t__ status; } ;
struct TYPE_56__ {int write; } ;
struct TYPE_54__ {int log_level; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_0 (int ,int) ;
 TYPE_10__* FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (char*,int) ;
 int * FUNC_3 (int *,int,size_t) ;
 TYPE_9__* FUNC_4 (TYPE_11__*,int ) ;
 TYPE_12__* FUNC_5 (TYPE_11__*) ;
 scalar_t__ FUNC_6 (TYPE_11__*,TYPE_12__*,TYPE_13__*) ;
 scalar_t__ FUNC_7 (TYPE_11__*,TYPE_12__*,TYPE_13__*) ;
 scalar_t__ FUNC_8 (TYPE_11__*,TYPE_12__*,TYPE_13__*) ;
 scalar_t__ FUNC_9 (TYPE_11__*,TYPE_12__*,TYPE_13__*) ;
 scalar_t__ FUNC_10 (TYPE_11__*,TYPE_12__*,TYPE_13__*) ;
 scalar_t__ FUNC_11 (TYPE_11__*,TYPE_12__*,TYPE_13__*) ;
 scalar_t__ FUNC_12 (TYPE_11__*,TYPE_12__*,TYPE_13__*) ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 TYPE_6__* FUNC_13 (int *) ;
 int FUNC_14 (int,TYPE_16__*,int ,char*) ;
 int FUNC_15 (int,TYPE_16__*,int ,char*,TYPE_19__*,TYPE_7__*) ;
 int FUNC_16 (int,TYPE_16__*,int ,char*,size_t,int *,char*,int) ;
 int FUNC_17 (int ,TYPE_16__*,int ,char*,...) ;
 size_t FUNC_18 (int,int) ;
 int FUNC_19 (int ,int *) ;
 int VAR_20 ;
 scalar_t__ FUNC_20 (char*,char*,int) ;
 scalar_t__ FUNC_21 (TYPE_11__*,TYPE_6__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_22(ngx_http_request_t *VAR_21)
{
    ngx_str_t *VAR_22;
    ngx_int_t VAR_23, VAR_24;
    ngx_buf_t *VAR_25;
    ngx_table_elt_t *VAR_26;
    ngx_http_upstream_t *VAR_27;
    ngx_http_grpc_ctx_t *VAR_28;
    ngx_http_upstream_header_t *VAR_29;
    ngx_http_upstream_main_conf_t *VAR_30;

    VAR_27 = VAR_21->upstream;
    VAR_25 = &VAR_27->buffer;
    VAR_28 = FUNC_5(VAR_21);

    if (VAR_28 == ((void*)0)) {
        return VAR_1;
    }

    VAR_30 = FUNC_4(VAR_21, VAR_19);

    for ( ;; ) {

        if (VAR_28->state < VAR_17) {

            VAR_23 = FUNC_6(VAR_21, VAR_28, VAR_25);

            if (VAR_23 == VAR_0) {







                if (!VAR_28->parsing_headers) {
                    VAR_25->pos = VAR_25->start;
                    VAR_25->last = VAR_25->pos;
                }

                return VAR_0;
            }

            if (VAR_23 == VAR_1) {
                return VAR_4;
            }
            if (VAR_28->type == VAR_6
                || (VAR_28->type == VAR_5
                    && !VAR_28->parsing_headers)
                || (VAR_28->type != VAR_5
                    && VAR_28->parsing_headers))
            {
                FUNC_17(VAR_15, VAR_21->connection->log, 0,
                              "upstream sent unexpected http2 frame: %d",
                              VAR_28->type);
                return VAR_4;
            }

            if (VAR_28->stream_id && VAR_28->stream_id != VAR_28->id) {
                FUNC_17(VAR_15, VAR_21->connection->log, 0,
                              "upstream sent frame for unknown stream %ui",
                              VAR_28->stream_id);
                return VAR_4;
            }
        }



        if (VAR_28->type == VAR_11) {

            VAR_23 = FUNC_10(VAR_21, VAR_28, VAR_25);

            if (VAR_23 == VAR_0) {
                return VAR_0;
            }

            if (VAR_23 == VAR_1) {
                return VAR_4;
            }

            FUNC_17(VAR_15, VAR_21->connection->log, 0,
                          "upstream rejected request with error %ui",
                          VAR_28->error);

            return VAR_4;
        }

        if (VAR_28->type == VAR_7) {

            VAR_23 = FUNC_7(VAR_21, VAR_28, VAR_25);

            if (VAR_23 == VAR_0) {
                return VAR_0;
            }

            if (VAR_23 == VAR_1) {
                return VAR_4;
            }
            if (VAR_28->stream_id < VAR_28->id) {



                FUNC_17(VAR_15, VAR_21->connection->log, 0,
                              "upstream sent goaway with error %ui",
                              VAR_28->error);

                return VAR_4;
            }

            continue;
        }

        if (VAR_28->type == VAR_13) {

            VAR_23 = FUNC_12(VAR_21, VAR_28, VAR_25);

            if (VAR_23 == VAR_0) {
                return VAR_0;
            }

            if (VAR_23 == VAR_1) {
                return VAR_4;
            }

            if (VAR_28->in) {
                FUNC_19(VAR_27->peer.connection->write, &VAR_20);
            }

            continue;
        }

        if (VAR_28->type == VAR_12) {

            VAR_23 = FUNC_11(VAR_21, VAR_28, VAR_25);

            if (VAR_23 == VAR_0) {
                return VAR_0;
            }

            if (VAR_23 == VAR_1) {
                return VAR_4;
            }

            if (VAR_28->in) {
                FUNC_19(VAR_27->peer.connection->write, &VAR_20);
            }

            continue;
        }

        if (VAR_28->type == VAR_9) {

            VAR_23 = FUNC_9(VAR_21, VAR_28, VAR_25);

            if (VAR_23 == VAR_0) {
                return VAR_0;
            }

            if (VAR_23 == VAR_1) {
                return VAR_4;
            }

            FUNC_19(VAR_27->peer.connection->write, &VAR_20);
            continue;
        }

        if (VAR_28->type == VAR_10) {
            FUNC_17(VAR_15, VAR_21->connection->log, 0,
                          "upstream sent unexpected push promise frame");
            return VAR_4;
        }

        if (VAR_28->type != VAR_8
            && VAR_28->type != VAR_5)
        {


            if (VAR_25->last - VAR_25->pos < (ssize_t) VAR_28->rest) {
                VAR_28->rest -= VAR_25->last - VAR_25->pos;
                VAR_25->pos = VAR_25->last;
                return VAR_0;
            }

            VAR_25->pos += VAR_28->rest;
            VAR_28->rest = 0;
            VAR_28->state = VAR_18;

            continue;
        }



        for ( ;; ) {

            VAR_23 = FUNC_8(VAR_21, VAR_28, VAR_25);

            if (VAR_23 == VAR_0) {
                break;
            }

            if (VAR_23 == VAR_16) {



                FUNC_15(VAR_14, VAR_21->connection->log, 0,
                               "grpc header: \"%V: %V\"",
                               &VAR_28->name, &VAR_28->value);

                if (VAR_28->name.len && VAR_28->name.data[0] == ':') {

                    if (VAR_28->name.len != sizeof(":status") - 1
                        || FUNC_20(VAR_28->name.data, ":status",
                                       sizeof(":status") - 1)
                           != 0)
                    {
                        FUNC_17(VAR_15, VAR_21->connection->log, 0,
                                      "upstream sent invalid header \"%V: %V\"",
                                      &VAR_28->name, &VAR_28->value);
                        return VAR_4;
                    }

                    if (VAR_28->status) {
                        FUNC_17(VAR_15, VAR_21->connection->log, 0,
                                      "upstream sent duplicate :status header");
                        return VAR_4;
                    }

                    VAR_22 = &VAR_28->value;

                    if (VAR_22->len != 3) {
                        FUNC_17(VAR_15, VAR_21->connection->log, 0,
                                      "upstream sent invalid :status \"%V\"",
                                      VAR_22);
                        return VAR_4;
                    }

                    VAR_24 = FUNC_0(VAR_22->data, 3);

                    if (VAR_24 == VAR_1) {
                        FUNC_17(VAR_15, VAR_21->connection->log, 0,
                                      "upstream sent invalid :status \"%V\"",
                                      VAR_22);
                        return VAR_4;
                    }

                    if (VAR_24 < VAR_2) {
                        FUNC_17(VAR_15, VAR_21->connection->log, 0,
                                      "upstream sent unexpected :status \"%V\"",
                                      VAR_22);
                        return VAR_4;
                    }

                    VAR_27->headers_in.status_n = VAR_24;

                    if (VAR_27->state && VAR_27->state->status == 0) {
                        VAR_27->state->status = VAR_24;
                    }

                    VAR_28->status = 1;

                    continue;

                } else if (!VAR_28->status) {
                    FUNC_17(VAR_15, VAR_21->connection->log, 0,
                                  "upstream sent no :status header");
                    return VAR_4;
                }

                VAR_26 = FUNC_13(&VAR_27->headers_in.headers);
                if (VAR_26 == ((void*)0)) {
                    return VAR_1;
                }

                VAR_26->key = VAR_28->name;
                VAR_26->value = VAR_28->value;
                VAR_26->lowcase_key = VAR_26->key.data;
                VAR_26->hash = FUNC_2(VAR_26->key.data, VAR_26->key.len);

                VAR_29 = FUNC_1(&VAR_30->headers_in_hash, VAR_26->hash,
                                   VAR_26->lowcase_key, VAR_26->key.len);

                if (VAR_29 && VAR_29->handler(VAR_21, VAR_26, VAR_29->offset) != VAR_16) {
                    return VAR_1;
                }

                continue;
            }

            if (VAR_23 == VAR_3) {



                FUNC_14(VAR_14, VAR_21->connection->log, 0,
                               "grpc header done");

                if (VAR_28->end_stream) {
                    VAR_27->headers_in.content_length_n = 0;

                    if (VAR_28->in == ((void*)0)
                        && VAR_28->out == ((void*)0)
                        && VAR_28->output_closed
                        && !VAR_28->output_blocked
                        && VAR_25->last == VAR_25->pos)
                    {
                        VAR_27->keepalive = 1;
                    }
                }

                return VAR_16;
            }



            FUNC_17(VAR_15, VAR_21->connection->log, 0,
                          "upstream sent invalid header");

            return VAR_4;
        }



        if (VAR_28->rest == 0) {
            VAR_28->state = VAR_18;
            continue;
        }

        return VAR_0;
    }
}
