
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_rule {int name; int member_0; } ;
struct line_info {int attr; int bg; int fg; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;


 int FUNC_0 (char const***) ;
 int VAR_0 ;
 struct line_info* FUNC_1 (char const*,struct line_rule*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char const***,int ,int ) ;
 int FUNC_4 (char const*,struct line_rule*,char const**) ;
 int FUNC_5 (int*,char const*) ;
 int FUNC_6 (int *,char const*) ;

__attribute__((used)) static enum status_code
FUNC_7(int VAR_1, const char *VAR_2[])
{
 struct line_rule VAR_3 = {0};
 const char *VAR_4 = ((void*)0);
 struct line_info *VAR_5;
 enum status_code VAR_6;

 if (VAR_1 < 3)
  return FUNC_2("Invalid color mapping: color area fgcolor bgcolor [attrs]");

 VAR_6 = FUNC_4(VAR_2[0], &VAR_3, &VAR_4);
 if (VAR_6 != VAR_0)
  return VAR_6;

 VAR_5 = FUNC_1(VAR_4, &VAR_3);
 if (!VAR_5) {
  static const char *VAR_7[][2] = {
   { "acked", "'    Acked-by'" },
   { "diff-copy-from", "'copy from '" },
   { "diff-copy-to", "'copy to '" },
   { "diff-deleted-file-mode", "'deleted file mode '" },
   { "diff-dissimilarity", "'dissimilarity '" },
   { "diff-rename-from", "'rename from '" },
   { "diff-rename-to", "'rename to '" },
   { "diff-tree", "'diff-tree '" },
   { "filename", "file" },
   { "help-keymap", "help.section" },
   { "main-revgraph", "" },
   { "pp-adate", "'AuthorDate: '" },
   { "pp-author", "'Author: '" },
   { "pp-cdate", "'CommitDate: '" },
   { "pp-commit", "'Commit: '" },
   { "pp-date", "'Date: '" },
   { "reviewed", "'    Reviewed-by'" },
   { "signoff", "'    Signed-off-by'" },
   { "stat-head", "status.header" },
   { "stat-section", "status.section" },
   { "tested", "'    Tested-by'" },
   { "tree-dir", "tree.directory" },
   { "tree-file", "tree.file" },
   { "tree-head", "tree.header" },
  };
  int VAR_8;

  VAR_8 = FUNC_3(VAR_7, FUNC_0(VAR_7), VAR_3.name);
  if (VAR_8 != -1) {
   if (!*VAR_7[VAR_8][1])
    return FUNC_2("%s is obsolete", VAR_2[0]);

   VAR_6 = FUNC_4(VAR_7[VAR_8][1], &VAR_3, VAR_4 ? ((void*)0) : &VAR_4);
   if (VAR_6 != VAR_0)
    return VAR_6;
   VAR_5 = FUNC_1(VAR_4, &VAR_3);
  }

  if (!VAR_5)
   return FUNC_2("Unknown color name: %s", VAR_2[0]);

  VAR_6 = FUNC_2("%s has been replaced by %s",
        VAR_7[VAR_8][0], VAR_7[VAR_8][1]);
 }

 if (!FUNC_6(&VAR_5->fg, VAR_2[1]))
  return FUNC_2("Unknown color: %s", VAR_2[1]);

 if (!FUNC_6(&VAR_5->bg, VAR_2[2]))
  return FUNC_2("Unknown color: %s", VAR_2[2]);

 VAR_5->attr = 0;
 while (VAR_1-- > 3) {
  int VAR_9;

  if (!FUNC_5(&VAR_9, VAR_2[VAR_1]))
   return FUNC_2("Unknown color attribute: %s", VAR_2[VAR_1]);
  VAR_5->attr |= VAR_9;
 }

 return VAR_6;
}
