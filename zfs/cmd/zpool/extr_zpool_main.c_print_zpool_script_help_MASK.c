
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,int) ;
 int FUNC_2 (char*,char**,int *,char***,int*) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_0, char *VAR_1)
{
 char *VAR_2[] = {VAR_1, "-h", ((void*)0)};
 char **VAR_3 = ((void*)0);
 int VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, ((void*)0), &VAR_3,
     &VAR_4);
 if (VAR_5 != 0 || VAR_3 == ((void*)0) || VAR_4 <= 0) {
  if (VAR_3 != ((void*)0))
   FUNC_1(VAR_3, VAR_4);
  return;
 }

 for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  if (!FUNC_0(VAR_3[VAR_6]))
   FUNC_3("  %-14s  %s\n", VAR_0, VAR_3[VAR_6]);

 FUNC_1(VAR_3, VAR_4);
}
