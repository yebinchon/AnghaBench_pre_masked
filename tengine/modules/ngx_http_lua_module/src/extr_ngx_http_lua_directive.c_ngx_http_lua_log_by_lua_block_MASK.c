
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* handler_conf; int handler; } ;
typedef TYPE_1__ ngx_conf_t ;
typedef int ngx_command_t ;


 char* FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;

char *
FUNC_1(ngx_conf_t *VAR_1, ngx_command_t *VAR_2,
    void *VAR_3)
{
    char *VAR_4;
    ngx_conf_t VAR_5;

    VAR_5 = *VAR_1;
    VAR_1->handler = VAR_0;
    VAR_1->handler_conf = VAR_3;

    VAR_4 = FUNC_0(VAR_1, VAR_2);

    *VAR_1 = VAR_5;

    return VAR_4;
}
