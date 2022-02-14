
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 char const* VAR_2 ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void FUNC_6 (lua_State *VAR_3) {
  int VAR_4;
  const char *VAR_5 = VAR_2;
  VAR_2 = ((void*)0);
  while ((VAR_4 = FUNC_2(VAR_3)) != -1) {
    if (VAR_4 == VAR_1)
      VAR_4 = FUNC_0(VAR_3, 0, VAR_0);
    if (VAR_4 == VAR_1) FUNC_1(VAR_3);
    else FUNC_5(VAR_3, VAR_4);
  }
  FUNC_3(VAR_3, 0);
  FUNC_4();
  VAR_2 = VAR_5;
}
