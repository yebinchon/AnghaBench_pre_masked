
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * L; } ;
typedef TYPE_1__ thread ;
typedef int lua_State ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,TYPE_1__*) ;

void FUNC_9(lua_State *VAR_0, thread *VAR_1, int VAR_2, char **VAR_3) {
    FUNC_2(VAR_1->L, "wrk");

    FUNC_8(VAR_1->L, VAR_1);
    FUNC_7(VAR_1->L, -2, "thread");

    FUNC_2(VAR_0, "wrk");
    FUNC_1(VAR_0, -1, "setup");
    FUNC_8(VAR_0, VAR_1);
    FUNC_0(VAR_0, 1, 0);
    FUNC_4(VAR_0, 1);

    FUNC_1(VAR_1->L, -1, "init");
    FUNC_3(VAR_1->L);
    for (int VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        FUNC_5(VAR_1->L, VAR_3[VAR_4]);
        FUNC_6(VAR_1->L, -2, VAR_4);
    }
    FUNC_0(VAR_1->L, 1, 0);
    FUNC_4(VAR_1->L, 1);
}
