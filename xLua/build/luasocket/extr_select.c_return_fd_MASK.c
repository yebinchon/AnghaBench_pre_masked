
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ t_socket ;
typedef int lua_State ;
typedef int lua_Number ;
typedef int fd_set ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(lua_State *VAR_0, fd_set *VAR_1, t_socket VAR_2,
        int VAR_3, int VAR_4, int VAR_5) {
    t_socket VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        if (FUNC_0(VAR_6, VAR_1)) {
            FUNC_2(VAR_0, ++VAR_5);
            FUNC_2(VAR_0, (lua_Number) VAR_6);
            FUNC_1(VAR_0, VAR_3);
            FUNC_3(VAR_0, VAR_4);
        }
    }
}
