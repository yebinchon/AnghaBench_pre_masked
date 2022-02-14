
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_3__ {int get_handler; } ;
typedef TYPE_1__ ngx_http_variable_t ;
typedef int ngx_conf_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_conf_t *VAR_4)
{
    ngx_http_variable_t *VAR_5;

    VAR_5 = FUNC_0(VAR_4, &VAR_2, 0);
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5->get_handler = VAR_3;

    return VAR_1;
}
