
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vars; int uri; } ;
typedef TYPE_1__ ngx_http_auth_request_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_http_auth_request_conf_t *VAR_4 = VAR_2;
    ngx_http_auth_request_conf_t *VAR_5 = VAR_3;

    FUNC_1(VAR_5->uri, VAR_4->uri, "");
    FUNC_0(VAR_5->vars, VAR_4->vars, ((void*)0));

    return VAR_0;
}
