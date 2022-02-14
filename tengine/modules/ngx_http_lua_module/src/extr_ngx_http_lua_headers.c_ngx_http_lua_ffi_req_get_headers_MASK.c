
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_19__ {scalar_t__ len; int data; } ;
struct TYPE_17__ {scalar_t__ len; int data; } ;
struct TYPE_20__ {TYPE_6__ value; TYPE_4__ key; int lowcase_key; } ;
typedef TYPE_7__ ngx_table_elt_t ;
struct TYPE_21__ {size_t nelts; TYPE_7__* elts; struct TYPE_21__* next; } ;
typedef TYPE_8__ ngx_list_part_t ;
struct TYPE_14__ {TYPE_8__ part; } ;
struct TYPE_15__ {TYPE_1__ headers; } ;
struct TYPE_22__ {TYPE_2__ headers_in; } ;
typedef TYPE_9__ ngx_http_request_t ;
struct TYPE_18__ {int len; int data; } ;
struct TYPE_16__ {int len; int data; } ;
struct TYPE_13__ {TYPE_5__ value; TYPE_3__ key; } ;
typedef TYPE_10__ ngx_http_lua_ffi_table_elt_t ;


 int VAR_0 ;

int
FUNC_0(ngx_http_request_t *VAR_1,
    ngx_http_lua_ffi_table_elt_t *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    ngx_uint_t VAR_6;
    ngx_list_part_t *VAR_7;
    ngx_table_elt_t *VAR_8;

    if (VAR_3 <= 0) {
        return VAR_0;
    }

    VAR_5 = 0;
    VAR_7 = &VAR_1->headers_in.headers.part;
    VAR_8 = VAR_7->elts;

    for (VAR_6 = 0; ; VAR_6++) {

        if (VAR_6 >= VAR_7->nelts) {
            if (VAR_7->next == ((void*)0)) {
                break;
            }

            VAR_7 = VAR_7->next;
            VAR_8 = VAR_7->elts;
            VAR_6 = 0;
        }

        if (VAR_4) {
            VAR_2[VAR_5].key.data = VAR_8[VAR_6].key.data;
            VAR_2[VAR_5].key.len = (int) VAR_8[VAR_6].key.len;

        } else {
            VAR_2[VAR_5].key.data = VAR_8[VAR_6].lowcase_key;
            VAR_2[VAR_5].key.len = (int) VAR_8[VAR_6].key.len;
        }

        VAR_2[VAR_5].value.data = VAR_8[VAR_6].value.data;
        VAR_2[VAR_5].value.len = (int) VAR_8[VAR_6].value.len;

        if (++VAR_5 == VAR_3) {
            return VAR_0;
        }
    }

    return VAR_0;
}
