
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int ngx_tm_sec; int ngx_tm_min; int ngx_tm_hour; int ngx_tm_mday; int ngx_tm_mon; int ngx_tm_year; } ;
typedef TYPE_1__ ngx_tm_t ;
typedef int lua_State ;
typedef int buf ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_0)
{
    ngx_tm_t VAR_1;
    u_char VAR_2[sizeof("2010-11-19 20:56:31") - 1];

    FUNC_1(FUNC_3(), &VAR_1);

    FUNC_2(VAR_2, "%04d-%02d-%02d %02d:%02d:%02d", VAR_1.ngx_tm_year,
                VAR_1.ngx_tm_mon, VAR_1.ngx_tm_mday, VAR_1.ngx_tm_hour, VAR_1.ngx_tm_min,
                VAR_1.ngx_tm_sec);

    FUNC_0(VAR_0, (char *) VAR_2, sizeof(VAR_2));

    return 1;
}
