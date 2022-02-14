
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_15__ {scalar_t__ len; int data; } ;
struct TYPE_13__ {scalar_t__ len; int data; } ;
struct TYPE_14__ {scalar_t__ hash; TYPE_5__ value; TYPE_3__ key; } ;
typedef TYPE_4__ ngx_table_elt_t ;
typedef TYPE_5__ ngx_str_t ;
struct TYPE_16__ {size_t nelts; TYPE_4__* elts; struct TYPE_16__* next; } ;
typedef TYPE_6__ ngx_list_part_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {TYPE_6__ part; } ;
struct TYPE_12__ {TYPE_1__ headers; } ;
struct TYPE_17__ {TYPE_2__ headers_in; } ;
typedef TYPE_7__ ngx_http_request_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

ngx_int_t
FUNC_1(ngx_http_request_t *VAR_2, ngx_str_t *VAR_3,
    ngx_str_t *VAR_4)
{
    ngx_uint_t VAR_5;
    ngx_list_part_t *VAR_6;
    ngx_table_elt_t *VAR_7;

    VAR_6 = &VAR_2->headers_in.headers.part;
    VAR_7 = VAR_6->elts;

    for (VAR_5 = 0; ; VAR_5++) {

        if (VAR_5 >= VAR_6->nelts) {
            if (VAR_6->next == ((void*)0)) {
                break;
            }

            VAR_6 = VAR_6->next;
            VAR_7 = VAR_6->elts;
            VAR_5 = 0;
        }

        if (VAR_7[VAR_5].hash == 0) {
            continue;
        }

        if (VAR_3->len == VAR_7[VAR_5].key.len
            && FUNC_0(VAR_7[VAR_5].key.data, VAR_3->data,
                               VAR_3->len) == 0)
        {
            *VAR_4 = VAR_7[VAR_5].value;
            return VAR_1;
        }
    }

    return VAR_0;
}
