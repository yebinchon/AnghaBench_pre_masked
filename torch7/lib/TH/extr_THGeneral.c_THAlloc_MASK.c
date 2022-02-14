
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 void* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

void* FUNC_3(ptrdiff_t VAR_1)
{
  void *VAR_2;

  if(VAR_1 < 0)
    FUNC_1("$ Torch: invalid memory size -- maybe an overflow?");

  if(VAR_1 == 0)
    return ((void*)0);

  VAR_2 = FUNC_0(VAR_1);

  if(!VAR_2 && &FUNC_2) {
    FUNC_2(VAR_0);
    VAR_2 = FUNC_0(VAR_1);
  }

  if(!VAR_2)
    FUNC_1("$ Torch: not enough memory: you tried to allocate %dGB. Buy new RAM!", VAR_1/1073741824);

  return VAR_2;
}
