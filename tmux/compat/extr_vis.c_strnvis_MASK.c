
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,int,int,char const) ;

int
FUNC_3(char *VAR_2, const char *VAR_3, size_t VAR_4, int VAR_5)
{
 char *VAR_6, *VAR_7;
 char VAR_8[5];
 int VAR_9, VAR_10;

 VAR_10 = 0;
 for (VAR_6 = VAR_2, VAR_7 = VAR_6 + VAR_4 - 1; (VAR_9 = *VAR_3) && VAR_2 < VAR_7; ) {
  if (FUNC_0(VAR_9, VAR_5)) {
   if ((VAR_9 == '"' && (VAR_5 & VAR_0) != 0) ||
       (VAR_9 == '\\' && (VAR_5 & VAR_1) == 0)) {

    if (VAR_2 + 1 >= VAR_7) {
     VAR_10 = 2;
     break;
    }
    *VAR_2++ = '\\';
   }
   VAR_10 = 1;
   *VAR_2++ = VAR_9;
   VAR_3++;
  } else {
   VAR_10 = FUNC_2(VAR_8, VAR_9, VAR_5, *++VAR_3) - VAR_8;
   if (VAR_2 + VAR_10 <= VAR_7) {
    FUNC_1(VAR_2, VAR_8, VAR_10);
    VAR_2 += VAR_10;
   } else {
    VAR_3--;
    break;
   }
  }
 }
 if (VAR_4 > 0)
  *VAR_2 = '\0';
 if (VAR_2 + VAR_10 > VAR_7) {

  while ((VAR_9 = *VAR_3))
   VAR_2 += FUNC_2(VAR_8, VAR_9, VAR_5, *++VAR_3) - VAR_8;
 }
 return (VAR_2 - VAR_6);
}
