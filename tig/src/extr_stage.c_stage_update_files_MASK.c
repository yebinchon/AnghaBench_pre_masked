
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {struct line* line; struct view* parent; } ;
struct line {int dummy; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int VAR_0 ;
 struct line* FUNC_0 (struct view*,struct line*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct view*,struct line*,int *,int) ;
 scalar_t__ FUNC_3 (struct view*,struct line*) ;
 struct view VAR_1 ;

__attribute__((used)) static bool
FUNC_4(struct view *VAR_2, enum line_type VAR_3)
{
 struct line *VAR_4;

 if (VAR_2->parent != &VAR_1) {
  bool VAR_5 = 0;

  for (VAR_4 = VAR_2->line; (VAR_4 = FUNC_0(VAR_2, VAR_4, VAR_0)); VAR_4++) {
   if (!FUNC_2(VAR_2, VAR_4, ((void*)0), 0)) {
    FUNC_1("Failed to apply chunk");
    return 0;
   }
   VAR_5 = 1;
  }

  return VAR_5;
 }

 VAR_2 = VAR_2->parent;
 VAR_4 = FUNC_0(VAR_2, VAR_2->line, VAR_3);
 return VAR_4 && FUNC_3(VAR_2, VAR_4 + 1);
}
