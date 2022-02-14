
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_2) {
    if (FUNC_7()) {





        FUNC_0(VAR_2, "socket", VAR_1, 0);







        FUNC_5(VAR_2, "_VERSION");
        FUNC_5(VAR_2, VAR_0);
        FUNC_6(VAR_2, -3);
        return 1;
    } else {
        FUNC_5(VAR_2, "unable to initialize library");
        FUNC_2(VAR_2);
        return 0;
    }
}
