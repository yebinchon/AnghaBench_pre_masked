
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char**,size_t*,char*,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(char **VAR_0, size_t *VAR_1, const char *VAR_2)
{
 char *VAR_3;

 if (**VAR_0 != '\0')
  FUNC_1(VAR_0, VAR_1, " ");

 VAR_3 = FUNC_0(VAR_2);
 FUNC_1(VAR_0, VAR_1, "%s", VAR_3);
 FUNC_2(VAR_3);
}
