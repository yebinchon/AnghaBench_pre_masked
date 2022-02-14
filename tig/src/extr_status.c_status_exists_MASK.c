
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {unsigned long lines; struct line* line; } ;
struct TYPE_2__ {int name; } ;
struct status {TYPE_1__ new; int status; } ;
struct line {int type; struct status* data; } ;
typedef enum line_type { ____Placeholder_line_type } line_type ;


 int FUNC_0 (struct view*) ;
 int FUNC_1 (struct view*,unsigned long) ;
 int FUNC_2 (struct view*) ;
 int FUNC_3 (int ,int ) ;

bool
FUNC_4(struct view *VAR_0, struct status *VAR_1, enum line_type VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_0->lines; VAR_3++) {
  struct line *VAR_4 = &VAR_0->line[VAR_3];
  struct status *VAR_5 = VAR_4->data;

  if (VAR_4->type != VAR_2)
   continue;
  if ((!VAR_5 && (!VAR_1 || !VAR_1->status) && VAR_4[1].data) ||
      (VAR_5 && VAR_1 && !FUNC_3(VAR_1->new.name, VAR_5->new.name))) {
   FUNC_1(VAR_0, VAR_3);
   FUNC_2(VAR_0);
   return 1;
  }
 }

 return 0;
}
