
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t lineno; } ;
struct view {TYPE_1__ pos; struct line* line; } ;
struct line {int dummy; } ;
struct diff_state {TYPE_1__ pos; int lineno; int file; } ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;


 int VAR_0 ;
 int FUNC_0 (struct view*,struct line*) ;
 char* FUNC_1 (struct view*,struct line*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (struct view*,struct line*) ;

void
FUNC_4(struct view *VAR_1, struct diff_state *VAR_2, enum open_flags VAR_3)
{
 if (VAR_3 & VAR_0) {
  struct line *VAR_4 = &VAR_1->line[VAR_1->pos.lineno];
  const char *VAR_5 = FUNC_3(VAR_1, VAR_4) ? FUNC_1(VAR_1, VAR_4) : ((void*)0);

  if (VAR_5) {
   VAR_2->file = FUNC_2(VAR_5);
   VAR_2->lineno = FUNC_0(VAR_1, VAR_4);
   VAR_2->pos = VAR_1->pos;
  }
 }
}
