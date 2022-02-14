
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_18__ {size_t len; scalar_t__ data; } ;
struct TYPE_17__ {size_t len; scalar_t__ data; } ;
struct TYPE_19__ {scalar_t__ hash; TYPE_6__ value; TYPE_5__ key; } ;
typedef TYPE_7__ ngx_table_elt_t ;
struct TYPE_20__ {int nelts; TYPE_7__* elts; struct TYPE_20__* next; } ;
typedef TYPE_8__ ngx_list_part_t ;
struct TYPE_14__ {TYPE_8__ part; } ;
struct TYPE_13__ {size_t len; scalar_t__ data; } ;
struct TYPE_15__ {scalar_t__ content_length_n; scalar_t__ status; TYPE_2__ headers; int * content_length; TYPE_1__ content_type; } ;
struct TYPE_21__ {TYPE_4__* connection; TYPE_3__ headers_out; scalar_t__ chunked; scalar_t__ keepalive; } ;
typedef TYPE_9__ ngx_http_request_t ;
typedef int ngx_http_lua_ctx_t ;
typedef int lua_State ;
struct TYPE_16__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int * FUNC_7 (int *,size_t) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*,size_t) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int * FUNC_16 (TYPE_9__*,int ) ;
 int FUNC_17 (int *,TYPE_9__*) ;
 TYPE_9__* FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 int VAR_5 ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int ,int ,int ,char*,...) ;
 int FUNC_22 (int *,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_23(lua_State *VAR_6)
{
    ngx_list_part_t *VAR_7;
    ngx_table_elt_t *VAR_8;
    ngx_http_request_t *VAR_9;
    ngx_http_lua_ctx_t *VAR_10;
    u_char *VAR_11 = ((void*)0);
    size_t VAR_12 = 0;
    ngx_uint_t VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16 = 0;
    int VAR_17 = 0;
    int VAR_18 = 0;
    int VAR_19 = 0;

    VAR_14 = FUNC_4(VAR_6);

    if (VAR_14 >= 1) {
        if (FUNC_6(VAR_6, 1)) {
            VAR_15 = VAR_1;

        } else {
            VAR_15 = FUNC_1(VAR_6, 1);
        }

        if (VAR_14 >= 2) {
            VAR_16 = FUNC_15(VAR_6, 2);
        }

    } else {
        VAR_15 = VAR_1;
    }

    VAR_9 = FUNC_18(VAR_6);
    if (VAR_9 == ((void*)0)) {
        return FUNC_2(VAR_6, "no request object found");
    }

    VAR_10 = FUNC_16(VAR_9, VAR_5);
    if (VAR_10 == ((void*)0)) {
        return FUNC_2(VAR_6, "no ctx found");
    }

    FUNC_17(VAR_6, VAR_9);

    VAR_7 = &VAR_9->headers_out.headers.part;
    VAR_17 = VAR_7->nelts;
    while (VAR_7->next != ((void*)0)) {
        VAR_7 = VAR_7->next;
        VAR_17 += VAR_7->nelts;
    }

    FUNC_3(VAR_6, 0, VAR_17 + 2);

    if (!VAR_16) {
        FUNC_9(VAR_6, FUNC_19(
                              VAR_4));
        FUNC_12(VAR_6, VAR_0);
        FUNC_14(VAR_6, -2);
    }


    if (VAR_9->headers_out.content_type.len) {
        VAR_19++;
        FUNC_10(VAR_6, "content-type");
        FUNC_11(VAR_6, (char *) VAR_9->headers_out.content_type.data,
                        VAR_9->headers_out.content_type.len);
        FUNC_13(VAR_6, -3);
    }

    if (VAR_9->headers_out.content_length == ((void*)0)
        && VAR_9->headers_out.content_length_n >= 0)
    {
        VAR_19++;
        FUNC_10(VAR_6, "content-length");
        FUNC_8(VAR_6, "%d", (int) VAR_9->headers_out.content_length_n);
        FUNC_13(VAR_6, -3);
    }

    VAR_19++;
    FUNC_10(VAR_6, "connection");
    if (VAR_9->headers_out.status == VAR_2) {
        FUNC_10(VAR_6, "upgrade");

    } else if (VAR_9->keepalive) {
        FUNC_10(VAR_6, "keep-alive");

    } else {
        FUNC_10(VAR_6, "close");
    }
    FUNC_13(VAR_6, -3);

    if (VAR_9->chunked) {
        VAR_19++;
        FUNC_10(VAR_6, "transfer-encoding");
        FUNC_10(VAR_6, "chunked");
        FUNC_13(VAR_6, -3);
    }


    if (VAR_15 > 0 && VAR_17 + VAR_19 > VAR_15) {
        VAR_18 = 1;
        FUNC_21(VAR_3, VAR_9->connection->log, 0,
                       "lua exceeding response header limit %d > %d",
                       VAR_17 + VAR_19, VAR_15);
        VAR_17 = VAR_15 - VAR_19;
    }

    VAR_7 = &VAR_9->headers_out.headers.part;
    VAR_8 = VAR_7->elts;

    for (VAR_13 = 0; ; VAR_13++) {

        FUNC_0("stack top: %d", FUNC_4(VAR_6));

        if (VAR_13 >= VAR_7->nelts) {
            if (VAR_7->next == ((void*)0)) {
                break;
            }

            VAR_7 = VAR_7->next;
            VAR_8 = VAR_7->elts;
            VAR_13 = 0;
        }

        if (VAR_8[VAR_13].hash == 0) {
            continue;
        }

        if (VAR_16) {
            FUNC_11(VAR_6, (char *) VAR_8[VAR_13].key.data, VAR_8[VAR_13].key.len);

        } else {


            if (VAR_8[VAR_13].key.len > VAR_12) {
                VAR_12 = VAR_8[VAR_13].key.len * 2;



                VAR_11 = FUNC_7(VAR_6, VAR_12);
                FUNC_5(VAR_6, 1);
            }

            FUNC_22(VAR_11, VAR_8[VAR_13].key.data, VAR_8[VAR_13].key.len);
            FUNC_11(VAR_6, (char *) VAR_11, VAR_8[VAR_13].key.len);
        }



        FUNC_11(VAR_6, (char *) VAR_8[VAR_13].value.data,
                        VAR_8[VAR_13].value.len);


        FUNC_20(VAR_6, -3);

        FUNC_21(VAR_3, VAR_9->connection->log, 0,
                       "lua response header: \"%V: %V\"",
                       &VAR_8[VAR_13].key, &VAR_8[VAR_13].value);

        if (--VAR_17 <= 0) {
            break;
        }
    }

    if (VAR_18) {
        FUNC_10(VAR_6, "truncated");
        return 2;
    }

    return 1;
}
