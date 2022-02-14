
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_5__ {scalar_t__ data; int get_handler; } ;
typedef TYPE_1__ ngx_http_variable_t ;
struct TYPE_6__ {scalar_t__ index; } ;
typedef TYPE_2__ ngx_http_reqstat_conf_t ;
typedef int ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int *,int ) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_conf_t *VAR_4)
{
    ngx_str_t VAR_5 = FUNC_3("reqstat_enable");
    ngx_http_variable_t *VAR_6;
    ngx_http_reqstat_conf_t *VAR_7;

    VAR_7 = FUNC_1(VAR_4, VAR_2);

    VAR_6 = FUNC_0(VAR_4, &VAR_5, 0);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->get_handler = VAR_3;
    VAR_6->data = 0;

    VAR_7->index = FUNC_2(VAR_4, &VAR_5);

    if (VAR_7->index == VAR_0) {
        return VAR_0;
    }

    return VAR_1;
}
