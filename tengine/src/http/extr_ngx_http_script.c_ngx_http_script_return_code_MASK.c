
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ len; } ;
struct TYPE_9__ {scalar_t__ lengths; TYPE_1__ value; } ;
struct TYPE_7__ {scalar_t__ status; TYPE_4__ text; } ;
typedef TYPE_2__ ngx_http_script_return_code_t ;
struct TYPE_8__ {scalar_t__ status; scalar_t__ ip; int request; } ;
typedef TYPE_3__ ngx_http_script_engine_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int *,TYPE_4__*) ;

void
FUNC_1(ngx_http_script_engine_t *VAR_2)
{
    ngx_http_script_return_code_t *VAR_3;

    VAR_3 = (ngx_http_script_return_code_t *) VAR_2->ip;

    if (VAR_3->status < VAR_0
        || VAR_3->text.value.len
        || VAR_3->text.lengths)
    {
        VAR_2->status = FUNC_0(VAR_2->request, VAR_3->status, ((void*)0),
                                           &VAR_3->text);
    } else {
        VAR_2->status = VAR_3->status;
    }

    VAR_2->ip = VAR_1;
}
