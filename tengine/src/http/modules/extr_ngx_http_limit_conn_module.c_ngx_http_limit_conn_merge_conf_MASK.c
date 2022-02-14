
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * elts; } ;
struct TYPE_4__ {int status_code; int log_level; TYPE_1__ limits; } ;
typedef TYPE_2__ ngx_http_limit_conn_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_http_limit_conn_conf_t *VAR_6 = VAR_4;
    ngx_http_limit_conn_conf_t *VAR_7 = VAR_5;

    if (VAR_7->limits.elts == ((void*)0)) {
        VAR_7->limits = VAR_6->limits;
    }

    FUNC_0(VAR_7->log_level, VAR_6->log_level, VAR_2);
    FUNC_0(VAR_7->status_code, VAR_6->status_code,
                              VAR_1);

    return VAR_0;
}
