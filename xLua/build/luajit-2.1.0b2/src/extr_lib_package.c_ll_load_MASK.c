
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 void* FUNC_1 (char const*,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void *FUNC_3(lua_State *VAR_3, const char *VAR_4, int VAR_5)
{
  void *VAR_6 = FUNC_1(VAR_4, VAR_2 | (VAR_5 ? VAR_0 : VAR_1));
  if (VAR_6 == ((void*)0)) FUNC_2(VAR_3, FUNC_0());
  return VAR_6;
}
