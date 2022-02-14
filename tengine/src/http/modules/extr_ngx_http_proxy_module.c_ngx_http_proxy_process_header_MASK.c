
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;


typedef char u_char ;
struct TYPE_25__ {int len; char* data; } ;
struct TYPE_24__ {int len; char* data; } ;
struct TYPE_29__ {char hash; char* lowcase_key; TYPE_13__ value; TYPE_12__ key; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_28__ {int content_length_n; scalar_t__ status_n; int connection_close; scalar_t__ chunked; int headers; int * date; int * server; } ;
struct TYPE_30__ {int keepalive; int upgrade; TYPE_3__ headers_in; int buffer; } ;
typedef TYPE_5__ ngx_http_upstream_t ;
struct TYPE_31__ {int headers_in_hash; } ;
typedef TYPE_6__ ngx_http_upstream_main_conf_t ;
struct TYPE_32__ {scalar_t__ (* handler ) (TYPE_8__*,TYPE_4__*,int ) ;int offset; } ;
typedef TYPE_7__ ngx_http_upstream_header_t ;
struct TYPE_26__ {scalar_t__ upgrade; } ;
struct TYPE_33__ {char header_hash; int header_name_end; int header_name_start; int header_end; int header_start; size_t lowcase_index; int lowcase_header; TYPE_2__* connection; TYPE_1__ headers_in; TYPE_5__* upstream; int pool; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_34__ {scalar_t__ head; } ;
typedef TYPE_9__ ngx_http_proxy_ctx_t ;
struct TYPE_27__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char FUNC_0 (char,char) ;
 TYPE_7__* FUNC_1 (int *,char,char*,int) ;
 TYPE_9__* FUNC_2 (TYPE_8__*,int ) ;
 TYPE_6__* FUNC_3 (TYPE_8__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_8__*,int *,int) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_4__* FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (int ,int ,int ,char*,TYPE_12__*,TYPE_13__*) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 int FUNC_9 (char*,int,int) ;
 char* FUNC_10 (int ,int) ;
 int FUNC_11 (TYPE_13__*) ;
 int FUNC_12 (TYPE_12__*,char*) ;
 int FUNC_13 (char*,char*,int) ;
 scalar_t__ FUNC_14 (TYPE_8__*,TYPE_4__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_15(ngx_http_request_t *VAR_12)
{
    ngx_int_t VAR_13;
    ngx_table_elt_t *VAR_14;
    ngx_http_upstream_t *VAR_15;
    ngx_http_proxy_ctx_t *VAR_16;
    ngx_http_upstream_header_t *VAR_17;
    ngx_http_upstream_main_conf_t *VAR_18;

    VAR_18 = FUNC_3(VAR_12, VAR_11);

    for ( ;; ) {

        VAR_13 = FUNC_4(VAR_12, &VAR_12->upstream->buffer, 1);

        if (VAR_13 == VAR_9) {



            VAR_14 = FUNC_5(&VAR_12->upstream->headers_in.headers);
            if (VAR_14 == ((void*)0)) {
                return VAR_1;
            }

            VAR_14->hash = VAR_12->header_hash;

            VAR_14->key.len = VAR_12->header_name_end - VAR_12->header_name_start;
            VAR_14->value.len = VAR_12->header_end - VAR_12->header_start;

            VAR_14->key.data = FUNC_10(VAR_12->pool,
                               VAR_14->key.len + 1 + VAR_14->value.len + 1 + VAR_14->key.len);
            if (VAR_14->key.data == ((void*)0)) {
                VAR_14->hash = 0;
                return VAR_1;
            }

            VAR_14->value.data = VAR_14->key.data + VAR_14->key.len + 1;
            VAR_14->lowcase_key = VAR_14->key.data + VAR_14->key.len + 1 + VAR_14->value.len + 1;

            FUNC_9(VAR_14->key.data, VAR_12->header_name_start, VAR_14->key.len);
            VAR_14->key.data[VAR_14->key.len] = '\0';
            FUNC_9(VAR_14->value.data, VAR_12->header_start, VAR_14->value.len);
            VAR_14->value.data[VAR_14->value.len] = '\0';

            if (VAR_14->key.len == VAR_12->lowcase_index) {
                FUNC_9(VAR_14->lowcase_key, VAR_12->lowcase_header, VAR_14->key.len);

            } else {
                FUNC_13(VAR_14->lowcase_key, VAR_14->key.data, VAR_14->key.len);
            }

            VAR_17 = FUNC_1(&VAR_18->headers_in_hash, VAR_14->hash,
                               VAR_14->lowcase_key, VAR_14->key.len);

            if (VAR_17 && VAR_17->handler(VAR_12, VAR_14, VAR_17->offset) != VAR_9) {
                return VAR_1;
            }

            FUNC_7(VAR_7, VAR_12->connection->log, 0,
                           "http proxy header: \"%V: %V\"",
                           &VAR_14->key, &VAR_14->value);

            continue;
        }

        if (VAR_13 == VAR_4) {



            FUNC_6(VAR_7, VAR_12->connection->log, 0,
                           "http proxy header done");






            if (VAR_12->upstream->headers_in.server == ((void*)0)) {
                VAR_14 = FUNC_5(&VAR_12->upstream->headers_in.headers);
                if (VAR_14 == ((void*)0)) {
                    return VAR_1;
                }

                VAR_14->hash = FUNC_0(FUNC_0(FUNC_0(FUNC_0(
                                    FUNC_0('s', 'e'), 'r'), 'v'), 'e'), 'r');

                FUNC_12(&VAR_14->key, "Server");
                FUNC_11(&VAR_14->value);
                VAR_14->lowcase_key = (u_char *) "server";
            }

            if (VAR_12->upstream->headers_in.date == ((void*)0)) {
                VAR_14 = FUNC_5(&VAR_12->upstream->headers_in.headers);
                if (VAR_14 == ((void*)0)) {
                    return VAR_1;
                }

                VAR_14->hash = FUNC_0(FUNC_0(FUNC_0('d', 'a'), 't'), 'e');

                FUNC_12(&VAR_14->key, "Date");
                FUNC_11(&VAR_14->value);
                VAR_14->lowcase_key = (u_char *) "date";
            }



            VAR_15 = VAR_12->upstream;

            if (VAR_15->headers_in.chunked) {
                VAR_15->headers_in.content_length_n = -1;
            }






            VAR_16 = FUNC_2(VAR_12, VAR_10);

            if (VAR_15->headers_in.status_n == VAR_3
                || VAR_15->headers_in.status_n == VAR_2
                || VAR_16->head
                || (!VAR_15->headers_in.chunked
                    && VAR_15->headers_in.content_length_n == 0))
            {
                VAR_15->keepalive = !VAR_15->headers_in.connection_close;
            }

            if (VAR_15->headers_in.status_n == VAR_5) {
                VAR_15->keepalive = 0;

                if (VAR_12->headers_in.upgrade) {
                    VAR_15->upgrade = 1;
                }
            }

            return VAR_9;
        }

        if (VAR_13 == VAR_0) {
            return VAR_0;
        }



        FUNC_8(VAR_8, VAR_12->connection->log, 0,
                      "upstream sent invalid header");

        return VAR_6;
    }
}
