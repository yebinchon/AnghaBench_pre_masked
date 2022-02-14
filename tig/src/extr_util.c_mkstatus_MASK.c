
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum status_label { ____Placeholder_status_label } status_label ;


 int FUNC_0 (char const***) ;
 int VAR_0 ;
 int VAR_1 ;

const char *
FUNC_1(const char VAR_2, enum status_label VAR_3)
{
 static char VAR_4[] = { '?', 0 };
 static const char *VAR_5[][2] = {
  { "!", "ignored" },
  { "?", "untracked" },
  { "A", "added" },
  { "C", "copied" },
  { "D", "deleted" },
  { "M", "modified" },
  { "R", "renamed" },
  { "U", "unmerged" },
 };
 int VAR_6;

 if (VAR_3 == VAR_1)
  return "";

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++) {
  if (VAR_2 == *VAR_5[VAR_6][0]) {
   if (VAR_3 == VAR_0)
    return VAR_5[VAR_6][1];
   else
    return VAR_5[VAR_6][0];
  }
 }

 VAR_4[0] = VAR_2;
 return VAR_4;
}
