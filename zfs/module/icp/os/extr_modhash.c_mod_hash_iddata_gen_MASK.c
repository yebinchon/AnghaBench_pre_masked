
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;



uint_t
FUNC_0(size_t VAR_0)
{
 uint_t VAR_1, VAR_2, VAR_3;





 VAR_1 = (VAR_0 % 2 == 0) ? VAR_0 + 1 : VAR_0 + 2;

 for (;;) {
  VAR_3 = 1;
  for (VAR_2 = 3; VAR_2 * VAR_2 <= VAR_1; VAR_2 += 2) {
   if (VAR_1 % VAR_2 == 0)
    VAR_3 = 0;
  }
  if (VAR_3 == 1)
   break;
  VAR_1 += 2;
 }
 return (VAR_1);
}
