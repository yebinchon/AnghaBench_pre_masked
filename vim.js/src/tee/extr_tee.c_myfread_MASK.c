
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 () ;

int
FUNC_1(char *VAR_1, int VAR_2 , int VAR_3, FILE *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;

 while ((VAR_6 < VAR_3) && ((VAR_5 = FUNC_0()) != VAR_0))
 {
  *(VAR_1++) = VAR_5;
  VAR_6++;
  if (VAR_5 == '\n' || VAR_5 == '\r')
   break;
 }
 return VAR_6;
}
