
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int respawn; int count; int delay_start; } ;
typedef TYPE_1__ ngx_proc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_proc_conf_t *VAR_4 = VAR_2;
    ngx_proc_conf_t *VAR_5 = VAR_3;

    FUNC_0(VAR_5->delay_start, VAR_4->delay_start, 300);
    FUNC_1(VAR_5->count, VAR_4->count, 1);
    FUNC_2(VAR_5->respawn, VAR_4->respawn, 1);

    return VAR_0;
}
