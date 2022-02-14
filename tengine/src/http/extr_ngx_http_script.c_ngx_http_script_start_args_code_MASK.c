
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int is_args; int ip; int pos; int args; TYPE_2__* request; } ;
typedef TYPE_3__ ngx_http_script_engine_t ;
struct TYPE_6__ {TYPE_1__* connection; } ;
struct TYPE_5__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;

void
FUNC_1(ngx_http_script_engine_t *VAR_1)
{
    FUNC_0(VAR_0, VAR_1->request->connection->log, 0,
                   "http script args");

    VAR_1->is_args = 1;
    VAR_1->args = VAR_1->pos;
    VAR_1->ip += sizeof(uintptr_t);
}
