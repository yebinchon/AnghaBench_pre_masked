
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_21__ {int * data; } ;
typedef TYPE_2__ ngx_http_variable_value_t ;
struct TYPE_22__ {TYPE_1__* variables; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_23__ {scalar_t__ bypass; TYPE_5__* conf; } ;
typedef TYPE_4__ ngx_http_reqstat_store_t ;
struct TYPE_24__ {size_t index; } ;
typedef TYPE_5__ ngx_http_reqstat_conf_t ;
struct TYPE_20__ {scalar_t__ valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,size_t) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_2 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_3 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_4 (TYPE_3__*,TYPE_5__*) ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_4,
    ngx_http_reqstat_conf_t **VAR_5, ngx_http_reqstat_store_t **VAR_6)
{
    ngx_http_reqstat_conf_t *VAR_7;
    ngx_http_reqstat_store_t *VAR_8;
    ngx_http_variable_value_t *VAR_9;

    VAR_7 = FUNC_3(VAR_4, VAR_3);
    if (VAR_4->variables[VAR_7->index].valid) {
        VAR_9 = FUNC_0(VAR_4, VAR_7->index);

        if (VAR_9->data[0] == '0') {
            return VAR_0;
        }

        VAR_8 = (ngx_http_reqstat_store_t *) (*((uintptr_t *) &VAR_9->data[1]));
        VAR_7 = VAR_8->conf;

    } else {
        VAR_7 = FUNC_2(VAR_4, VAR_3);

        VAR_8 = FUNC_1(VAR_4, VAR_3);

        if (VAR_8 == ((void*)0)) {
            VAR_8 = FUNC_4(VAR_4, VAR_7);
            if (VAR_8 == ((void*)0)) {
                return VAR_1;
            }
        }

        if (VAR_8->bypass) {
            return VAR_0;
        }
    }

    *VAR_5 = VAR_7;
    *VAR_6 = VAR_8;

    return VAR_2;
}
