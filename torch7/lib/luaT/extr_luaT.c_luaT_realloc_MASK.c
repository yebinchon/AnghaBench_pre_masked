
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*,...) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,void*) ;
 void* FUNC_3 (void*,int) ;

void* FUNC_4(lua_State *VAR_0, void *VAR_1, ptrdiff_t VAR_2)
{
  if(!VAR_1)
    return(FUNC_1(VAR_0, VAR_2));

  if(VAR_2 == 0)
  {
    FUNC_2(VAR_0, VAR_1);
    return ((void*)0);
  }

  if(VAR_2 < 0)
    FUNC_0(VAR_0, "$ Torch: invalid memory size -- maybe an overflow?");

  VAR_1 = FUNC_3(VAR_1, VAR_2);
  if(!VAR_1)
    FUNC_0(VAR_0, "$ Torch: not enough memory: you tried to reallocate %dGB. Buy new RAM!", VAR_2/1073741824);
  return VAR_1;
}
