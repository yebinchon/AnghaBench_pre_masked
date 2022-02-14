
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
struct TYPE_21__ {uintptr_t data; int set_handler; int * get_handler; } ;
typedef TYPE_3__ ngx_http_variable_t ;
struct TYPE_22__ {int * complex_value; TYPE_2__* value; TYPE_7__* cf; } ;
typedef TYPE_4__ ngx_http_compile_complex_value_t ;
struct TYPE_23__ {scalar_t__ index; int value; int set_handler; } ;
typedef TYPE_5__ ngx_http_auth_request_variable_t ;
struct TYPE_24__ {int * vars; } ;
typedef TYPE_6__ ngx_http_auth_request_conf_t ;
struct TYPE_25__ {int pool; TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_19__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_5__* FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_7__*,int ,char*,TYPE_2__*) ;
 TYPE_3__* FUNC_3 (TYPE_7__*,TYPE_2__*,int ) ;
 int * VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_7__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*,int) ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_8, ngx_command_t *VAR_9, void *VAR_10)
{
    ngx_http_auth_request_conf_t *VAR_11 = VAR_10;

    ngx_str_t *VAR_12;
    ngx_http_variable_t *VAR_13;
    ngx_http_auth_request_variable_t *VAR_14;
    ngx_http_compile_complex_value_t VAR_15;

    VAR_12 = VAR_8->args->elts;

    if (VAR_12[1].data[0] != '$') {
        FUNC_2(VAR_5, VAR_8, 0,
                           "invalid variable name \"%V\"", &VAR_12[1]);
        return VAR_0;
    }

    VAR_12[1].len--;
    VAR_12[1].data++;

    if (VAR_11->vars == VAR_2) {
        VAR_11->vars = FUNC_0(VAR_8->pool, 1,
                                      sizeof(ngx_http_auth_request_variable_t));
        if (VAR_11->vars == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_14 = FUNC_1(VAR_11->vars);
    if (VAR_14 == ((void*)0)) {
        return VAR_0;
    }

    VAR_13 = FUNC_3(VAR_8, &VAR_12[1], VAR_4);
    if (VAR_13 == ((void*)0)) {
        return VAR_0;
    }

    VAR_14->index = FUNC_5(VAR_8, &VAR_12[1]);
    if (VAR_14->index == VAR_3) {
        return VAR_0;
    }

    if (VAR_13->get_handler == ((void*)0)) {
        VAR_13->get_handler = VAR_7;
        VAR_13->data = (uintptr_t) VAR_14;
    }

    VAR_14->set_handler = VAR_13->set_handler;

    FUNC_6(&VAR_15, sizeof(ngx_http_compile_complex_value_t));

    VAR_15.cf = VAR_8;
    VAR_15.value = &VAR_12[2];
    VAR_15.complex_value = &VAR_14->value;

    if (FUNC_4(&VAR_15) != VAR_6) {
        return VAR_0;
    }

    return VAR_1;
}
