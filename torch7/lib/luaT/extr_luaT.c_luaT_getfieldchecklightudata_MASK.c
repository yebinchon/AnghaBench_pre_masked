
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,char*,int,char const*) ;
 int FUNC_1 (int *,int,char const*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 void* FUNC_4 (int *,int) ;

void *FUNC_5(lua_State *VAR_0, int VAR_1, const char *VAR_2)
{
  void *VAR_3;
  FUNC_1(VAR_0, VAR_1, VAR_2);
  if(FUNC_3(VAR_0, -1))
    FUNC_0(VAR_0, "bad argument #%d (field %s does not exist)", VAR_1, VAR_2);

  if(!FUNC_2(VAR_0, -1))
    FUNC_0(VAR_0, "bad argument #%d (field %s is not a light userdata)", VAR_1, VAR_2);

  VAR_3 = FUNC_4(VAR_0, -1);

  return VAR_3;
}
