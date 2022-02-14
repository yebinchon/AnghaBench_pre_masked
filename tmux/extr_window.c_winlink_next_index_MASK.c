
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlinks {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct winlinks*,int) ;

__attribute__((used)) static int
FUNC_1(struct winlinks *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2;
 do {
  if (FUNC_0(VAR_1, VAR_3) == ((void*)0))
   return (VAR_3);
  if (VAR_3 == VAR_0)
   VAR_3 = 0;
  else
   VAR_3++;
 } while (VAR_3 != VAR_2);
 return (-1);
}
