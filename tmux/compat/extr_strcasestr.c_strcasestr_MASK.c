
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;
 scalar_t__ FUNC_2 (unsigned char) ;

char *
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 char VAR_2, VAR_3;
 size_t VAR_4;

 if ((VAR_2 = *VAR_1++) != 0) {
  VAR_2 = (char)FUNC_2((unsigned char)VAR_2);
  VAR_4 = FUNC_0(VAR_1);
  do {
   do {
    if ((VAR_3 = *VAR_0++) == 0)
     return (((void*)0));
   } while ((char)FUNC_2((unsigned char)VAR_3) != VAR_2);
  } while (FUNC_1(VAR_0, VAR_1, VAR_4) != 0);
  VAR_0--;
 }
 return ((char *)VAR_0);
}
