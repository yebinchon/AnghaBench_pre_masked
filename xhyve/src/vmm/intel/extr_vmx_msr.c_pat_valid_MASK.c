
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static bool
FUNC_0(uint64_t VAR_0)
{
 int VAR_1, VAR_2;







 for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
  VAR_2 = (VAR_0 >> (VAR_1 * 8)) & 0xff;
  if (VAR_2 == 2 || VAR_2 == 3 || VAR_2 >= 8)
   return (0);
 }
 return (1);
}
