
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(lua_State *VAR_4, int VAR_5)
{
  const char *VAR_6;
  FUNC_2(VAR_4, VAR_0, VAR_5 ? "_PROMPT" : "_PROMPT2");
  VAR_6 = FUNC_4(VAR_4, -1);
  if (VAR_6 == ((void*)0)) VAR_6 = VAR_5 ? VAR_1 : VAR_2;
  FUNC_1(VAR_6, VAR_3);
  FUNC_0(VAR_3);
  FUNC_3(VAR_4, 1);
}
