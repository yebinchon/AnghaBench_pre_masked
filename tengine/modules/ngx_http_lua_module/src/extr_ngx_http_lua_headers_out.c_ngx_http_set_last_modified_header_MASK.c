
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {scalar_t__ last_modified_time; } ;
struct TYPE_12__ {TYPE_1__ headers_out; } ;
typedef TYPE_3__ ngx_http_request_t ;
typedef int ngx_http_lua_header_val_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_3__*,int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int *,TYPE_2__*) ;

__attribute__((used)) static ngx_int_t FUNC_4(ngx_http_request_t *VAR_0,
    ngx_http_lua_header_val_t *VAR_1, ngx_str_t *VAR_2)
{
    if (VAR_2->len == 0) {
        return FUNC_1(VAR_0, VAR_1, VAR_2);
    }

    VAR_0->headers_out.last_modified_time = FUNC_2(VAR_2->data,
                                                            VAR_2->len);

    FUNC_0("last modified time: %d", (int) VAR_0->headers_out.last_modified_time);

    return FUNC_3(VAR_0, VAR_1, VAR_2);
}
