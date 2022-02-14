
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static boolean_t
FUNC_0(const uint32_t *VAR_6, size_t VAR_7, int *VAR_8)
{
 if (VAR_7 > 0) {
  if (*VAR_6 == VAR_2) {
   *VAR_8 = VAR_4;
   return (VAR_1);
  }
  if (*VAR_6 == VAR_3) {
   *VAR_8 = VAR_5;
   return (VAR_1);
  }
 }

 return (VAR_0);
}
