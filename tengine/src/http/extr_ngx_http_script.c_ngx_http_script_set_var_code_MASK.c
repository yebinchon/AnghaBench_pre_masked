
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int name; } ;
typedef TYPE_5__ ngx_http_variable_t ;
struct TYPE_18__ {size_t index; } ;
typedef TYPE_6__ ngx_http_script_var_code_t ;
struct TYPE_19__ {TYPE_8__* request; TYPE_2__* sp; scalar_t__ ip; } ;
typedef TYPE_7__ ngx_http_script_engine_t ;
struct TYPE_20__ {TYPE_4__* connection; TYPE_1__* variables; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_15__ {TYPE_5__* elts; } ;
struct TYPE_21__ {TYPE_3__ variables; } ;
typedef TYPE_9__ ngx_http_core_main_conf_t ;
struct TYPE_16__ {int log; } ;
struct TYPE_14__ {int data; int len; } ;
struct TYPE_13__ {int valid; int data; scalar_t__ not_found; scalar_t__ no_cacheable; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_9__* FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;

void
FUNC_2(ngx_http_script_engine_t *VAR_2)
{
    ngx_http_request_t *VAR_3;
    ngx_http_script_var_code_t *VAR_4;

    VAR_4 = (ngx_http_script_var_code_t *) VAR_2->ip;

    VAR_2->ip += sizeof(ngx_http_script_var_code_t);

    VAR_3 = VAR_2->request;

    VAR_2->sp--;

    VAR_3->variables[VAR_4->index].len = VAR_2->sp->len;
    VAR_3->variables[VAR_4->index].valid = 1;
    VAR_3->variables[VAR_4->index].no_cacheable = 0;
    VAR_3->variables[VAR_4->index].not_found = 0;
    VAR_3->variables[VAR_4->index].data = VAR_2->sp->data;
}
