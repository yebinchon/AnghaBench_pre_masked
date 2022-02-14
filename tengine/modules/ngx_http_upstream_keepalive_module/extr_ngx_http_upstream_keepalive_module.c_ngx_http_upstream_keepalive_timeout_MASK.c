
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef scalar_t__ ngx_msec_t ;
typedef int ngx_http_upstream_srv_conf_t ;
struct TYPE_8__ {scalar_t__ keepalive_timeout; } ;
typedef TYPE_2__ ngx_http_upstream_keepalive_srv_conf_t ;
struct TYPE_9__ {TYPE_1__* args; } ;
typedef TYPE_3__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_7__ {int * elts; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_5, ngx_command_t *VAR_6,
    void *VAR_7)
{
    ngx_http_upstream_srv_conf_t *VAR_8;
    ngx_http_upstream_keepalive_srv_conf_t *VAR_9;

    ngx_str_t *VAR_10;
    ngx_msec_t VAR_11;

    VAR_8 = FUNC_0(VAR_5, VAR_4);

    VAR_9 = FUNC_1(VAR_8,
                                          VAR_3);

    if (VAR_9->keepalive_timeout != VAR_1) {
        return "is duplicate";
    }

    VAR_10 = VAR_5->args->elts;

    VAR_11 = FUNC_2(&VAR_10[1], 0);
    if (VAR_11 == (ngx_msec_t) VAR_2) {
        return "invalid value";
    }

    VAR_9->keepalive_timeout = VAR_11;

    return VAR_0;
}
