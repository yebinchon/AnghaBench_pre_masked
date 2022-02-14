
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_10__ {int * resolver; } ;
typedef TYPE_3__ ngx_mail_core_srv_conf_t ;
struct TYPE_11__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_8__ {scalar_t__ nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (TYPE_4__*,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    ngx_mail_core_srv_conf_t *VAR_6 = VAR_5;

    ngx_str_t *VAR_7;

    VAR_7 = VAR_3->args->elts;

    if (VAR_6->resolver != VAR_2) {
        return "is duplicate";
    }

    if (FUNC_1(VAR_7[1].data, "off") == 0) {
        VAR_6->resolver = ((void*)0);
        return VAR_1;
    }

    VAR_6->resolver = FUNC_0(VAR_3, &VAR_7[1], VAR_3->args->nelts - 1);
    if (VAR_6->resolver == ((void*)0)) {
        return VAR_0;
    }

    return VAR_1;
}
