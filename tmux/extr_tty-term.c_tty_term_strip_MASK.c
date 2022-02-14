
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,char) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_0)
{
 const char *VAR_1;
 static char VAR_2[8192];
 size_t VAR_3;


 if (FUNC_0(VAR_0, '$') == ((void*)0))
  return (FUNC_1(VAR_0));

 VAR_3 = 0;
 for (VAR_1 = VAR_0; *VAR_1 != '\0'; VAR_1++) {
  if (*VAR_1 == '$' && *(VAR_1 + 1) == '<') {
   while (*VAR_1 != '\0' && *VAR_1 != '>')
    VAR_1++;
   if (*VAR_1 == '>')
    VAR_1++;
  }

  VAR_2[VAR_3++] = *VAR_1;
  if (VAR_3 == (sizeof VAR_2) - 1)
   break;
 }
 VAR_2[VAR_3] = '\0';

 return (FUNC_1(VAR_2));
}
