
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_8__ {int fastcgi_params; } ;
typedef TYPE_2__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_9__ {TYPE_1__* args; } ;
typedef TYPE_3__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_7__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_3, ngx_command_t *VAR_4,
    void *VAR_5)
{
    ngx_str_t *VAR_6, *VAR_7, *VAR_8;
    ngx_http_upstream_check_srv_conf_t *VAR_9;

    VAR_6 = VAR_3->args->elts;

    VAR_9 = FUNC_1(VAR_3,
                                              VAR_2);

    VAR_7 = FUNC_0(VAR_9->fastcgi_params);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8 = FUNC_0(VAR_9->fastcgi_params);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_7 = VAR_6[1];
    *VAR_8 = VAR_6[2];

    return VAR_1;
}
