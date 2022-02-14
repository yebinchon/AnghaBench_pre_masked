
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_int_t ;
typedef int ngx_http_handler_pt ;
struct TYPE_5__ {TYPE_1__* phases; } ;
typedef TYPE_2__ ngx_http_core_main_conf_t ;
typedef int ngx_conf_t ;
struct TYPE_4__ {int handlers; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_conf_t *VAR_6)
{
    ngx_http_handler_pt *VAR_7;
    ngx_http_core_main_conf_t *VAR_8;

    VAR_8 = FUNC_1(VAR_6, VAR_4);

    VAR_7 = FUNC_0(&VAR_8->phases[VAR_2].handlers);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_7 = VAR_5;

    VAR_7 = FUNC_0(&VAR_8->phases[VAR_1].handlers);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_7 = VAR_5;

    return VAR_3;
}
