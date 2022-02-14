
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;

void
FUNC_1(void)
{

 if (FUNC_0(&VAR_0) < 0) {
  VAR_0 = 0;
  return;
 }


 if (VAR_0 <= 16) {
  VAR_0 = 0;
  return;
 }
 VAR_0 -= 16;
}
