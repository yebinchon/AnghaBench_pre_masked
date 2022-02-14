
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t lineno; } ;
struct view {int lines; TYPE_1__ pos; struct line* line; } ;
struct line {int type; int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct view*,struct line*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct view*,struct line*) ;

__attribute__((used)) static bool
FUNC_5(struct view *VAR_0)
{
 struct line *VAR_1 = &VAR_0->line[VAR_0->pos.lineno];

 FUNC_0(VAR_0->lines);

 if (!VAR_1->data) {
  if (FUNC_2(VAR_0, VAR_1)) {
   FUNC_1("Nothing to update");
   return 0;
  }

  if (!FUNC_4(VAR_0, VAR_1 + 1)) {
   FUNC_1("Failed to update file status");
   return 0;
  }

 } else if (!FUNC_3(VAR_1->data, VAR_1->type)) {
  FUNC_1("Failed to update file status");
  return 0;
 }

 return 1;
}
