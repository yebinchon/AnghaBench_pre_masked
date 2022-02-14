
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_0) {
    int VAR_1 = 0;

 if (&FUNC_1 == ((void*)0)) {
  return FUNC_2(VAR_0, "g_csharp_wrapper_caller not set");
 }

 VAR_1 = FUNC_1(VAR_0, FUNC_10(VAR_0, FUNC_9(1)), FUNC_5(VAR_0));

    if (FUNC_8(VAR_0, FUNC_9(2)))
    {
        FUNC_6(VAR_0, 0);
        FUNC_7(VAR_0, FUNC_9(2));
        return FUNC_3(VAR_0);
    }

 if (FUNC_4(VAR_0)) {
  FUNC_0(VAR_0);
 }

    return VAR_1;
}
