
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {int dummy; } ;


 struct line* FUNC_0 (struct view*,char const*) ;
 int FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

struct line *
FUNC_6(struct view *VAR_0, const char *VAR_1, size_t VAR_2)
{
 const char *VAR_3 = VAR_1 + VAR_2;
 const char *VAR_4 = VAR_3 + FUNC_4(VAR_3, " ");
 size_t VAR_5 = FUNC_3(VAR_4);
 char *VAR_6 = FUNC_2(VAR_4, '|');



 if (!VAR_6 || VAR_6 == VAR_4)
  return ((void*)0);
 if ((VAR_4[VAR_5 - 1] == '-' || VAR_4[VAR_5 - 1] == '+') ||
     FUNC_5(VAR_6, " 0") || FUNC_5(VAR_6, "Bin") || FUNC_5(VAR_6, "Unmerged") ||
     (VAR_4[VAR_5 - 1] == '0' && (FUNC_5(VAR_4, "=>") || !FUNC_1(VAR_4, "..."))))
  return FUNC_0(VAR_0, VAR_1);
 return ((void*)0);
}
