
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ t_socket ;
typedef int lua_State ;
typedef int fd_set ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_1, int VAR_2, int VAR_3, fd_set *VAR_4) {
    int VAR_5 = 0, VAR_6 = 1;
    if (FUNC_4(VAR_1, VAR_2))
        return 0;
    for ( ;; ) {
        t_socket VAR_7;
        FUNC_6(VAR_1, VAR_6);
        FUNC_3(VAR_1, VAR_2);
        if (FUNC_4(VAR_1, -1)) {
            FUNC_5(VAR_1, 1);
            break;
        }
        VAR_7 = FUNC_2(VAR_1);
        if (VAR_7 != VAR_0 && FUNC_1(VAR_1)) {
            FUNC_6(VAR_1, ++VAR_5);
            FUNC_7(VAR_1, -2);
            FUNC_8(VAR_1, VAR_3);
            FUNC_0(VAR_7, VAR_4);
        }
        FUNC_5(VAR_1, 1);
        VAR_6 = VAR_6 + 1;
    }
    return VAR_5;
}
