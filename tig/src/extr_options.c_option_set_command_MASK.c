
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option_info {int dummy; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int FUNC_0 (char const***) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 struct option_info* FUNC_2 (char const***,int ,char*,char const*) ;
 int FUNC_3 (char const***,int ,char const*) ;
 char const*** VAR_1 ;
 int FUNC_4 (struct option_info*,int,char const**) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static enum status_code
FUNC_6(int VAR_2, const char *VAR_3[])
{
 struct option_info *VAR_4;

 if (VAR_2 < 2)
  return FUNC_1("Invalid set command: set option = value");

 if (FUNC_5(VAR_3[1], "="))
  return FUNC_1("No value assigned to %s", VAR_3[0]);

 VAR_4 = FUNC_2(VAR_1, FUNC_0(VAR_1), "", VAR_3[0]);
 if (VAR_4)
  return FUNC_4(VAR_4, VAR_2, VAR_3);

 {
  const char *VAR_5[][2] = {
   { "status-untracked-dirs", "status-show-untracked-dirs" },
  };
  int VAR_6 = FUNC_3(VAR_5, FUNC_0(VAR_5), VAR_3[0]);

  if (VAR_6 != -1) {
   VAR_4 = FUNC_2(VAR_1, FUNC_0(VAR_1), "", VAR_5[VAR_6][1]);
   if (VAR_4) {
    enum status_code VAR_7 = FUNC_4(VAR_4, VAR_2, VAR_3);

    if (VAR_7 != VAR_0)
     return VAR_7;
    return FUNC_1("%s has been renamed to %s",
          VAR_5[VAR_6][0], VAR_5[VAR_6][1]);
   }
  }
 }

 {
  const char *VAR_8[][2] = {
   { "author-width", "author" },
   { "filename-width", "file-name" },
   { "line-number-interval", "line-number" },
   { "show-author", "author" },
   { "show-date", "date" },
   { "show-file-size", "file-size" },
   { "show-filename", "file-name" },
   { "show-id", "id" },
   { "show-line-numbers", "line-number" },
   { "show-refs", "commit-title" },
   { "show-rev-graph", "commit-title" },
   { "title-overflow", "commit-title and text" },
  };
  int VAR_9 = FUNC_3(VAR_8, FUNC_0(VAR_8), VAR_3[0]);

  if (VAR_9 != -1)
   return FUNC_1("%s is obsolete; see tigrc(5) for how to set the %s column option",
         VAR_8[VAR_9][0], VAR_8[VAR_9][1]);

  if (!FUNC_5(VAR_3[0], "read-git-colors"))
   return FUNC_1("read-git-colors has been obsoleted by the git-colors option");

  if (!FUNC_5(VAR_3[0], "cmdline-args"))
   return FUNC_1("cmdline-args is obsolete; use view-specific options instead, e.g. main-options");
 }

 return FUNC_1("Unknown option name: %s", VAR_3[0]);
}
