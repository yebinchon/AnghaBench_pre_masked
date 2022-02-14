
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct in_addr {int s_addr; } ;
typedef int p_socket ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,struct in_addr*) ;
 int FUNC_2 (int *,int,char*) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int ,int ,char*,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

int FUNC_6(lua_State *VAR_3, p_socket VAR_4)
{
    const char *VAR_5 = FUNC_3(VAR_3, 3);
    struct in_addr VAR_6;
    VAR_6.s_addr = FUNC_0(VAR_0);
    if (FUNC_5(VAR_5, "*") && !FUNC_1(VAR_5, &VAR_6))
        FUNC_2(VAR_3, 3, "ip expected");
    return FUNC_4(VAR_3, VAR_4, VAR_1, VAR_2,
        (char *) &VAR_6, sizeof(VAR_6));
}
