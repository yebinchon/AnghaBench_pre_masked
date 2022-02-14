
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_9__ {scalar_t__ text_data; int text_len; } ;
typedef TYPE_3__ ngx_http_script_value_code_t ;
struct TYPE_10__ {TYPE_5__* sp; TYPE_2__* request; scalar_t__ ip; } ;
typedef TYPE_4__ ngx_http_script_engine_t ;
struct TYPE_11__ {int * data; int len; } ;
struct TYPE_8__ {TYPE_1__* connection; } ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_5__*) ;

void
FUNC_1(ngx_http_script_engine_t *VAR_1)
{
    ngx_http_script_value_code_t *VAR_2;

    VAR_2 = (ngx_http_script_value_code_t *) VAR_1->ip;

    VAR_1->ip += sizeof(ngx_http_script_value_code_t);

    VAR_1->sp->len = VAR_2->text_len;
    VAR_1->sp->data = (u_char *) VAR_2->text_data;

    FUNC_0(VAR_0, VAR_1->request->connection->log, 0,
                   "http script value: \"%v\"", VAR_1->sp);

    VAR_1->sp++;
}
