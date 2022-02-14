
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char**,char*,char const*,...) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;

char *
FUNC_3(void)
{
 const char *VAR_1;
 char *VAR_2 = ((void*)0);

 VAR_1 = FUNC_1("ZPOOL_SCRIPTS_PATH");
 if (VAR_1 != ((void*)0))
  return (FUNC_2(VAR_1));

 VAR_1 = FUNC_1("HOME");
 if (VAR_1 != ((void*)0)) {
  if (FUNC_0(&VAR_2, "%s/.zpool.d:%d",
      VAR_1, VAR_0) != -1) {
   return (VAR_2);
  }
 }

 if (FUNC_0(&VAR_2, "%s", VAR_0) != -1)
  return (VAR_2);

 return (((void*)0));
}
