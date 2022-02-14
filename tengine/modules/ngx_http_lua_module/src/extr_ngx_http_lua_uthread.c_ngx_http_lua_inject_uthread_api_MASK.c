
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_log_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3(ngx_log_t *VAR_3, lua_State *VAR_4)
{

    FUNC_0(VAR_4, 0 , 3 );

    FUNC_1(VAR_4, VAR_1);
    FUNC_2(VAR_4, -2, "spawn");

    FUNC_1(VAR_4, VAR_2);
    FUNC_2(VAR_4, -2, "wait");

    FUNC_1(VAR_4, VAR_0);
    FUNC_2(VAR_4, -2, "kill");

    FUNC_2(VAR_4, -2, "thread");
}
