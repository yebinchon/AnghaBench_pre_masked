
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_12__ {size_t len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {size_t content_type_len; int * content_type_lowcase; int content_type_hash; TYPE_2__ content_type; } ;
struct TYPE_13__ {TYPE_1__ headers_out; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_14__ {int hash; } ;
typedef TYPE_4__ ngx_http_lua_header_val_t ;


 int FUNC_0 (TYPE_3__*,TYPE_4__*,TYPE_2__*,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_0,
    ngx_http_lua_header_val_t *VAR_1, ngx_str_t *VAR_2)
{
    ngx_uint_t VAR_3;

    VAR_0->headers_out.content_type_len = VAR_2->len;


    for (VAR_3 = 0; VAR_3 < VAR_2->len; VAR_3++) {
        if (VAR_2->data[VAR_3] == ';') {
            VAR_0->headers_out.content_type_len = VAR_3;
            break;
        }
    }


    VAR_0->headers_out.content_type = *VAR_2;
    VAR_0->headers_out.content_type_hash = VAR_1->hash;
    VAR_0->headers_out.content_type_lowcase = ((void*)0);

    VAR_2->len = 0;

    return FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0), 1);
}
