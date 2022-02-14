
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int L; } ;
typedef TYPE_1__ thread ;
typedef int lua_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int *,int) ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0) {
    thread *VAR_1 = FUNC_0(VAR_0);
    const char *VAR_2 = FUNC_3(VAR_0, -1);
    FUNC_1(VAR_1->L, VAR_2);
    FUNC_4(VAR_1->L, VAR_0, -1);
    FUNC_2(VAR_1->L, 1);
    return 1;
}
