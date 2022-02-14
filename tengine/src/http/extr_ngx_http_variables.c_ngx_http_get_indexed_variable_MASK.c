
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_15__ {int not_found; int no_cacheable; scalar_t__ valid; } ;
typedef TYPE_3__ ngx_http_variable_value_t ;
struct TYPE_16__ {scalar_t__ (* get_handler ) (TYPE_5__*,TYPE_3__*,int ) ;int flags; int data; int name; } ;
typedef TYPE_4__ ngx_http_variable_t ;
struct TYPE_17__ {TYPE_3__* variables; TYPE_2__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_13__ {size_t nelts; TYPE_4__* elts; } ;
struct TYPE_18__ {TYPE_1__ variables; } ;
typedef TYPE_6__ ngx_http_core_main_conf_t ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_6__* FUNC_0 (TYPE_5__*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,int ,char*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_3__*,int ) ;

ngx_http_variable_value_t *
FUNC_3(ngx_http_request_t *VAR_6, ngx_uint_t VAR_7)
{
    ngx_http_variable_t *VAR_8;
    ngx_http_core_main_conf_t *VAR_9;

    VAR_9 = FUNC_0(VAR_6, VAR_4);

    if (VAR_9->variables.nelts <= VAR_7) {
        FUNC_1(VAR_1, VAR_6->connection->log, 0,
                      "unknown variable index: %ui", VAR_7);
        return ((void*)0);
    }

    if (VAR_6->variables[VAR_7].not_found || VAR_6->variables[VAR_7].valid) {
        return &VAR_6->variables[VAR_7];
    }

    VAR_8 = VAR_9->variables.elts;

    if (VAR_5 == 0) {
        FUNC_1(VAR_2, VAR_6->connection->log, 0,
                      "cycle while evaluating variable \"%V\"",
                      &VAR_8[VAR_7].name);
        return ((void*)0);
    }

    VAR_5--;

    if (VAR_8[VAR_7].get_handler(VAR_6, &VAR_6->variables[VAR_7], VAR_8[VAR_7].data)
        == VAR_3)
    {
        VAR_5++;

        if (VAR_8[VAR_7].flags & VAR_0) {
            VAR_6->variables[VAR_7].no_cacheable = 1;
        }

        return &VAR_6->variables[VAR_7];
    }

    VAR_5++;

    VAR_6->variables[VAR_7].valid = 0;
    VAR_6->variables[VAR_7].not_found = 1;

    return ((void*)0);
}
