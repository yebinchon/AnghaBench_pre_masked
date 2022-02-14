
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int FILE ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,int,char*) ;
 int * FUNC_3 (int *,char const*,char const*) ;
 int ** FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char const*) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_0) {



  const char *VAR_1 = FUNC_0(VAR_0, 1);
  const char *VAR_2 = FUNC_2(VAR_0, 2, "r");
  FILE **VAR_3 = FUNC_4(VAR_0);
  *VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
  return (*VAR_3 == ((void*)0)) ? FUNC_5(VAR_0, 0, VAR_1) : 1;

}
