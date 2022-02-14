
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_22__ {int len; scalar_t__ data; } ;
struct TYPE_21__ {scalar_t__ len; int * data; } ;
struct TYPE_23__ {scalar_t__ hash; TYPE_7__ value; TYPE_6__ key; } ;
typedef TYPE_8__ ngx_table_elt_t ;
struct TYPE_24__ {scalar_t__ len; int data; } ;
typedef TYPE_9__ ngx_str_t ;
struct TYPE_14__ {size_t nelts; TYPE_8__* elts; struct TYPE_14__* next; } ;
typedef TYPE_10__ ngx_list_part_t ;
struct TYPE_19__ {TYPE_10__ part; } ;
struct TYPE_16__ {int len; scalar_t__ data; } ;
struct TYPE_20__ {TYPE_4__ headers; TYPE_3__* location; TYPE_1__ content_type; int content_length_n; int * content_length; } ;
struct TYPE_15__ {TYPE_5__ headers_out; } ;
typedef TYPE_11__ ngx_http_request_t ;
typedef int ngx_http_lua_ctx_t ;
typedef int lua_State ;
typedef int lua_Integer ;
struct TYPE_17__ {char* data; scalar_t__ len; } ;
struct TYPE_18__ {int key; int hash; TYPE_2__ value; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,unsigned int) ;
 int VAR_0 ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int ,int *,int) ;

int
FUNC_9(lua_State *VAR_1, ngx_http_request_t *VAR_2,
    ngx_http_lua_ctx_t *VAR_3, ngx_str_t *VAR_4)
{
    ngx_table_elt_t *VAR_5;
    ngx_list_part_t *VAR_6;
    ngx_uint_t VAR_7;
    unsigned VAR_8;

    FUNC_0("looking for response header \"%.*s\"", (int) VAR_4->len, VAR_4->data);

    switch (VAR_4->len) {
    case 14:
        if (VAR_2->headers_out.content_length == ((void*)0)
            && VAR_2->headers_out.content_length_n >= 0
            && FUNC_8(VAR_4->data, (u_char *) "Content-Length", 14) == 0)
        {
            FUNC_3(VAR_1, (lua_Integer) VAR_2->headers_out.content_length_n);
            return 1;
        }

        break;

    case 12:
        if (FUNC_8(VAR_4->data, (u_char *) "Content-Type", 12) == 0
            && VAR_2->headers_out.content_type.len)
        {
            FUNC_4(VAR_1, (char *) VAR_2->headers_out.content_type.data,
                            VAR_2->headers_out.content_type.len);
            return 1;
        }

        break;

    default:
        break;
    }

    FUNC_0("not a built-in output header");

    VAR_8 = 0;


    if (VAR_2->headers_out.location
        && VAR_2->headers_out.location->value.len
        && VAR_2->headers_out.location->value.data[0] == '/')
    {





        VAR_2->headers_out.location->hash = VAR_0;
        FUNC_7(&VAR_2->headers_out.location->key, "Location");
    }


    VAR_6 = &VAR_2->headers_out.headers.part;
    VAR_5 = VAR_6->elts;

    for (VAR_7 = 0; ; VAR_7++) {

        if (VAR_7 >= VAR_6->nelts) {
            if (VAR_6->next == ((void*)0)) {
                break;
            }

            VAR_6 = VAR_6->next;
            VAR_5 = VAR_6->elts;
            VAR_7 = 0;
        }

        if (VAR_5[VAR_7].hash == 0) {
            continue;
        }

        if (VAR_5[VAR_7].hash != 0
            && VAR_5[VAR_7].key.len == VAR_4->len
            && FUNC_8(VAR_4->data, VAR_5[VAR_7].key.data, VAR_5[VAR_7].key.len) == 0)
         {
             if (!VAR_8) {
                 VAR_8 = 1;

                 FUNC_4(VAR_1, (char *) VAR_5[VAR_7].value.data, VAR_5[VAR_7].value.len);
                 continue;
             }

             if (VAR_8 == 1) {
                 FUNC_1(VAR_1, 4 , 0);
                 FUNC_2(VAR_1, -2);
                 FUNC_6(VAR_1, -2, VAR_8);
             }

             VAR_8++;

             FUNC_4(VAR_1, (char *) VAR_5[VAR_7].value.data, VAR_5[VAR_7].value.len);
             FUNC_6(VAR_1, -2, VAR_8);
         }
    }

    if (VAR_8) {
        return 1;
    }

    FUNC_5(VAR_1);
    return 1;
}
