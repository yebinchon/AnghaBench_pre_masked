
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;







 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;

void FUNC_14(lua_State *VAR_0, lua_State *VAR_1, int VAR_2) {
    switch (FUNC_13(VAR_0, VAR_2)) {
        case 132:
            FUNC_5(VAR_1, FUNC_10(VAR_0, VAR_2));
            break;
        case 131:
            FUNC_6(VAR_1);
            break;
        case 130:
            FUNC_7(VAR_1, FUNC_11(VAR_0, VAR_2));
            break;
        case 129:
            FUNC_8(VAR_1, FUNC_12(VAR_0, VAR_2));
            break;
        case 128:
            FUNC_2(VAR_1);
            FUNC_6(VAR_0);
            while (FUNC_3(VAR_0, VAR_2 - 1)) {
                FUNC_14(VAR_0, VAR_1, -2);
                FUNC_14(VAR_0, VAR_1, -1);
                FUNC_9(VAR_1, -3);
                FUNC_4(VAR_0, 1);
            }
            FUNC_4(VAR_0, 1);
            break;
        default:
            FUNC_0(VAR_0, "cannot transfer '%s' to thread", FUNC_1(VAR_0, VAR_2));
    }
}
