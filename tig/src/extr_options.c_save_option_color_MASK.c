
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_info {char* prefix; int attr; int bg; int fg; struct line_info* next; } ;
struct line_rule {char* line; int name; struct line_info info; } ;
typedef int FILE ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char const*,char const*,char const*,char const*,char const*,int,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static bool
FUNC_5(void *VAR_0, const struct line_rule *VAR_1)
{
 FILE *VAR_2 = VAR_0;
 const struct line_info *VAR_3;

 for (VAR_3 = &VAR_1->info; VAR_3; VAR_3 = VAR_3->next) {
  const char *VAR_4 = VAR_3->prefix ? VAR_3->prefix : "";
  const char *VAR_5 = VAR_3->prefix ? "." : "";
  const char *VAR_6 = *VAR_1->line ? "\"" : "";
  const char *VAR_7 = *VAR_1->line ? VAR_1->line : FUNC_0(VAR_1->name);
  int VAR_8 = FUNC_4(VAR_4) + FUNC_4(VAR_5) + 2 * FUNC_4(VAR_6) + FUNC_4(VAR_7);
  int VAR_9 = VAR_8 > 30 ? 0 : 30 - VAR_8;

  if (!FUNC_1(VAR_2, "\ncolor %s%s%s%s%s%-*s",
          VAR_4, VAR_5, VAR_6, VAR_7, VAR_6, VAR_9, "")
      || !FUNC_3(VAR_2, VAR_3->fg)
      || !FUNC_3(VAR_2, VAR_3->bg)
      || !FUNC_2(VAR_2, VAR_3->attr))
   return 0;
 }

 return 1;
}
