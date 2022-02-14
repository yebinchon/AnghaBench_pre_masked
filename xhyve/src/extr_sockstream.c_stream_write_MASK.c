
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int const*,size_t) ;

ssize_t
FUNC_1(int VAR_3, const void *VAR_4, ssize_t VAR_5)
{
 const uint8_t *VAR_6;
 ssize_t VAR_7 = 0;
 ssize_t VAR_8;

 VAR_6 = VAR_4;

 while (VAR_7 < VAR_5) {
  VAR_8 = FUNC_0(VAR_3, VAR_6 + VAR_7, (size_t)(VAR_5 - VAR_7));
  if (VAR_8 == 0)
   break;
  if (VAR_8 < 0) {
   if (VAR_2 == VAR_1 || VAR_2 == VAR_0)
    continue;
   return (VAR_8);
  }
  VAR_7 += VAR_8;
 }
 return (VAR_7);
}
