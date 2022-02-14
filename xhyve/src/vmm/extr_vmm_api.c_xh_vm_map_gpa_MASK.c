
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void *
FUNC_1(uint64_t VAR_6, size_t VAR_7)
{
 FUNC_0(VAR_5 == VAR_0);

 if ((VAR_6 < VAR_3) && (VAR_7 <= VAR_3) && ((VAR_6 + VAR_7) <= VAR_3)) {
  return ((void *) (((uintptr_t) VAR_4) + VAR_6));
 }

 if (VAR_6 >= (4ull << 30)) {
  VAR_6 -= (4ull << 30);
  if ((VAR_6 < VAR_1) && (VAR_7 <= VAR_1) && ((VAR_6 + VAR_7) <= VAR_1)) {
   return ((void *) (((uintptr_t) VAR_2) + VAR_6));
  }
 }

 return (((void*)0));
}
