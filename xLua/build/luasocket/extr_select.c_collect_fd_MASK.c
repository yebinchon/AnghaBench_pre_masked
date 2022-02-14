
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_socket ;
typedef int lua_State ;
typedef int lua_Number ;
typedef int fd_set ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static void FUNC_10(lua_State *VAR_3, int VAR_4, int VAR_5,
        fd_set *VAR_6, t_socket *VAR_7) {
    int VAR_8 = 1, VAR_9 = 0;

    if (FUNC_5(VAR_3, VAR_4)) return;

    FUNC_3(VAR_3, VAR_4, VAR_1);
    for ( ;; ) {
        t_socket VAR_10;
        FUNC_7(VAR_3, VAR_8);
        FUNC_4(VAR_3, VAR_4);
        if (FUNC_5(VAR_3, -1)) {
            FUNC_6(VAR_3, 1);
            break;
        }

        VAR_10 = FUNC_1(VAR_3);
        if (VAR_10 != VAR_2) {





            if (VAR_10 >= VAR_0)
                FUNC_2(VAR_3, VAR_4, "descriptor too large for set size");

            FUNC_0(VAR_10, VAR_6);
            VAR_9++;

            if (*VAR_7 == VAR_2 || *VAR_7 < VAR_10)
                *VAR_7 = VAR_10;

            FUNC_7(VAR_3, (lua_Number) VAR_10);
            FUNC_8(VAR_3, -2);
            FUNC_9(VAR_3, VAR_5);
        }
        FUNC_6(VAR_3, 1);
        VAR_8 = VAR_8 + 1;
    }
}
