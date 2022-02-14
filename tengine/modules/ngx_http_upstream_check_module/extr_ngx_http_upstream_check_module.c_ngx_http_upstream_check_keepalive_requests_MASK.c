
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_9__ {int len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_10__ {scalar_t__ check_keepalive_requests; } ;
typedef TYPE_3__ ngx_http_upstream_check_srv_conf_t ;
struct TYPE_11__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_8__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_3, ngx_command_t *VAR_4,
    void *VAR_5)
{
    ngx_str_t *VAR_6;
    ngx_http_upstream_check_srv_conf_t *VAR_7;
    ngx_uint_t VAR_8;

    VAR_6 = VAR_3->args->elts;

    VAR_7 = FUNC_1(VAR_3,
                                              VAR_2);

    VAR_8 = FUNC_0(VAR_6[1].data, VAR_6[1].len);
    if (VAR_8 == (ngx_uint_t) VAR_1 || VAR_8 == 0) {
        return "invalid value";
    }

    VAR_7->check_keepalive_requests = VAR_8;

    return VAR_0;
}
