
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int ngx_tm_mday; int ngx_tm_mon; int ngx_tm_year; } ;
typedef TYPE_1__ ngx_tm_t ;
struct TYPE_5__ {int gmtoff; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;
 scalar_t__ FUNC_2 () ;

void
FUNC_3(u_char *VAR_1)
{
    ngx_tm_t VAR_2;

    FUNC_0(FUNC_2() + VAR_0->gmtoff * 60, &VAR_2);

    FUNC_1(VAR_1, "%04d-%02d-%02d", VAR_2.ngx_tm_year, VAR_2.ngx_tm_mon,
                VAR_2.ngx_tm_mday);
}
