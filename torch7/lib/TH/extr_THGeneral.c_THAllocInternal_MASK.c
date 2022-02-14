
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (void**,int,int) ;

__attribute__((used)) static void* FUNC_4(ptrdiff_t VAR_0)
{
  void *VAR_1;

  if (VAR_0 > 5120)
  {

    if (FUNC_3(&VAR_1, 64, VAR_0) != 0)
      VAR_1 = ((void*)0);







  }
  else
  {
    VAR_1 = FUNC_2(VAR_0);
  }

  FUNC_0(FUNC_1(VAR_1));
  return VAR_1;
}
