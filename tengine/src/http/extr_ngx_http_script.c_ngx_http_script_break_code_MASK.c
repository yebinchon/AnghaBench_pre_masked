
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ip; TYPE_1__* request; } ;
typedef TYPE_2__ ngx_http_script_engine_t ;
struct TYPE_4__ {scalar_t__ uri_changed; } ;


 int VAR_0 ;

void
FUNC_0(ngx_http_script_engine_t *VAR_1)
{
    VAR_1->request->uri_changed = 0;

    VAR_1->ip = VAR_0;
}
