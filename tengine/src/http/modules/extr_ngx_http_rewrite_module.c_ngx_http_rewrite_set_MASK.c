
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {char* data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {scalar_t__ data; scalar_t__ set_handler; int * get_handler; } ;
typedef TYPE_3__ ngx_http_variable_t ;
struct TYPE_22__ {scalar_t__ data; scalar_t__ handler; int code; } ;
typedef TYPE_4__ ngx_http_script_var_handler_code_t ;
struct TYPE_23__ {uintptr_t index; int code; } ;
typedef TYPE_5__ ngx_http_script_var_code_t ;
struct TYPE_24__ {int codes; } ;
typedef TYPE_6__ ngx_http_rewrite_loc_conf_t ;
struct TYPE_25__ {int pool; TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_19__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_7__*,int ,char*,TYPE_2__*) ;
 TYPE_3__* FUNC_1 (TYPE_7__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_7__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*,TYPE_6__*,TYPE_2__*) ;
 int * VAR_6 ;
 int VAR_7 ;
 void* FUNC_4 (int ,int *,int) ;
 int VAR_8 ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_9, ngx_command_t *VAR_10, void *VAR_11)
{
    ngx_http_rewrite_loc_conf_t *VAR_12 = VAR_11;

    ngx_int_t VAR_13;
    ngx_str_t *VAR_14;
    ngx_http_variable_t *VAR_15;
    ngx_http_script_var_code_t *VAR_16;
    ngx_http_script_var_handler_code_t *VAR_17;

    VAR_14 = VAR_9->args->elts;

    if (VAR_14[1].data[0] != '$') {
        FUNC_0(VAR_5, VAR_9, 0,
                           "invalid variable name \"%V\"", &VAR_14[1]);
        return VAR_0;
    }

    VAR_14[1].len--;
    VAR_14[1].data++;

    VAR_15 = FUNC_1(VAR_9, &VAR_14[1],
                              VAR_3|VAR_4);
    if (VAR_15 == ((void*)0)) {
        return VAR_0;
    }

    VAR_13 = FUNC_2(VAR_9, &VAR_14[1]);
    if (VAR_13 == VAR_2) {
        return VAR_0;
    }

    if (VAR_15->get_handler == ((void*)0)) {
        VAR_15->get_handler = VAR_6;
        VAR_15->data = VAR_13;
    }

    if (FUNC_3(VAR_9, VAR_12, &VAR_14[2]) != VAR_1) {
        return VAR_0;
    }

    if (VAR_15->set_handler) {
        VAR_17 = FUNC_4(VAR_9->pool, &VAR_12->codes,
                                   sizeof(ngx_http_script_var_handler_code_t));
        if (VAR_17 == ((void*)0)) {
            return VAR_0;
        }

        VAR_17->code = VAR_8;
        VAR_17->handler = VAR_15->set_handler;
        VAR_17->data = VAR_15->data;

        return VAR_1;
    }

    VAR_16 = FUNC_4(VAR_9->pool, &VAR_12->codes,
                                       sizeof(ngx_http_script_var_code_t));
    if (VAR_16 == ((void*)0)) {
        return VAR_0;
    }

    VAR_16->code = VAR_7;
    VAR_16->index = (uintptr_t) VAR_13;

    return VAR_1;
}
