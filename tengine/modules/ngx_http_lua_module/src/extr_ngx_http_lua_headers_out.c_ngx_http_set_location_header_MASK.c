
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* data; scalar_t__ len; } ;
struct TYPE_9__ {TYPE_2__ value; } ;
typedef TYPE_3__ ngx_table_elt_t ;
typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {TYPE_3__* location; } ;
struct TYPE_10__ {TYPE_1__ headers_out; } ;
typedef TYPE_4__ ngx_http_request_t ;
typedef int ngx_http_lua_header_val_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_1,
    ngx_http_lua_header_val_t *VAR_2, ngx_str_t *VAR_3)
{
    ngx_int_t VAR_4;
    ngx_table_elt_t *VAR_5;

    VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
    if (VAR_4 != VAR_0) {
        return VAR_4;
    }






    VAR_5 = VAR_1->headers_out.location;
    if (VAR_5 && VAR_5->value.len && VAR_5->value.data[0] == '/') {
        VAR_1->headers_out.location = ((void*)0);
    }

    return VAR_0;
}
