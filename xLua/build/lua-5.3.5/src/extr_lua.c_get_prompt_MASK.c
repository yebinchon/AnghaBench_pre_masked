
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (int *,int) ;

__attribute__((used)) static const char *FUNC_2 (lua_State *VAR_2, int VAR_3) {
  const char *VAR_4;
  FUNC_0(VAR_2, VAR_3 ? "_PROMPT" : "_PROMPT2");
  VAR_4 = FUNC_1(VAR_2, -1);
  if (VAR_4 == ((void*)0)) VAR_4 = (VAR_3 ? VAR_0 : VAR_1);
  return VAR_4;
}
