
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*,...) ;
 void* FUNC_1 (int) ;

void* FUNC_2(lua_State *VAR_0, ptrdiff_t VAR_1)
{
  void *VAR_2;

  if(VAR_1 == 0)
    return ((void*)0);

  if(VAR_1 < 0)
    FUNC_0(VAR_0, "$ Torch: invalid memory size -- maybe an overflow?");

  VAR_2 = FUNC_1(VAR_1);
  if(!VAR_2)
    FUNC_0(VAR_0, "$ Torch: not enough memory: you tried to allocate %dGB. Buy new RAM!", VAR_1/1073741824);

  return VAR_2;
}
