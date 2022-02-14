
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_11__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {scalar_t__ content_length_n; } ;
struct TYPE_12__ {TYPE_1__ headers_in; } ;
typedef TYPE_3__ ngx_http_request_t ;
typedef int ngx_http_lua_header_val_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *,TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_1,
    ngx_http_lua_header_val_t *VAR_2, ngx_str_t *VAR_3)
{
    off_t VAR_4;

    if (VAR_3->len == 0) {
        return FUNC_2(VAR_1, VAR_2, VAR_3);
    }

    VAR_4 = FUNC_1(VAR_3->data, VAR_3->len);
    if (VAR_4 == VAR_0) {
        return VAR_0;
    }

    FUNC_0("reset headers_in.content_length_n to %d", (int) VAR_4);

    VAR_1->headers_in.content_length_n = VAR_4;

    return FUNC_3(VAR_1, VAR_2, VAR_3);
}
