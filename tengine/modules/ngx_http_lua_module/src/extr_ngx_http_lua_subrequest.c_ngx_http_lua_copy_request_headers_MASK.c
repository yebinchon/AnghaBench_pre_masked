
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_17__ {int data; scalar_t__ len; } ;
struct TYPE_16__ {int data; scalar_t__ len; } ;
struct TYPE_12__ {TYPE_8__ value; TYPE_7__ key; } ;
typedef TYPE_2__ ngx_table_elt_t ;
struct TYPE_13__ {size_t nelts; TYPE_2__* elts; struct TYPE_13__* next; } ;
typedef TYPE_3__ ngx_list_part_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {TYPE_3__ part; } ;
struct TYPE_11__ {TYPE_5__ headers; } ;
struct TYPE_14__ {TYPE_1__ headers_in; int pool; } ;
typedef TYPE_4__ ngx_http_request_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_7__,TYPE_8__,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int ,int,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_2, ngx_http_request_t *VAR_3)
{
    ngx_table_elt_t *VAR_4;
    ngx_list_part_t *VAR_5;
    ngx_uint_t VAR_6;

    if (FUNC_2(&VAR_2->headers_in.headers, VAR_2->pool, 20,
                      sizeof(ngx_table_elt_t)) != VAR_1)
    {
        return VAR_0;
    }

    FUNC_0("before: parent req headers count: %d",
       (int) VAR_3->headers_in.headers.part.nelts);

    VAR_5 = &VAR_3->headers_in.headers.part;
    VAR_4 = VAR_5->elts;

    for (VAR_6 = 0; ; VAR_6++) {

        if (VAR_6 >= VAR_5->nelts) {
            if (VAR_5->next == ((void*)0)) {
                break;
            }

            VAR_5 = VAR_5->next;
            VAR_4 = VAR_5->elts;
            VAR_6 = 0;
        }

        FUNC_0("setting request header %.*s: %.*s", (int) VAR_4[VAR_6].key.len,
           VAR_4[VAR_6].key.data, (int) VAR_4[VAR_6].value.len,
           VAR_4[VAR_6].value.data);

        if (FUNC_1(VAR_2, VAR_4[VAR_6].key,
                                          VAR_4[VAR_6].value, 0) == VAR_0)
        {
            return VAR_0;
        }
    }

    FUNC_0("after: parent req headers count: %d",
       (int) VAR_3->headers_in.headers.part.nelts);

    return VAR_1;
}
