
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct in_addr {int dummy; } ;
typedef int socklen_t ;
typedef int * p_socket ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,char*,int*) ;
 char* FUNC_1 (struct in_addr) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;

int FUNC_4(lua_State *VAR_2, p_socket VAR_3)
{
    struct in_addr VAR_4;
    socklen_t VAR_5 = sizeof(VAR_4);
    if (FUNC_0(*VAR_3, VAR_0, VAR_1, (char *) &VAR_4, &VAR_5) < 0) {
        FUNC_2(VAR_2);
        FUNC_3(VAR_2, "getsockopt failed");
        return 2;
    }
    FUNC_3(VAR_2, FUNC_1(VAR_4));
    return 1;
}
