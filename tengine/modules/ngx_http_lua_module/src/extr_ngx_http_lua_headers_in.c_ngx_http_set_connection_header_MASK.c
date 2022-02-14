
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_8__ {int keep_alive_n; scalar_t__ connection_type; } ;
struct TYPE_10__ {TYPE_1__ headers_in; } ;
typedef TYPE_3__ ngx_http_request_t ;
typedef int ngx_http_lua_header_val_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_request_t *VAR_2,
    ngx_http_lua_header_val_t *VAR_3, ngx_str_t *VAR_4)
{
    VAR_2->headers_in.connection_type = 0;

    if (VAR_4->len == 0) {
        return FUNC_0(VAR_2, VAR_3, VAR_4);
    }

    if (FUNC_1(VAR_4->data, "close", 5 - 1)) {
        VAR_2->headers_in.connection_type = VAR_0;
        VAR_2->headers_in.keep_alive_n = -1;

    } else if (FUNC_1(VAR_4->data, "keep-alive", 10 - 1)) {
        VAR_2->headers_in.connection_type = VAR_1;
    }

    return FUNC_0(VAR_2, VAR_3, VAR_4);
}
