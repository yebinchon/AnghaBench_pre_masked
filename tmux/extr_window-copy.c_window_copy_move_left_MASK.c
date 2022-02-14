
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct screen {int dummy; } ;


 scalar_t__ FUNC_0 (struct screen*) ;
 scalar_t__ FUNC_1 (struct screen*) ;
 scalar_t__ FUNC_2 (struct screen*) ;

__attribute__((used)) static void
FUNC_3(struct screen *VAR_0, u_int *VAR_1, u_int *VAR_2, int VAR_3)
{
 if (*VAR_1 == 0) {
  if (*VAR_2 == 0) {
   if (VAR_3) {
    *VAR_1 = FUNC_1(VAR_0) - 1;
    *VAR_2 = FUNC_0(VAR_0) + FUNC_2(VAR_0);
   }
   return;
  }
  *VAR_1 = FUNC_1(VAR_0) - 1;
  *VAR_2 = *VAR_2 - 1;
 } else
  *VAR_1 = *VAR_1 - 1;
}
