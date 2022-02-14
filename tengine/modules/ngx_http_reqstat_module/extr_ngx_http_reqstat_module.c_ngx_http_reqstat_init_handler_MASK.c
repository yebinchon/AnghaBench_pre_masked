
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_15__ {TYPE_1__* variables; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_http_reqstat_store_t ;
struct TYPE_16__ {size_t index; } ;
typedef TYPE_3__ ngx_http_reqstat_conf_t ;
struct TYPE_14__ {scalar_t__ valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*,size_t) ;
 int * FUNC_1 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;
 int * FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_3)
{
    ngx_http_reqstat_conf_t *VAR_4, *VAR_5;
    ngx_http_reqstat_store_t *VAR_6;

    VAR_6 = FUNC_1(VAR_3, VAR_2);
    VAR_4 = FUNC_3(VAR_3, VAR_2);
    VAR_5 = FUNC_2(VAR_3, VAR_2);

    if (VAR_6 == ((void*)0)) {
        if (VAR_3->variables[VAR_4->index].valid) {
            return VAR_0;
        }

        VAR_6 = FUNC_4(VAR_3, VAR_5);
        if (VAR_6 == ((void*)0)) {
            return VAR_1;
        }

        FUNC_5(VAR_3, VAR_6, VAR_2);
    }

    if (FUNC_0(VAR_3, VAR_4->index) == ((void*)0)) {
        return VAR_1;
    }

    return VAR_0;
}
