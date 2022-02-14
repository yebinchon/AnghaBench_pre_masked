
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 void** FUNC_7 (int *,int) ;

void *FUNC_8(lua_State *VAR_0, int VAR_1, const char *VAR_2)
{
  void **VAR_3 = FUNC_7(VAR_0, VAR_1);
  if(VAR_3 != ((void*)0))
  {
    if(!FUNC_1(VAR_0, VAR_2))
      FUNC_0(VAR_0, "Torch internal problem: cannot find metatable for type <%s>", VAR_2);



    FUNC_4(VAR_0, (VAR_1 < 0 ? VAR_1 - 1 : VAR_1));
    while(FUNC_2(VAR_0, -1))
    {
      FUNC_6(VAR_0, -2);
      if(FUNC_5(VAR_0, -1, -2))
      {
        FUNC_3(VAR_0, 2);
        return *VAR_3;
      }
    }
    FUNC_3(VAR_0, 2);
  }
  return ((void*)0);
}
