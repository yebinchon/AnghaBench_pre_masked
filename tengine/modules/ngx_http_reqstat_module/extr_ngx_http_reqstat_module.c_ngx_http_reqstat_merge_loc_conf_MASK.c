
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user_defined_str; int user_select; int display; int monitor; int bypass; int lazy; } ;
typedef TYPE_1__ ngx_http_reqstat_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_1, void *VAR_2,
    void *VAR_3)
{
    ngx_http_reqstat_conf_t *VAR_4 = VAR_3;
    ngx_http_reqstat_conf_t *VAR_5 = VAR_2;

    FUNC_1(VAR_4->lazy, VAR_5->lazy, 0);
    FUNC_0(VAR_4->bypass, VAR_5->bypass, ((void*)0));
    FUNC_0(VAR_4->monitor, VAR_5->monitor, ((void*)0));
    FUNC_0(VAR_4->display, VAR_5->display, ((void*)0));
    FUNC_0(VAR_4->user_select, VAR_5->user_select, ((void*)0));
    FUNC_0(VAR_4->user_defined_str, VAR_5->user_defined_str, ((void*)0));

    return VAR_0;
}
