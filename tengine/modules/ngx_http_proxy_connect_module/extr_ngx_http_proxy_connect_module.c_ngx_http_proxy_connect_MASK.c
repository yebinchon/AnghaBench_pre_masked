
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int accept_connect; } ;
typedef TYPE_1__ ngx_http_proxy_connect_loc_conf_t ;
struct TYPE_4__ {int handler; } ;
typedef TYPE_2__ ngx_http_core_loc_conf_t ;
typedef int ngx_conf_t ;
typedef int ngx_command_t ;


 char* VAR_0 ;
 void* FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_http_core_loc_conf_t *VAR_7;
    ngx_http_proxy_connect_loc_conf_t *VAR_8;

    VAR_7 = FUNC_0(VAR_4, VAR_1);
    VAR_7->handler = VAR_2;

    VAR_8 = FUNC_0(VAR_4, VAR_3);
    VAR_8->accept_connect = 1;

    return VAR_0;
}
