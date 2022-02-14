
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct keymap {int dummy; } ;
struct help {struct keymap* keymap; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int FUNC_0 (struct view*,struct help**,int,int ,int) ;

__attribute__((used)) static bool
FUNC_1(struct view *VAR_0, struct help **VAR_1, struct keymap *VAR_2, enum line_type VAR_3)
{
 struct help *VAR_4;

 if (!FUNC_0(VAR_0, &VAR_4, VAR_3, 0, 0))
  return 0;
 VAR_4->keymap = VAR_2;
 if (VAR_1)
  *VAR_1 = VAR_4;
 return 1;
}
