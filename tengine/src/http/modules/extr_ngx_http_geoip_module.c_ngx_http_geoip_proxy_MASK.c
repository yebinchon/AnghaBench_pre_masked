
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_7__ {int * proxies; } ;
typedef TYPE_2__ ngx_http_geoip_conf_t ;
struct TYPE_8__ {int pool; TYPE_1__* args; } ;
typedef TYPE_3__ ngx_conf_t ;
typedef int ngx_command_t ;
typedef int ngx_cidr_t ;
struct TYPE_6__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int ,int,int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int *) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    ngx_http_geoip_conf_t *VAR_6 = VAR_5;

    ngx_str_t *VAR_7;
    ngx_cidr_t VAR_8, *VAR_9;

    VAR_7 = VAR_3->args->elts;

    if (FUNC_2(VAR_3, &VAR_7[1], &VAR_8) != VAR_2) {
        return VAR_0;
    }

    if (VAR_6->proxies == ((void*)0)) {
        VAR_6->proxies = FUNC_0(VAR_3->pool, 4, sizeof(ngx_cidr_t));
        if (VAR_6->proxies == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_9 = FUNC_1(VAR_6->proxies);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_9 = VAR_8;

    return VAR_1;
}
