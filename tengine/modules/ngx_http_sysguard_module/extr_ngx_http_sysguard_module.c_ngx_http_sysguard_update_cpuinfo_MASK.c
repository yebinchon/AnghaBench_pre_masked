
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {scalar_t__ cpuusage; scalar_t__ cpu_interval; int enable; } ;
typedef TYPE_2__ ngx_http_sysguard_conf_t ;
struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
typedef int ngx_cpuinfo_t ;
struct TYPE_7__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 () ;

void
FUNC_5(ngx_http_request_t *VAR_6)
{
    ngx_int_t VAR_7;
    ngx_cpuinfo_t VAR_8;
    ngx_http_sysguard_conf_t *VAR_9;
    ngx_str_t VAR_10;

    FUNC_3(&VAR_10, "cpu");

    VAR_9 = FUNC_1(VAR_6, VAR_5);

    if (!VAR_9->enable) {
        return;
    }

    if (VAR_9->cpuusage == VAR_0) {
        return;
    }

    if (VAR_2 < FUNC_4()) {
        VAR_7 = FUNC_0(&VAR_10, &VAR_8, VAR_6->connection->log);
        if (VAR_7 == VAR_1) {
            FUNC_2(&VAR_8, sizeof(ngx_cpuinfo_t));
            return;
        }

        VAR_4 = VAR_3;
        VAR_3 = VAR_8;
        VAR_2 = FUNC_4() + VAR_9->cpu_interval;
    }

    return;
}
