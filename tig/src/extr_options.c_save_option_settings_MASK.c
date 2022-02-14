
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option_info {int name; } ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (struct option_info*) ;
 int VAR_0 ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (struct option_info*,char*,int) ;
 int FUNC_3 (int *,char*,char const*,...) ;
 struct option_info* VAR_1 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int ,char*) ;

__attribute__((used)) static bool
FUNC_6(FILE *VAR_2)
{
 char VAR_3[VAR_0];
 int VAR_4;

 if (!FUNC_3(VAR_2, "%s", "\n## Settings\n"))
  return 0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  struct option_info *VAR_5 = &VAR_1[VAR_4];
  const char *VAR_6 = FUNC_1(VAR_5->name);
  const char *VAR_7 = FUNC_2(VAR_5, VAR_3, sizeof(VAR_3));

  if (!VAR_7)
   return 0;

  if (!FUNC_5(VAR_6, FUNC_4(VAR_6), "-args"))
   continue;

  if (!FUNC_3(VAR_2, "\nset %-25s = %s", VAR_6, VAR_7))
   return 0;
 }

 return 1;
}
