
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char ngx_uint_t ;
struct TYPE_15__ {scalar_t__ data; scalar_t__ len; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_16__ {char nelts; TYPE_5__* elts; struct TYPE_16__* next; } ;
typedef TYPE_4__ ngx_list_part_t ;
struct TYPE_14__ {scalar_t__ len; int data; } ;
struct TYPE_17__ {char key; TYPE_3__ value; TYPE_2__ name; } ;
typedef TYPE_5__ ngx_http_ssi_var_t ;
struct TYPE_18__ {char ncaptures; scalar_t__ captures_data; scalar_t__* captures; TYPE_1__* variables; } ;
typedef TYPE_6__ ngx_http_ssi_ctx_t ;
struct TYPE_19__ {int pool; int main; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_13__ {TYPE_4__ part; } ;


 TYPE_6__* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static ngx_str_t *
FUNC_3(ngx_http_request_t *VAR_1, ngx_str_t *VAR_2,
    ngx_uint_t VAR_3)
{
    ngx_uint_t VAR_4;
    ngx_list_part_t *VAR_5;
    ngx_http_ssi_var_t *VAR_6;
    ngx_http_ssi_ctx_t *VAR_7;

    VAR_7 = FUNC_0(VAR_1->main, VAR_0);
    if (VAR_7->variables == ((void*)0)) {
        return ((void*)0);
    }

    VAR_5 = &VAR_7->variables->part;
    VAR_6 = VAR_5->elts;

    for (VAR_4 = 0; ; VAR_4++) {

        if (VAR_4 >= VAR_5->nelts) {
            if (VAR_5->next == ((void*)0)) {
                break;
            }

            VAR_5 = VAR_5->next;
            VAR_6 = VAR_5->elts;
            VAR_4 = 0;
        }

        if (VAR_2->len != VAR_6[VAR_4].name.len) {
            continue;
        }

        if (VAR_3 != VAR_6[VAR_4].key) {
            continue;
        }

        if (FUNC_2(VAR_2->data, VAR_6[VAR_4].name.data, VAR_2->len) == 0) {
            return &VAR_6[VAR_4].value;
        }
    }

    return ((void*)0);
}
