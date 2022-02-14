
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int overflow_threshold; int overflow_test; int overflow_events; int signo; } ;
typedef TYPE_1__ ngx_rtsig_conf_t ;
typedef int ngx_cycle_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static char *
FUNC_1(ngx_cycle_t *VAR_2, void *VAR_3)
{
    ngx_rtsig_conf_t *VAR_4 = VAR_3;


    FUNC_0(VAR_4->signo, VAR_1 + 10);

    FUNC_0(VAR_4->overflow_events, 16);
    FUNC_0(VAR_4->overflow_test, 32);
    FUNC_0(VAR_4->overflow_threshold, 10);

    return VAR_0;
}
