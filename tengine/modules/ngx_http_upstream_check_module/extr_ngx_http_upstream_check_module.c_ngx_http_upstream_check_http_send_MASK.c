
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {scalar_t__ len; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_15__ {TYPE_3__ send; TYPE_10__* check_type_conf; } ;
typedef TYPE_4__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_16__ {TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_13__ {int len; int data; } ;
struct TYPE_12__ {TYPE_3__* elts; } ;
struct TYPE_11__ {TYPE_2__ name; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_10__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_5__*,int ,char*,...) ;
 TYPE_4__* FUNC_1 (TYPE_5__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,char*,int) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_5, ngx_command_t *VAR_6,
    void *VAR_7)
{
    ngx_str_t *VAR_8;
    ngx_http_upstream_check_srv_conf_t *VAR_9;

    VAR_8 = VAR_5->args->elts;

    VAR_9 = FUNC_1(VAR_5,
                                              VAR_4);

    if (VAR_9->check_type_conf == VAR_2) {
        FUNC_0(VAR_3, VAR_5, 0,
                           "invalid check_http_send should set [check] first");
        return VAR_0;
    }

    if (VAR_8[1].len
        && (VAR_9->check_type_conf->name.len != 4
            || FUNC_2(VAR_9->check_type_conf->name.data,
                           "http", 4) != 0))
    {
        FUNC_0(VAR_3, VAR_5, 0,
                           "invalid check_http_send for type \"%V\"",
                           &VAR_9->check_type_conf->name);
        return VAR_0;
    }

    VAR_9->send = VAR_8[1];

    return VAR_1;
}
