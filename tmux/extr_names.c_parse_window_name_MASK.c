
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char const*) ;

char *
FUNC_8(const char *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3;

 VAR_2 = VAR_1 = FUNC_7(VAR_0);
 if (FUNC_6(VAR_2, "exec ", (sizeof "exec ") - 1) == 0)
  VAR_2 = VAR_2 + (sizeof "exec ") - 1;

 while (*VAR_2 == ' ' || *VAR_2 == '-')
  VAR_2++;
 if ((VAR_3 = FUNC_4(VAR_2, ' ')) != ((void*)0))
  *VAR_3 = '\0';

 if (*VAR_2 != '\0') {
  VAR_3 = VAR_2 + FUNC_5(VAR_2) - 1;
  while (VAR_3 > VAR_2 &&
      !FUNC_2((u_char)*VAR_3) &&
      !FUNC_3((u_char)*VAR_3))
   *VAR_3-- = '\0';
 }

 if (*VAR_2 == '/')
  VAR_2 = FUNC_0(VAR_2);
 VAR_2 = FUNC_7(VAR_2);
 FUNC_1(VAR_1);
 return (VAR_2);
}
