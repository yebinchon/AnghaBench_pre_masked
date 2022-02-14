
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_18__ {char* data; size_t len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_19__ {int pool; TYPE_1__* connection; scalar_t__ header_sent; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_20__ {scalar_t__ transform_underscores_in_resp_headers; } ;
typedef TYPE_4__ ngx_http_lua_loc_conf_t ;
struct TYPE_21__ {int headers_set; scalar_t__ header_sent; } ;
typedef TYPE_5__ ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_17__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,...) ;
 scalar_t__ FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*,...) ;
 size_t FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,size_t) ;
 scalar_t__ FUNC_5 (int *,int) ;
 TYPE_5__* FUNC_6 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_9 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_5__*,TYPE_2__,TYPE_2__,int) ;
 int FUNC_11 (int ,int ,int ,char*) ;
 int FUNC_12 (char*,char*,size_t) ;
 void* FUNC_13 (int ,size_t) ;
 int FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_15(lua_State *VAR_5)
{
    ngx_http_request_t *VAR_6;
    u_char *VAR_7;
    ngx_str_t VAR_8;
    ngx_str_t VAR_9;
    ngx_uint_t VAR_10;
    size_t VAR_11;
    ngx_http_lua_ctx_t *VAR_12;
    ngx_int_t VAR_13;
    ngx_uint_t VAR_14;
    ngx_http_lua_loc_conf_t *VAR_15;

    VAR_6 = FUNC_9(VAR_5);
    if (VAR_6 == ((void*)0)) {
        return FUNC_2(VAR_5, "no request object found");
    }

    VAR_12 = FUNC_6(VAR_6, VAR_4);
    if (VAR_12 == ((void*)0)) {
        return FUNC_2(VAR_5, "no ctx");
    }

    FUNC_8(VAR_5, VAR_6);

    if (VAR_6->header_sent || VAR_12->header_sent) {
        FUNC_11(VAR_3, VAR_6->connection->log, 0, "attempt to "
                      "set ngx.header.HEADER after sending out "
                      "response headers");
        return 0;
    }


    VAR_7 = (u_char *) FUNC_1(VAR_5, 2, &VAR_11);

    FUNC_0("key: %.*s, len %d", (int) VAR_11, VAR_7, (int) VAR_11);

    VAR_8.data = FUNC_13(VAR_6->pool, VAR_11 + 1);
    if (VAR_8.data == ((void*)0)) {
        return FUNC_2(VAR_5, "no memory");
    }

    FUNC_12(VAR_8.data, VAR_7, VAR_11);
    VAR_8.data[VAR_11] = '\0';
    VAR_8.len = VAR_11;

    VAR_15 = FUNC_7(VAR_6, VAR_4);

    if (VAR_15->transform_underscores_in_resp_headers) {

        VAR_7 = VAR_8.data;
        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
            if (VAR_7[VAR_10] == '_') {
                VAR_7[VAR_10] = '-';
            }
        }
    }

    VAR_12->headers_set = 1;

    if (FUNC_5(VAR_5, 3) == VAR_0) {
        FUNC_14(&VAR_9);

    } else if (FUNC_5(VAR_5, 3) == VAR_1) {
        VAR_14 = FUNC_3(VAR_5, 3);
        if (VAR_14 == 0) {
            FUNC_14(&VAR_9);

        } else {
            for (VAR_10 = 1; VAR_10 <= VAR_14; VAR_10++) {
                FUNC_0("header value table index %d", (int) VAR_10);

                FUNC_4(VAR_5, 3, VAR_10);
                VAR_7 = (u_char *) FUNC_1(VAR_5, -1, &VAR_11);

                VAR_9.data = FUNC_13(VAR_6->pool, VAR_11);
                if (VAR_9.data == ((void*)0)) {
                    return FUNC_2(VAR_5, "no memory");
                }

                FUNC_12(VAR_9.data, VAR_7, VAR_11);
                VAR_9.len = VAR_11;

                VAR_13 = FUNC_10(VAR_6, VAR_12, VAR_8, VAR_9,
                                                    VAR_10 == 1 );

                if (VAR_13 == VAR_2) {
                    return FUNC_2(VAR_5,
                                      "failed to set header %s (error: %d)",
                                      VAR_8.data, (int) VAR_13);
                }
            }

            return 0;
        }

    } else {
        VAR_7 = (u_char *) FUNC_1(VAR_5, 3, &VAR_11);
        VAR_9.data = FUNC_13(VAR_6->pool, VAR_11);
        if (VAR_9.data == ((void*)0)) {
            return FUNC_2(VAR_5, "no memory");
        }

        FUNC_12(VAR_9.data, VAR_7, VAR_11);
        VAR_9.len = VAR_11;
    }

    FUNC_0("key: %.*s, value: %.*s",
       (int) VAR_8.len, VAR_8.data, (int) VAR_9.len, VAR_9.data);

    VAR_13 = FUNC_10(VAR_6, VAR_12, VAR_8, VAR_9, 1 );

    if (VAR_13 == VAR_2) {
        return FUNC_2(VAR_5, "failed to set header %s (error: %d)",
                          VAR_8.data, (int) VAR_13);
    }

    return 0;
}
