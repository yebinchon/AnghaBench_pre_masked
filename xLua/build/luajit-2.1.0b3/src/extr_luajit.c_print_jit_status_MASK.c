
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int) ;
 int FUNC_7 (char,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(lua_State *VAR_3)
{
  int VAR_4;
  const char *VAR_5;
  FUNC_2(VAR_3, VAR_1, "_LOADED");
  FUNC_2(VAR_3, -1, "jit");
  FUNC_4(VAR_3, -2);
  FUNC_2(VAR_3, -1, "status");
  FUNC_4(VAR_3, -2);
  VAR_4 = FUNC_3(VAR_3);
  FUNC_1(VAR_3, 0, VAR_0);
  FUNC_0(FUNC_5(VAR_3, VAR_4) ? "JIT: ON" : "JIT: OFF", VAR_2);
  for (VAR_4++; (VAR_5 = FUNC_6(VAR_3, VAR_4)); VAR_4++) {
    FUNC_7(' ', VAR_2);
    FUNC_0(VAR_5, VAR_2);
  }
  FUNC_7('\n', VAR_2);
}
