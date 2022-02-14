
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int lua_Integer ;
typedef int FILE ;


 int VAR_0 ;



 int FUNC_0 (int *,int,int *,char const* const*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int *,int const,int ) ;
 int * FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1) {
  static const int VAR_2[] = {128, 130, 129};
  static const char *const VAR_3[] = {"no", "full", "line", ((void*)0)};
  FILE *VAR_4 = FUNC_4(VAR_1);
  int VAR_5 = FUNC_0(VAR_1, 2, ((void*)0), VAR_3);
  lua_Integer VAR_6 = FUNC_1(VAR_1, 3, VAR_0);
  int VAR_7 = FUNC_3(VAR_4, ((void*)0), VAR_2[VAR_5], VAR_6);
  return FUNC_2(VAR_1, VAR_7 == 0, ((void*)0));
}
