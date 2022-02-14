
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * p_socket ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ,int,int,char*,int) ;

__attribute__((used)) static
int FUNC_4(lua_State *VAR_0, p_socket VAR_1, int VAR_2, int VAR_3, void *VAR_4, int VAR_5)
{
    if (FUNC_3(*VAR_1, VAR_2, VAR_3, (char *) VAR_4, VAR_5) < 0) {
        FUNC_0(VAR_0);
        FUNC_2(VAR_0, "setsockopt failed");
        return 2;
    }
    FUNC_1(VAR_0, 1);
    return 1;
}
