
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_rule {int member_0; } ;
struct line_info {int attr; int bg; int fg; int member_0; } ;


 scalar_t__ VAR_0 ;
 struct line_info* FUNC_0 (char const*,struct line_rule*) ;
 char** VAR_1 ;
 scalar_t__ FUNC_1 (char const*,struct line_rule*,char const**) ;
 struct line_info* FUNC_2 (struct line_info*,char*) ;
 char* FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (char const*,char const*,size_t) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_2, char *VAR_3)
{
 struct line_info VAR_4 = {0};
 struct line_info *VAR_5 = ((void*)0);
 size_t VAR_6 = FUNC_5(VAR_2);
 int VAR_7;

 if (!VAR_1)
  return;

 for (VAR_7 = 0; VAR_1[VAR_7]; VAR_7++) {
  struct line_rule VAR_8 = {0};
  const char *VAR_9 = ((void*)0);
  struct line_info *VAR_10;
  const char *VAR_11 = VAR_1[VAR_7];
  const char *VAR_12 = FUNC_3(VAR_11, '=');

  if (!VAR_12 || VAR_6 != VAR_12 - VAR_11 ||
      FUNC_4(VAR_2, VAR_11, VAR_6))
   continue;

  if (!VAR_5) {
   VAR_5 = FUNC_2(&VAR_4, VAR_3);
   if (!VAR_5)
    return;
  }

  if (FUNC_1(VAR_12 + 1, &VAR_8, &VAR_9) == VAR_0 &&
      (VAR_10 = FUNC_0(VAR_9, &VAR_8))) {
   VAR_10->fg = VAR_4.fg;
   VAR_10->bg = VAR_4.bg;
   VAR_10->attr = VAR_4.attr;
  }
 }
}
