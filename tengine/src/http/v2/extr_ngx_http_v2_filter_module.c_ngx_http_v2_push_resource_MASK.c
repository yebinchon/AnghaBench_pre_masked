
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
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_28__ {int len; int * data; } ;
struct TYPE_27__ {TYPE_5__ value; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef TYPE_5__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_29__ {TYPE_1__* request; int queued; TYPE_8__* connection; } ;
typedef TYPE_6__ ngx_http_v2_stream_t ;
struct TYPE_30__ {int offset; int name; int index; } ;
typedef TYPE_7__ ngx_http_v2_push_header_t ;
typedef int ngx_http_v2_out_frame_t ;
struct TYPE_31__ {scalar_t__ pushing; scalar_t__ concurrent_pushes; int last_push; scalar_t__ table_update; TYPE_2__* connection; } ;
typedef TYPE_8__ ngx_http_v2_connection_t ;
struct TYPE_26__ {int * host; } ;
struct TYPE_32__ {TYPE_3__ headers_in; TYPE_5__ schema; int pool; TYPE_6__* stream; TYPE_10__* connection; } ;
typedef TYPE_9__ ngx_http_request_t ;
struct TYPE_23__ {int log; } ;
typedef TYPE_10__ ngx_connection_t ;
struct TYPE_25__ {int log; } ;
struct TYPE_24__ {int request_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (TYPE_9__*,int *,int *) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 TYPE_7__* VAR_13 ;
 TYPE_6__* FUNC_4 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_8__*,int *) ;
 int * FUNC_6 (int *,int *,int,int *) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,int ,int ,char*,TYPE_5__*) ;
 int FUNC_9 (int ,int ,int ,char*,int *,TYPE_5__*) ;
 int FUNC_10 (int ,int ,int ,char*,TYPE_5__*) ;
 size_t FUNC_11 (size_t,int) ;
 int * FUNC_12 (int ,size_t) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ,size_t) ;
 scalar_t__ FUNC_15 (int *,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_16(ngx_http_request_t *VAR_14, ngx_str_t *VAR_15,
    ngx_str_t *VAR_16)
{
    u_char *VAR_17, *VAR_18, *VAR_19;
    size_t VAR_20;
    ngx_str_t *VAR_21;
    ngx_uint_t VAR_22;
    ngx_table_elt_t **VAR_23;
    ngx_connection_t *VAR_24;
    ngx_http_v2_stream_t *VAR_25;
    ngx_http_v2_out_frame_t *VAR_26;
    ngx_http_v2_connection_t *VAR_27;
    ngx_http_v2_push_header_t *VAR_28;

    VAR_24 = VAR_14->connection;

    FUNC_7(VAR_10, VAR_24->log, 0, "http2 push resource");

    VAR_25 = VAR_14->stream;
    VAR_27 = VAR_25->connection;

    if (!FUNC_13(VAR_15->data[0])) {
        FUNC_10(VAR_11, VAR_24->log, 0,
                      "non-absolute path \"%V\" not pushed", VAR_15);
        return VAR_1;
    }

    FUNC_9(VAR_10, VAR_27->connection->log, 0,
                   "http2 pushing:%ui limit:%ui",
                   VAR_27->pushing, VAR_27->concurrent_pushes);

    if (VAR_27->pushing >= VAR_27->concurrent_pushes) {
        return VAR_0;
    }

    if (VAR_27->last_push == 0x7ffffffe) {
        return VAR_0;
    }

    if (VAR_15->len > VAR_4) {
        return VAR_1;
    }

    if (VAR_14->headers_in.host == ((void*)0)) {
        return VAR_0;
    }

    VAR_28 = VAR_13;

    VAR_20 = FUNC_11(VAR_14->schema.len, VAR_15->len);

    if (VAR_16[0].len) {
        VAR_19 = FUNC_12(VAR_14->pool, VAR_20);
        if (VAR_19 == ((void*)0)) {
            return VAR_2;
        }

    } else {
        for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++) {
            VAR_23 = (ngx_table_elt_t **) ((char *) &VAR_14->headers_in + VAR_28[VAR_22].offset);

            if (*VAR_23) {
                VAR_20 = FUNC_11(VAR_20, (*VAR_23)->value.len);
            }
        }

        VAR_19 = FUNC_12(VAR_14->pool, VAR_20);
        if (VAR_19 == ((void*)0)) {
            return VAR_2;
        }

        for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++) {
            VAR_23 = (ngx_table_elt_t **) ((char *) &VAR_14->headers_in + VAR_28[VAR_22].offset);

            if (*VAR_23 == ((void*)0)) {
                continue;
            }

            VAR_21 = &(*VAR_23)->value;

            VAR_20 = 1 + VAR_3 + VAR_21->len;

            VAR_18 = FUNC_14(VAR_14->pool, VAR_20);
            if (VAR_18 == ((void*)0)) {
                return VAR_2;
            }

            VAR_16[VAR_22].data = VAR_18;

            *VAR_18++ = FUNC_2(VAR_28[VAR_22].index);
            VAR_18 = FUNC_6(VAR_18, VAR_21->data, VAR_21->len, VAR_19);

            VAR_16[VAR_22].len = VAR_18 - VAR_16[VAR_22].data;
        }
    }

    VAR_20 = (VAR_27->table_update ? 1 : 0)
          + 1
          + 1 + VAR_3 + VAR_15->len
          + 1 + VAR_3 + VAR_14->schema.len;

    for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++) {
        VAR_20 += VAR_16[VAR_22].len;
    }

    VAR_18 = FUNC_14(VAR_14->pool, VAR_20);
    if (VAR_18 == ((void*)0)) {
        return VAR_2;
    }

    VAR_17 = VAR_18;

    if (VAR_27->table_update) {
        FUNC_7(VAR_10, VAR_24->log, 0,
                       "http2 table size update: 0");
        *VAR_18++ = (1 << 5) | 0;
        VAR_27->table_update = 0;
    }

    FUNC_7(VAR_10, VAR_24->log, 0,
                   "http2 push header: \":method: GET\"");

    *VAR_18++ = FUNC_3(VAR_5);

    FUNC_8(VAR_10, VAR_24->log, 0,
                   "http2 push header: \":path: %V\"", VAR_15);

    *VAR_18++ = FUNC_2(VAR_6);
    VAR_18 = FUNC_6(VAR_18, VAR_15->data, VAR_15->len, VAR_19);

    FUNC_8(VAR_10, VAR_24->log, 0,
                   "http2 push header: \":scheme: %V\"", &VAR_14->schema);

    if (VAR_14->schema.len == 5 && FUNC_15(VAR_14->schema.data, "https", 5) == 0) {
        *VAR_18++ = FUNC_3(VAR_8);

    } else if (VAR_14->schema.len == 4
               && FUNC_15(VAR_14->schema.data, "http", 4) == 0)
    {
        *VAR_18++ = FUNC_3(VAR_9);

    } else {
        *VAR_18++ = FUNC_2(VAR_9);
        VAR_18 = FUNC_6(VAR_18, VAR_14->schema.data, VAR_14->schema.len, VAR_19);
    }

    for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++) {
        VAR_23 = (ngx_table_elt_t **) ((char *) &VAR_14->headers_in + VAR_28[VAR_22].offset);

        if (*VAR_23 == ((void*)0)) {
            continue;
        }

        FUNC_9(VAR_10, VAR_24->log, 0,
                       "http2 push header: \"%V: %V\"",
                       &VAR_28[VAR_22].name, &(*VAR_23)->value);

        VAR_18 = FUNC_0(VAR_18, VAR_16[VAR_22].data, VAR_16[VAR_22].len);
    }

    VAR_26 = FUNC_1(VAR_14, VAR_17, VAR_18);
    if (VAR_26 == ((void*)0)) {
        return VAR_2;
    }

    FUNC_5(VAR_27, VAR_26);

    VAR_25->queued++;

    VAR_25 = FUNC_4(VAR_25, VAR_15);

    if (VAR_25) {
        VAR_25->request->request_length = VAR_18 - VAR_17;
        return VAR_12;
    }

    return VAR_2;
}
