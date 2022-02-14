
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_7__ {int * passwords; } ;
typedef TYPE_2__ ngx_http_ssl_srv_conf_t ;
struct TYPE_8__ {TYPE_1__* args; } ;
typedef TYPE_3__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_6__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (TYPE_3__*,int *) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    ngx_http_ssl_srv_conf_t *VAR_6 = VAR_5;

    ngx_str_t *VAR_7;

    if (VAR_6->passwords != VAR_2) {
        return "is duplicate";
    }

    VAR_7 = VAR_3->args->elts;

    VAR_6->passwords = FUNC_0(VAR_3, &VAR_7[1]);

    if (VAR_6->passwords == ((void*)0)) {
        return VAR_0;
    }

    return VAR_1;
}
