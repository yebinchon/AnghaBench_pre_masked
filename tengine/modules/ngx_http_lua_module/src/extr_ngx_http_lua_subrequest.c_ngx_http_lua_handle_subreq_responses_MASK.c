
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
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_31__ {int len; scalar_t__ data; } ;
struct TYPE_30__ {int len; scalar_t__ data; } ;
struct TYPE_32__ {scalar_t__ hash; TYPE_8__ value; TYPE_7__ key; } ;
typedef TYPE_9__ ngx_table_elt_t ;
struct TYPE_18__ {int len; scalar_t__ data; } ;
typedef TYPE_10__ ngx_str_t ;
struct TYPE_19__ {size_t nelts; TYPE_9__* elts; struct TYPE_19__* next; } ;
typedef TYPE_11__ ngx_list_part_t ;
struct TYPE_28__ {int data; scalar_t__ len; } ;
struct TYPE_20__ {int pool; TYPE_5__ uri; TYPE_4__* connection; } ;
typedef TYPE_12__ ngx_http_request_t ;
struct TYPE_21__ {TYPE_14__* cur_co_ctx; } ;
typedef TYPE_13__ ngx_http_lua_ctx_t ;
struct TYPE_22__ {size_t nsubreqs; int* sr_flags; TYPE_15__** sr_headers; TYPE_10__* sr_bodies; int * sr_statuses; scalar_t__ pending_subreqs; int * co; } ;
typedef TYPE_14__ ngx_http_lua_co_ctx_t ;
struct TYPE_24__ {int len; scalar_t__ data; } ;
struct TYPE_29__ {TYPE_11__ part; } ;
struct TYPE_23__ {scalar_t__ content_length_n; int last_modified_time; scalar_t__ status; int * last_modified; TYPE_3__* location; int * content_length; TYPE_1__ content_type; TYPE_6__ headers; } ;
typedef TYPE_15__ ngx_http_headers_out_t ;
typedef int lua_State ;
typedef int lua_Number ;
typedef int buf ;
struct TYPE_27__ {int log; } ;
struct TYPE_25__ {int len; scalar_t__ data; } ;
struct TYPE_26__ {TYPE_2__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int,size_t) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int,int) ;
 int FUNC_16 (int *,int,char*) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int ,int ,int ,char*) ;
 int FUNC_19 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_20(ngx_http_request_t *VAR_6,
    ngx_http_lua_ctx_t *VAR_7)
{
    ngx_uint_t VAR_8, VAR_9;
    ngx_uint_t VAR_10;
    lua_State *VAR_11;
    ngx_str_t *VAR_12;
    ngx_table_elt_t *VAR_13;
    ngx_list_part_t *VAR_14;
    ngx_http_headers_out_t *VAR_15;
    ngx_http_lua_co_ctx_t *VAR_16;

    u_char VAR_17[sizeof("Mon, 28 Sep 1970 06:00:00 GMT") - 1];

    FUNC_18(VAR_5, VAR_6->connection->log, 0,
                   "lua handle subrequest responses");

    VAR_16 = VAR_7->cur_co_ctx;
    VAR_11 = VAR_16->co;

    for (VAR_10 = 0; VAR_10 < VAR_16->nsubreqs; VAR_10++) {
        FUNC_0("summary: reqs %d, subquery %d, pending %d, req %.*s",
           (int) VAR_16->nsubreqs,
           (int) VAR_10,
           (int) VAR_16->pending_subreqs,
           (int) VAR_6->uri.len, VAR_6->uri.data);


        FUNC_1(VAR_11, 0 , 4 );


        FUNC_8(VAR_11, VAR_16->sr_statuses[VAR_10]);
        FUNC_16(VAR_11, -2, "status");

        FUNC_0("captured subrequest flags: %d", (int) VAR_16->sr_flags[VAR_10]);


        if (VAR_16->sr_flags[VAR_10] & VAR_0) {
            FUNC_7(VAR_11, 1);
            FUNC_16(VAR_11, -2, "truncated");

        } else {
            FUNC_7(VAR_11, 0);
            FUNC_16(VAR_11, -2, "truncated");
        }



        VAR_12 = &VAR_16->sr_bodies[VAR_10];

        FUNC_10(VAR_11, (char *) VAR_12->data, VAR_12->len);
        FUNC_16(VAR_11, -2, "body");

        if (VAR_12->data) {
            FUNC_0("free body buffer ASAP");
            FUNC_19(VAR_6->pool, VAR_12->data);
        }



        VAR_15 = VAR_16->sr_headers[VAR_10];

        VAR_14 = &VAR_15->headers.part;
        VAR_9 = VAR_14->nelts;
        while (VAR_14->next) {
            VAR_14 = VAR_14->next;
            VAR_9 += VAR_14->nelts;
        }

        FUNC_1(VAR_11, 0, VAR_9 + 5);

        FUNC_0("saving subrequest response headers");

        VAR_14 = &VAR_15->headers.part;
        VAR_13 = VAR_14->elts;

        for (VAR_8 = 0; ; VAR_8++) {

            if (VAR_8 >= VAR_14->nelts) {
                if (VAR_14->next == ((void*)0)) {
                    break;
                }

                VAR_14 = VAR_14->next;
                VAR_13 = VAR_14->elts;
                VAR_8 = 0;
            }

            FUNC_0("checking sr header %.*s", (int) VAR_13[VAR_8].key.len,
               VAR_13[VAR_8].key.data);


            if (VAR_13[VAR_8].hash == 0) {
                continue;
            }


            VAR_13[VAR_8].hash = 0;

            FUNC_0("pushing sr header %.*s", (int) VAR_13[VAR_8].key.len,
               VAR_13[VAR_8].key.data);

            FUNC_10(VAR_11, (char *) VAR_13[VAR_8].key.data,
                            VAR_13[VAR_8].key.len);
            FUNC_12(VAR_11, -1);


            FUNC_13(VAR_11, -3);

            if (FUNC_3(VAR_11, -1)) {
                FUNC_6(VAR_11, 1);

                FUNC_10(VAR_11, (char *) VAR_13[VAR_8].value.data,
                                VAR_13[VAR_8].value.len);


                FUNC_14(VAR_11, -3);

            } else {

                if (!FUNC_4(VAR_11, -1)) {
                    FUNC_1(VAR_11, 4, 0);


                    FUNC_2(VAR_11, -2);
                    FUNC_15(VAR_11, -2, 1);

                    FUNC_10(VAR_11, (char *) VAR_13[VAR_8].value.data,
                                    VAR_13[VAR_8].value.len);


                    FUNC_15(VAR_11, -2, FUNC_5(VAR_11, -2) + 1);


                    FUNC_14(VAR_11, -3);

                } else {
                    FUNC_10(VAR_11, (char *) VAR_13[VAR_8].value.data,
                                    VAR_13[VAR_8].value.len);


                    FUNC_15(VAR_11, -2, FUNC_5(VAR_11, -2) + 1);


                    FUNC_6(VAR_11, 2);
                }
            }
        }

        if (VAR_15->content_type.len) {
            FUNC_9(VAR_11, "Content-Type");
            FUNC_10(VAR_11, (char *) VAR_15->content_type.data,
                            VAR_15->content_type.len);
            FUNC_14(VAR_11, -3);
        }

        if (VAR_15->content_length == ((void*)0)
            && VAR_15->content_length_n >= 0)
        {
            FUNC_9(VAR_11, "Content-Length");

            FUNC_11(VAR_11, (lua_Number) VAR_15->content_length_n);


            FUNC_14(VAR_11, -3);
        }



        if (VAR_15->location && VAR_15->location->value.len) {
            FUNC_9(VAR_11, "Location");
            FUNC_10(VAR_11, (char *) VAR_15->location->value.data,
                            VAR_15->location->value.len);

            FUNC_14(VAR_11, -3);
        }

        if (VAR_15->last_modified_time != -1) {
            if (VAR_15->status != VAR_3
                && VAR_15->status != VAR_4
                && VAR_15->status != VAR_1
                && VAR_15->status != VAR_2)
            {
                VAR_15->last_modified_time = -1;
                VAR_15->last_modified = ((void*)0);
            }
        }

        if (VAR_15->last_modified == ((void*)0)
            && VAR_15->last_modified_time != -1)
        {
            (void) FUNC_17(VAR_17, VAR_15->last_modified_time);

            FUNC_9(VAR_11, "Last-Modified");
            FUNC_10(VAR_11, (char *) VAR_17, sizeof(VAR_17));
            FUNC_14(VAR_11, -3);
        }

        FUNC_16(VAR_11, -2, "header");


    }
}
