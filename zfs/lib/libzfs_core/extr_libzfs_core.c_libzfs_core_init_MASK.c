
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(void)
{
 (void) FUNC_2(&VAR_4);
 if (VAR_5 == 0) {
  VAR_3 = FUNC_1(VAR_1, VAR_0);
  if (VAR_3 < 0) {
   (void) FUNC_3(&VAR_4);
   return (VAR_2);
  }
 }
 VAR_5++;




 (void) FUNC_3(&VAR_4);
 return (0);
}
