
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_11__ {int ip; TYPE_2__* request; TYPE_3__* sp; } ;
typedef TYPE_4__ ngx_http_script_engine_t ;
struct TYPE_9__ {TYPE_1__* connection; } ;
struct TYPE_8__ {int log; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

void
FUNC_2(ngx_http_script_engine_t *VAR_3)
{
    ngx_http_variable_value_t *VAR_4, *VAR_5;

    FUNC_0(VAR_0, VAR_3->request->connection->log, 0,
                   "http script equal");

    VAR_3->sp--;
    VAR_4 = VAR_3->sp;
    VAR_5 = VAR_3->sp - 1;

    VAR_3->ip += sizeof(uintptr_t);

    if (VAR_4->len == VAR_5->len
        && FUNC_1(VAR_4->data, VAR_5->data, VAR_5->len) == 0)
    {
        *VAR_5 = VAR_2;
        return;
    }

    FUNC_0(VAR_0, VAR_3->request->connection->log, 0,
                   "http script equal: no");

    *VAR_5 = VAR_1;
}
