
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char*,char const) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0)
{
 const char *VAR_1;
 char *VAR_2, *VAR_3;

 VAR_3 = VAR_2 = FUNC_2(FUNC_1(VAR_0) * 2 + 1);
 for (VAR_1 = VAR_0; *VAR_1 != '\0'; VAR_1++) {
  if (FUNC_0("|&;<>()$`\\\"'*?[# =%", *VAR_1) != ((void*)0))
   *VAR_3++ = '\\';
  *VAR_3++ = *VAR_1;
 }
 *VAR_3 = '\0';
 return (VAR_2);
}
