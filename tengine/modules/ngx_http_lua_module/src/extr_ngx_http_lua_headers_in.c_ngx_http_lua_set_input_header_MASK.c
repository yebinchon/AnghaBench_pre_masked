
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_20__ {scalar_t__ len; int data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_18__ {int * last; } ;
struct TYPE_19__ {TYPE_3__ headers; } ;
struct TYPE_17__ {int status; } ;
struct TYPE_21__ {TYPE_4__ headers_in; TYPE_2__ headers_out; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_16__ {scalar_t__ len; int data; } ;
struct TYPE_22__ {int (* handler ) (TYPE_6__*,TYPE_8__*,TYPE_5__*) ;scalar_t__ offset; TYPE_1__ name; } ;
typedef TYPE_7__ ngx_http_lua_set_header_t ;
struct TYPE_23__ {int no_override; int (* handler ) (TYPE_6__*,TYPE_8__*,TYPE_5__*) ;scalar_t__ offset; TYPE_5__ key; int hash; } ;
typedef TYPE_8__ ngx_http_lua_header_val_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_7__* VAR_2 ;
 scalar_t__ FUNC_2 (int ,int,scalar_t__) ;
 int FUNC_3 (TYPE_6__*,TYPE_8__*,TYPE_5__*) ;

ngx_int_t
FUNC_4(ngx_http_request_t *VAR_3, ngx_str_t VAR_4,
    ngx_str_t VAR_5, unsigned VAR_6)
{
    ngx_http_lua_header_val_t VAR_7;
    ngx_http_lua_set_header_t *VAR_8 = VAR_2;

    ngx_uint_t VAR_9;

    FUNC_0("set header value: %.*s", (int) VAR_5.len, VAR_5.data);

    VAR_7.hash = FUNC_1(VAR_4.data, VAR_4.len);
    VAR_7.key = VAR_4;

    VAR_7.offset = 0;
    VAR_7.no_override = !VAR_6;
    VAR_7.handler = ((void*)0);

    for (VAR_9 = 0; VAR_8[VAR_9].name.len; VAR_9++) {
        if (VAR_7.key.len != VAR_8[VAR_9].name.len
            || FUNC_2(VAR_7.key.data, VAR_8[VAR_9].name.data,
                               VAR_8[VAR_9].name.len) != 0)
        {
            FUNC_0("hv key comparison: %s <> %s", VAR_8[VAR_9].name.data,
               VAR_7.key.data);

            continue;
        }

        FUNC_0("Matched handler: %s %s", VAR_8[VAR_9].name.data, VAR_7.key.data);

        VAR_7.offset = VAR_8[VAR_9].offset;
        VAR_7.handler = VAR_8[VAR_9].handler;

        break;
    }

    if (VAR_8[VAR_9].name.len == 0 && VAR_8[VAR_9].handler) {
        VAR_7.offset = VAR_8[VAR_9].offset;
        VAR_7.handler = VAR_8[VAR_9].handler;
    }


    if (VAR_7.handler == ((void*)0)) {
        return VAR_0;
    }


    if (VAR_3->headers_out.status == 400 || VAR_3->headers_in.headers.last == ((void*)0)) {

        return VAR_1;
    }

    return VAR_7.handler(VAR_3, &VAR_7, &VAR_5);
}
