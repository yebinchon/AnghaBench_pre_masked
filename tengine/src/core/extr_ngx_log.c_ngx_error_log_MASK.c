
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_log_t ;
struct TYPE_6__ {TYPE_1__* cycle; } ;
typedef TYPE_2__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_5__ {int new_log; } ;


 char* FUNC_0 (TYPE_2__*,int **) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_0, ngx_command_t *VAR_1, void *VAR_2)
{
    ngx_log_t *VAR_3;

    VAR_3 = &VAR_0->cycle->new_log;

    return FUNC_0(VAR_0, &VAR_3);
}
