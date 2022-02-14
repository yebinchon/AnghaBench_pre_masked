
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_18__ {char* data; size_t len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_socket_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_19__ {int pool; TYPE_1__* connection; scalar_t__ header_sent; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_20__ {scalar_t__ transform_underscores_in_resp_headers; } ;
typedef TYPE_4__ ngx_http_lua_loc_conf_t ;
struct TYPE_21__ {char* data; size_t len; } ;
typedef TYPE_5__ ngx_http_lua_ffi_str_t ;
struct TYPE_22__ {int headers_set; scalar_t__ header_sent; } ;
typedef TYPE_6__ ngx_http_lua_ctx_t ;
struct TYPE_17__ {scalar_t__ fd; int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,...) ;
 TYPE_6__* FUNC_1 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_6__*,TYPE_2__,TYPE_2__,int) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 void* FUNC_6 (int ,size_t) ;

int
FUNC_7(ngx_http_request_t *VAR_7, const u_char *VAR_8,
    size_t VAR_9, int VAR_10, const u_char *VAR_11, size_t VAR_12,
    ngx_http_lua_ffi_str_t *VAR_13, size_t VAR_14, int VAR_15,
    char **VAR_16)
{
    u_char *VAR_17;
    ngx_str_t VAR_18, VAR_19;
    ngx_uint_t VAR_20;
    size_t VAR_21;
    ngx_http_lua_ctx_t *VAR_22;
    ngx_int_t VAR_23;
    ngx_http_lua_loc_conf_t *VAR_24;

    VAR_22 = FUNC_1(VAR_7, VAR_6);
    if (VAR_22 == ((void*)0)) {
        return VAR_3;
    }

    if (VAR_7->connection->fd == (ngx_socket_t) -1) {
        return VAR_2;
    }

    if (VAR_7->header_sent || VAR_22->header_sent) {
        FUNC_4(VAR_4, VAR_7->connection->log, 0, "attempt to "
                      "set ngx.header.HEADER after sending out "
                      "response headers");
        return VAR_0;
    }

    VAR_19.data = FUNC_6(VAR_7->pool, VAR_9 + 1);
    if (VAR_19.data == ((void*)0)) {
        goto nomem;
    }

    FUNC_5(VAR_19.data, VAR_8, VAR_9);
    VAR_19.data[VAR_9] = '\0';
    VAR_19.len = VAR_9;

    VAR_24 = FUNC_2(VAR_7, VAR_6);

    if (VAR_24->transform_underscores_in_resp_headers) {

        VAR_17 = VAR_19.data;
        for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
            if (VAR_17[VAR_20] == '_') {
                VAR_17[VAR_20] = '-';
            }
        }
    }

    VAR_22->headers_set = 1;

    if (VAR_10) {
        VAR_18.data = ((void*)0);
        VAR_18.len = 0;

    } else if (VAR_13) {

        if (VAR_14 == 0) {
            VAR_18.data = ((void*)0);
            VAR_18.len = 0;

        } else {
            for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++) {
                FUNC_0("header value table index %d", (int) VAR_20);

                VAR_17 = VAR_13[VAR_20].data;
                VAR_21 = VAR_13[VAR_20].len;

                VAR_18.data = FUNC_6(VAR_7->pool, VAR_21);
                if (VAR_18.data == ((void*)0)) {
                    goto nomem;
                }

                FUNC_5(VAR_18.data, VAR_17, VAR_21);
                VAR_18.len = VAR_21;

                VAR_23 = FUNC_3(VAR_7, VAR_22, VAR_19, VAR_18,
                                                    VAR_15 && VAR_20 == 0);

                if (VAR_23 == VAR_1) {
                    *VAR_16 = "failed to set header";
                    return VAR_1;
                }
            }

            return VAR_5;
        }

    } else {
        VAR_17 = (u_char *) VAR_11;
        VAR_18.data = FUNC_6(VAR_7->pool, VAR_12);
        if (VAR_18.data == ((void*)0)) {
            goto nomem;
        }

        FUNC_5(VAR_18.data, VAR_17, VAR_12);
        VAR_18.len = VAR_12;
    }

    FUNC_0("key: %.*s, value: %.*s",
       (int) VAR_19.len, VAR_19.data, (int) VAR_18.len, VAR_18.data);

    VAR_23 = FUNC_3(VAR_7, VAR_22, VAR_19, VAR_18, VAR_15);

    if (VAR_23 == VAR_1) {
        *VAR_16 = "failed to set header";
        return VAR_1;
    }

    return 0;

nomem:

    *VAR_16 = "no memory";
    return VAR_1;
}
