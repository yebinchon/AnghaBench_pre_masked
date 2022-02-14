
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_socket ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 double FUNC_7 (int *,int) ;

__attribute__((used)) static t_socket FUNC_8(lua_State *VAR_1) {
    t_socket VAR_2 = VAR_0;
    FUNC_5(VAR_1, "getfd");
    FUNC_1(VAR_1, -2);
    if (!FUNC_2(VAR_1, -1)) {
        FUNC_6(VAR_1, -2);
        FUNC_0(VAR_1, 1, 1);
        if (FUNC_3(VAR_1, -1)) {
            double VAR_3 = FUNC_7(VAR_1, -1);
            VAR_2 = (VAR_3 >= 0.0)? (t_socket) VAR_3: VAR_0;
        }
    }
    FUNC_4(VAR_1, 1);
    return VAR_2;
}
