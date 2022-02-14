
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_short ;
struct linger {void* l_linger; void* l_onoff; } ;
typedef int p_socket ;
typedef int lua_State ;
typedef int li ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int ,int ,char*,int) ;

int FUNC_11(lua_State *VAR_3, p_socket VAR_4)
{
    struct linger VAR_5;
    if (!FUNC_5(VAR_3, 3)) FUNC_0(VAR_3,3,FUNC_9(VAR_3, VAR_0));
    FUNC_6(VAR_3, "on");
    FUNC_2(VAR_3, 3);
    if (!FUNC_3(VAR_3, -1))
        FUNC_1(VAR_3, 3, "boolean 'on' field expected");
    VAR_5.l_onoff = (u_short) FUNC_7(VAR_3, -1);
    FUNC_6(VAR_3, "timeout");
    FUNC_2(VAR_3, 3);
    if (!FUNC_4(VAR_3, -1))
        FUNC_1(VAR_3, 3, "number 'timeout' field expected");
    VAR_5.l_linger = (u_short) FUNC_8(VAR_3, -1);
    return FUNC_10(VAR_3, VAR_4, VAR_1, VAR_2, (char *) &VAR_5, sizeof(VAR_5));
}
