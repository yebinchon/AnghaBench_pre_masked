
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 int VAR_0 ;
 char* FUNC_1 (int ,char*) ;
 int FUNC_2 (char**,char*,char const*,char const*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4(void)
{
 const char *VAR_1, *VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_1(VAR_0, "history-file");
 if (*VAR_2 == '\0')
  return (((void*)0));
 if (*VAR_2 == '/')
  return (FUNC_3(VAR_2));

 if (VAR_2[0] != '~' || VAR_2[1] != '/')
  return (((void*)0));
 if ((VAR_1 = FUNC_0()) == ((void*)0))
  return (((void*)0));
 FUNC_2(&VAR_3, "%s%s", VAR_1, VAR_2 + 1);
 return (VAR_3);
}
