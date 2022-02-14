
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ len; int data; } ;
typedef TYPE_6__ ngx_str_t ;
typedef size_t ngx_int_t ;
struct TYPE_20__ {TYPE_5__* name; } ;
typedef TYPE_7__ ngx_event_module_t ;
struct TYPE_21__ {scalar_t__ use; int name; } ;
typedef TYPE_8__ ngx_event_conf_t ;
struct TYPE_22__ {TYPE_4__* cycle; TYPE_1__* args; } ;
typedef TYPE_9__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_18__ {scalar_t__ len; int data; } ;
struct TYPE_17__ {TYPE_3__** modules; TYPE_2__* old_cycle; } ;
struct TYPE_16__ {scalar_t__ type; scalar_t__ ctx_index; TYPE_7__* ctx; } ;
struct TYPE_15__ {scalar_t__ conf_ctx; } ;
struct TYPE_14__ {TYPE_6__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,TYPE_9__*,int ,char*,TYPE_6__*,...) ;
 int VAR_6 ;
 TYPE_8__* FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_8, ngx_command_t *VAR_9, void *VAR_10)
{
    ngx_event_conf_t *VAR_11 = VAR_10;

    ngx_int_t VAR_12;
    ngx_str_t *VAR_13;
    ngx_event_conf_t *VAR_14;
    ngx_event_module_t *VAR_15;

    if (VAR_11->use != VAR_2) {
        return "is duplicate";
    }

    VAR_13 = VAR_8->args->elts;

    if (VAR_8->cycle->old_cycle->conf_ctx) {
        VAR_14 = FUNC_1(VAR_8->cycle->old_cycle->conf_ctx,
                                     VAR_6);
    } else {
        VAR_14 = ((void*)0);
    }


    for (VAR_12 = 0; VAR_8->cycle->modules[VAR_12]; VAR_12++) {
        if (VAR_8->cycle->modules[VAR_12]->type != VAR_3) {
            continue;
        }

        VAR_15 = VAR_8->cycle->modules[VAR_12]->ctx;
        if (VAR_15->name->len == VAR_13[1].len) {
            if (FUNC_2(VAR_15->name->data, VAR_13[1].data) == 0) {
                VAR_11->use = VAR_8->cycle->modules[VAR_12]->ctx_index;
                VAR_11->name = VAR_15->name->data;

                if (VAR_7 == VAR_5
                    && VAR_14
                    && VAR_14->use != VAR_11->use)
                {
                    FUNC_0(VAR_4, VAR_8, 0,
                               "when the server runs without a master process "
                               "the \"%V\" event type must be the same as "
                               "in previous configuration - \"%s\" "
                               "and it cannot be changed on the fly, "
                               "to change it you need to stop server "
                               "and start it again",
                               &VAR_13[1], VAR_14->name);

                    return VAR_0;
                }

                return VAR_1;
            }
        }
    }

    FUNC_0(VAR_4, VAR_8, 0,
                       "invalid event type \"%V\"", &VAR_13[1]);

    return VAR_0;
}
