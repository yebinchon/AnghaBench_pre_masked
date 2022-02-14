
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linger {int l_linger; int l_onoff; } ;
typedef int p_socket ;
typedef int lua_State ;
typedef int li ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int ,int ,int ,char*,int*) ;

int FUNC_5(lua_State *VAR_2, p_socket VAR_3)
{
    struct linger VAR_4;
    int VAR_5 = sizeof(VAR_4);
    int VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_0, VAR_1, (char *) &VAR_4, &VAR_5);
    if (VAR_6)
        return VAR_6;
    FUNC_0(VAR_2);
    FUNC_1(VAR_2, VAR_4.l_onoff);
    FUNC_3(VAR_2, -2, "on");
    FUNC_2(VAR_2, VAR_4.l_linger);
    FUNC_3(VAR_2, -2, "timeout");
    return 1;
}
