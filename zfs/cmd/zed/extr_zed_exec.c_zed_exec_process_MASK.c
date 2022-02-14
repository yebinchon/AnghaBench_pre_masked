
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zed_strings_t ;
typedef int uint64_t ;


 char** FUNC_0 (int *) ;
 int FUNC_1 (int ,char const*,char const*,char**,int) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char const) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*,int) ;
 char* FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;

int
FUNC_8(uint64_t VAR_0, const char *VAR_1, const char *VAR_2,
    const char *VAR_3, zed_strings_t *VAR_4, zed_strings_t *VAR_5, int VAR_6)
{
 const char *VAR_7[4];
 const char *VAR_8 = "all";
 const char **VAR_9;
 const char *VAR_10;
 char **VAR_11;
 int VAR_12;

 if (!VAR_3 || !VAR_4 || !VAR_5 || VAR_6 < 0)
  return (-1);

 VAR_9 = VAR_7;

 if (VAR_1)
  *VAR_9++ = VAR_1;

 if (VAR_2)
  *VAR_9++ = VAR_2;

 if (VAR_8)
  *VAR_9++ = VAR_8;

 *VAR_9 = ((void*)0);

 VAR_11 = FUNC_0(VAR_5);

 for (VAR_10 = FUNC_6(VAR_4); VAR_10; VAR_10 = FUNC_7(VAR_4)) {
  for (VAR_9 = VAR_7; *VAR_9; VAR_9++) {
   VAR_12 = FUNC_4(*VAR_9);
   if ((FUNC_5(VAR_10, *VAR_9, VAR_12) == 0) && !FUNC_3(VAR_10[VAR_12]))
    FUNC_1(VAR_0, VAR_3, VAR_10, VAR_11, VAR_6);
  }
 }
 FUNC_2(VAR_11);
 return (0);
}
