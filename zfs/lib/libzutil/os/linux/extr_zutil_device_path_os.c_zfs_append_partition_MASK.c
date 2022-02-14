
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

int
FUNC_4(char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2);

 if ((FUNC_3(VAR_2, VAR_0, FUNC_2(VAR_0)) == 0) ||
     (FUNC_3(VAR_2, VAR_1, FUNC_2(VAR_1)) == 0)) {
  if (VAR_4 + 6 >= VAR_3)
   return (-1);

  (void) FUNC_1(VAR_2, "-part1");
  VAR_4 += 6;
 } else {
  if (VAR_4 + 2 >= VAR_3)
   return (-1);

  if (FUNC_0(VAR_2[VAR_4-1])) {
   (void) FUNC_1(VAR_2, "p1");
   VAR_4 += 2;
  } else {
   (void) FUNC_1(VAR_2, "1");
   VAR_4 += 1;
  }
 }

 return (VAR_4);
}
