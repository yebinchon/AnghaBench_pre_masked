
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(lua_State *VAR_0, int VAR_1)
{
  int VAR_2 = FUNC_1(VAR_0)-VAR_1+1;

  if(VAR_2 == 1 && FUNC_0(VAR_0, VAR_1, "torch.LongStorage"))
  {
    return 1;
  }
  else
  {
    int VAR_3;

    for(VAR_3 = VAR_1; VAR_3 < VAR_1+VAR_2; VAR_3++)
    {
      if(!FUNC_2(VAR_0, VAR_3))
        return 0;
    }
    return 1;
  }
  return 0;
}
