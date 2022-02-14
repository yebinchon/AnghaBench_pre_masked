
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int buf ;
typedef int FILE ;


 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static const char *FUNC_5(lua_State *VAR_0, const char *VAR_1)
{
  FILE *VAR_2 = FUNC_3(VAR_1, "r");
  const char *VAR_3 = ((void*)0);
  if (VAR_2) {
    char VAR_4[256];
    if (FUNC_2(VAR_4, sizeof(VAR_4), VAR_2)) {
      if (!FUNC_4(VAR_4, "/* GNU ld script", 16)) {
 while (FUNC_2(VAR_4, sizeof(VAR_4), VAR_2)) {
   VAR_3 = FUNC_0(VAR_0, VAR_4);
   if (VAR_3) break;
 }
      } else {
 VAR_3 = FUNC_0(VAR_0, VAR_4);
      }
    }
    FUNC_1(VAR_2);
  }
  return VAR_3;
}
