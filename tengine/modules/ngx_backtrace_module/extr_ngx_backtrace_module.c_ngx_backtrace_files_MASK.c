
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* cycle; } ;
typedef TYPE_2__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_8__ {int log; } ;
typedef TYPE_3__ ngx_backtrace_conf_t ;
struct TYPE_6__ {int conf_ctx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 char* FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_1, ngx_command_t *VAR_2,
    void *VAR_3)
{
    ngx_backtrace_conf_t *VAR_4;

    VAR_4 = (ngx_backtrace_conf_t *) FUNC_0(VAR_1->cycle->conf_ctx,
                                                VAR_0);

    return FUNC_1(VAR_1, &VAR_4->log);
}
