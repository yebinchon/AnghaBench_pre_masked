
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 void* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (void*,int) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;

void* FUNC_7(void *VAR_1, ptrdiff_t VAR_2)
{
  if(!VAR_1)
    return(FUNC_0(VAR_2));

  if(VAR_2 == 0)
  {
    FUNC_2(VAR_1);
    return ((void*)0);
  }

  if(VAR_2 < 0)
    FUNC_1("$ Torch: invalid memory size -- maybe an overflow?");

  ptrdiff_t VAR_3 = -FUNC_4(VAR_1);
  void *VAR_4 = FUNC_5(VAR_1, VAR_2);

  if(!VAR_4 && &FUNC_6) {
    FUNC_6(VAR_0);
    VAR_4 = FUNC_5(VAR_1, VAR_2);
  }

  if(!VAR_4)
    FUNC_1("$ Torch: not enough memory: you tried to reallocate %dGB. Buy new RAM!", VAR_2/1073741824);


  FUNC_3(VAR_3 + FUNC_4(VAR_4));

  return VAR_4;
}
