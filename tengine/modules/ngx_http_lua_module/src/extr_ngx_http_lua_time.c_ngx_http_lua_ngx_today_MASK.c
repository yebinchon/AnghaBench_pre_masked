
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ time_t ;
struct TYPE_4__ {int ngx_tm_mday; int ngx_tm_mon; int ngx_tm_year; } ;
typedef TYPE_1__ ngx_tm_t ;
typedef int lua_State ;
typedef int buf ;
struct TYPE_5__ {int gmtoff; } ;


 int FUNC_0 (int *,char*,int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ,int ,int ) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_1)
{
    time_t VAR_2;
    ngx_tm_t VAR_3;
    u_char VAR_4[sizeof("2010-11-19") - 1];

    VAR_2 = FUNC_3();
    FUNC_1(VAR_2 + VAR_0->gmtoff * 60, &VAR_3);

    FUNC_2(VAR_4, "%04d-%02d-%02d", VAR_3.ngx_tm_year, VAR_3.ngx_tm_mon,
                VAR_3.ngx_tm_mday);

    FUNC_0(VAR_1, (char *) VAR_4, sizeof(VAR_4));

    return 1;
}
