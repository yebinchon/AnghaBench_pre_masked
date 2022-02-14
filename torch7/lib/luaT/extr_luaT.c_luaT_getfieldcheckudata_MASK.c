
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,int,char const*,...) ;
 void* FUNC_1 (int *,int,char const*) ;
 int FUNC_2 (int *,int,char const*) ;
 scalar_t__ FUNC_3 (int *,int) ;

void *FUNC_4(lua_State *VAR_0, int VAR_1, const char *VAR_2, const char *VAR_3)
{
  void *VAR_4;
  FUNC_2(VAR_0, VAR_1, VAR_2);
  if(FUNC_3(VAR_0, -1))
    FUNC_0(VAR_0, "bad argument #%d (field %s does not exist)", VAR_1, VAR_2);
  VAR_4 = FUNC_1(VAR_0, -1, VAR_3);
  if(!VAR_4)
    FUNC_0(VAR_0, "bad argument #%d (field %s is not a %s)", VAR_1, VAR_2, VAR_3);
  return VAR_4;
}
