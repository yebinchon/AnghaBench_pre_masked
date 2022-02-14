
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int ngx_tm_sec; int ngx_tm_min; int ngx_tm_hour; int ngx_tm_mday; int ngx_tm_mon; int ngx_tm_year; } ;
typedef TYPE_1__ ngx_tm_t ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 () ;

void
FUNC_3(u_char *VAR_0)
{
    ngx_tm_t VAR_1;

    FUNC_0(FUNC_2(), &VAR_1);

    FUNC_1(VAR_0, "%04d-%02d-%02d %02d:%02d:%02d", VAR_1.ngx_tm_year,
                VAR_1.ngx_tm_mon, VAR_1.ngx_tm_mday, VAR_1.ngx_tm_hour, VAR_1.ngx_tm_min,
                VAR_1.ngx_tm_sec);
}
