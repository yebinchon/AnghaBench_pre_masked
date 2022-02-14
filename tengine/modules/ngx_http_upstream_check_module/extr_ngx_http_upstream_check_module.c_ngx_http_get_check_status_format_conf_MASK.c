
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_8__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_7__ {scalar_t__ len; int data; } ;
struct TYPE_9__ {TYPE_1__ format; } ;
typedef TYPE_3__ ngx_check_status_conf_t ;


 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static ngx_check_status_conf_t *
FUNC_1(ngx_str_t *VAR_1)
{
    ngx_uint_t VAR_2;

    for (VAR_2 = 0; ; VAR_2++) {

        if (VAR_0[VAR_2].format.len == 0) {
            break;
        }

        if (VAR_1->len != VAR_0[VAR_2].format.len) {
            continue;
        }

        if (FUNC_0(VAR_1->data, VAR_0[VAR_2].format.data,
                        VAR_1->len) == 0)
        {
            return &VAR_0[VAR_2];
        }
    }

    return ((void*)0);
}
