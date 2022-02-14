
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * elts; } ;
struct TYPE_4__ {scalar_t__ limit_log_level; scalar_t__ status_code; int geo_var_value; int geo_var_index; int enable; int dry_run; scalar_t__ delay_log_level; TYPE_1__ limits; } ;
typedef TYPE_2__ ngx_http_limit_req_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_5, void *VAR_6, void *VAR_7)
{
    ngx_http_limit_req_conf_t *VAR_8 = VAR_6;
    ngx_http_limit_req_conf_t *VAR_9 = VAR_7;

    if (VAR_9->limits.elts == ((void*)0)) {
        VAR_9->limits = VAR_8->limits;
    }

    FUNC_1(VAR_9->limit_log_level, VAR_8->limit_log_level,
                              VAR_3);

    VAR_9->delay_log_level = (VAR_9->limit_log_level == VAR_4) ?
                                VAR_4 : VAR_9->limit_log_level + 1;

    FUNC_1(VAR_9->status_code, VAR_8->status_code,
                              VAR_2);

    FUNC_2(VAR_9->dry_run, VAR_8->dry_run, 0);
    return VAR_0;
}
