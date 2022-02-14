
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {scalar_t__ len; } ;
struct TYPE_12__ {int data; int get_handler; int flags; TYPE_8__ name; } ;
typedef TYPE_1__ ngx_http_variable_t ;
struct TYPE_13__ {int commands; } ;
typedef TYPE_2__ ngx_http_ssi_main_conf_t ;
struct TYPE_16__ {scalar_t__ len; } ;
struct TYPE_14__ {TYPE_9__ name; } ;
typedef TYPE_3__ ngx_http_ssi_command_t ;
typedef int ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *,int ,char*,TYPE_9__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_9__*,TYPE_3__*,int ) ;
 TYPE_1__* FUNC_2 (int *,TYPE_8__*,int ) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_conf_t *VAR_8)
{
    ngx_int_t VAR_9;
    ngx_http_variable_t *VAR_10, *VAR_11;
    ngx_http_ssi_command_t *VAR_12;
    ngx_http_ssi_main_conf_t *VAR_13;

    for (VAR_11 = VAR_7; VAR_11->name.len; VAR_11++) {
        VAR_10 = FUNC_2(VAR_8, &VAR_11->name, VAR_11->flags);
        if (VAR_10 == ((void*)0)) {
            return VAR_1;
        }

        VAR_10->get_handler = VAR_11->get_handler;
        VAR_10->data = VAR_11->data;
    }

    VAR_13 = FUNC_3(VAR_8, VAR_6);

    for (VAR_12 = VAR_5; VAR_12->name.len; VAR_12++) {
        VAR_9 = FUNC_1(&VAR_13->commands, &VAR_12->name, VAR_12,
                              VAR_2);

        if (VAR_9 == VAR_4) {
            continue;
        }

        if (VAR_9 == VAR_0) {
            FUNC_0(VAR_3, VAR_8, 0,
                               "conflicting SSI command \"%V\"", &VAR_12->name);
        }

        return VAR_1;
    }

    return VAR_4;
}
