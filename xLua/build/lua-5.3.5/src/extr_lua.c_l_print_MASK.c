
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int,int ,int ) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8 (lua_State *VAR_3) {
  int VAR_4 = FUNC_3(VAR_3);
  if (VAR_4 > 0) {
    FUNC_1(VAR_3, VAR_0, "too many results to print");
    FUNC_2(VAR_3, "print");
    FUNC_4(VAR_3, 1);
    if (FUNC_5(VAR_3, VAR_4, 0, 0) != VAR_1)
      FUNC_0(VAR_2, FUNC_6(VAR_3, "error calling 'print' (%s)",
                                             FUNC_7(VAR_3, -1)));
  }
}
