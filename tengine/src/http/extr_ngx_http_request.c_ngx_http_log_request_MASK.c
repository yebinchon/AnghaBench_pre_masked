
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_http_request_t ;
typedef int (* ngx_http_handler_pt ) (int *) ;
struct TYPE_7__ {TYPE_2__* phases; } ;
typedef TYPE_3__ ngx_http_core_main_conf_t ;
struct TYPE_5__ {size_t nelts; int (* elts ) (int *) ;} ;
struct TYPE_6__ {TYPE_1__ handlers; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(ngx_http_request_t *VAR_2)
{
    ngx_uint_t VAR_3, VAR_4;
    ngx_http_handler_pt *VAR_5;
    ngx_http_core_main_conf_t *VAR_6;

    VAR_6 = FUNC_0(VAR_2, VAR_1);

    VAR_5 = &VAR_6->phases[VAR_0].handlers.elts;
    VAR_4 = VAR_6->phases[VAR_0].handlers.nelts;

    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
        VAR_5[VAR_3](VAR_2);
    }
}
