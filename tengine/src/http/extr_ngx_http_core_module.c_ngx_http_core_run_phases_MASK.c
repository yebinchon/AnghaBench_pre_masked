
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {size_t phase_handler; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_12__ {scalar_t__ (* checker ) (TYPE_2__*,TYPE_3__*) ;} ;
typedef TYPE_3__ ngx_http_phase_handler_t ;
struct TYPE_10__ {TYPE_3__* handlers; } ;
struct TYPE_13__ {TYPE_1__ phase_engine; } ;
typedef TYPE_4__ ngx_http_core_main_conf_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*) ;

void
FUNC_2(ngx_http_request_t *VAR_2)
{
    ngx_int_t VAR_3;
    ngx_http_phase_handler_t *VAR_4;
    ngx_http_core_main_conf_t *VAR_5;

    VAR_5 = FUNC_0(VAR_2, VAR_1);

    VAR_4 = VAR_5->phase_engine.handlers;

    while (VAR_4[VAR_2->phase_handler].checker) {

        VAR_3 = VAR_4[VAR_2->phase_handler].checker(VAR_2, &VAR_4[VAR_2->phase_handler]);

        if (VAR_3 == VAR_0) {
            return;
        }
    }
}
