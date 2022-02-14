
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,unsigned char*,size_t) ;

ssize_t
FUNC_1(int VAR_2, void *VAR_3, size_t VAR_4)
{
 unsigned char *VAR_5;
 size_t VAR_6;
 ssize_t VAR_7;

 VAR_5 = VAR_3;
 VAR_6 = VAR_4;
 while (VAR_6 > 0) {
  if ((VAR_7 = FUNC_0(VAR_2, VAR_5, VAR_6)) < 0) {
   if (VAR_1 == VAR_0)
    continue;
   else
    return (-1);

  } else if (VAR_7 == 0) {
   break;
  }
  VAR_6 -= VAR_7;
  VAR_5 += VAR_7;
 }
 return (VAR_4 - VAR_6);
}
