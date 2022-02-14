
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int ngx_str_t ;
typedef scalar_t__ ngx_msec_t ;
struct TYPE_6__ {scalar_t__ keepalive_timeout; scalar_t__ keepalive_header; } ;
typedef TYPE_2__ ngx_http_core_loc_conf_t ;
struct TYPE_7__ {TYPE_1__* args; } ;
typedef TYPE_3__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_5__ {int nelts; int * elts; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int *,int) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    ngx_http_core_loc_conf_t *VAR_6 = VAR_5;

    ngx_str_t *VAR_7;

    if (VAR_6->keepalive_timeout != VAR_1) {
        return "is duplicate";
    }

    VAR_7 = VAR_3->args->elts;

    VAR_6->keepalive_timeout = FUNC_0(&VAR_7[1], 0);

    if (VAR_6->keepalive_timeout == (ngx_msec_t) VAR_2) {
        return "invalid value";
    }

    if (VAR_3->args->nelts == 2) {
        return VAR_0;
    }

    VAR_6->keepalive_header = FUNC_0(&VAR_7[2], 1);

    if (VAR_6->keepalive_header == (time_t) VAR_2) {
        return "invalid value";
    }

    return VAR_0;
}
