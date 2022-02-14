
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int not_found; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_12__ {int index; } ;
typedef TYPE_3__ ngx_http_script_var_code_t ;
struct TYPE_13__ {TYPE_2__* sp; TYPE_9__* request; scalar_t__ ip; } ;
typedef TYPE_4__ ngx_http_script_engine_t ;
struct TYPE_14__ {TYPE_1__* connection; } ;
struct TYPE_10__ {int log; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_9__*,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_2__*) ;

void
FUNC_3(ngx_http_script_engine_t *VAR_2)
{
    ngx_http_variable_value_t *VAR_3;
    ngx_http_script_var_code_t *VAR_4;

    FUNC_1(VAR_0, VAR_2->request->connection->log, 0,
                   "http script var");

    VAR_4 = (ngx_http_script_var_code_t *) VAR_2->ip;

    VAR_2->ip += sizeof(ngx_http_script_var_code_t);

    VAR_3 = FUNC_0(VAR_2->request, VAR_4->index);

    if (VAR_3 && !VAR_3->not_found) {
        FUNC_2(VAR_0, VAR_2->request->connection->log, 0,
                       "http script var: \"%v\"", VAR_3);

        *VAR_2->sp = *VAR_3;
        VAR_2->sp++;

        return;
    }

    *VAR_2->sp = VAR_1;
    VAR_2->sp++;
}
