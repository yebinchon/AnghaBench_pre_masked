
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ worker_processes; } ;
typedef TYPE_1__ ngx_core_conf_t ;
struct TYPE_4__ {int conf_ctx; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int
FUNC_1(void)
{
    ngx_core_conf_t *VAR_2;

    VAR_2 = (ngx_core_conf_t *) FUNC_0(VAR_1->conf_ctx,
                                           VAR_0);

    return (int) VAR_2->worker_processes;
}
