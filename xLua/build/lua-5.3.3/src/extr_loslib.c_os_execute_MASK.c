
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 char* FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_0) {



  const char *VAR_1 = FUNC_2(VAR_0, 1, ((void*)0));
  int VAR_2 = FUNC_4(VAR_1);
  if (VAR_1 != ((void*)0))
    return FUNC_1(VAR_0, VAR_2);
  else {
    FUNC_3(VAR_0, VAR_2);
    return 1;
  }

}
