
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char const*) ;
 void** FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

void FUNC_5(lua_State *VAR_0, void *VAR_1, const char *VAR_2)
{
  if(VAR_1)
  {
    void **VAR_3 = FUNC_2(VAR_0, sizeof(void*));
    *VAR_3 = VAR_1;
    if(!FUNC_1(VAR_0, VAR_2))
      FUNC_0(VAR_0, "Torch internal problem: cannot find metatable for type <%s>", VAR_2);
    FUNC_4(VAR_0, -2);
  }
  else
    FUNC_3(VAR_0);
}
