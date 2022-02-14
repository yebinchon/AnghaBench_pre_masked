
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_5(uint_t VAR_5)
{
 if (VAR_1) {
  VAR_0 = VAR_5;
  return;
 }






 if (VAR_3 == 0) {
  (void) FUNC_2(&VAR_4);
  if (VAR_3 == 0) {
   if (FUNC_0(&VAR_2, ((void*)0)) != 0)
    VAR_3 = -1;
   else
    VAR_3 = 1;
  }
  (void) FUNC_3(&VAR_4);
 }

 if (VAR_3 > 0)
  (void) FUNC_4(VAR_2,
      (void *)(uintptr_t)VAR_5);
}
