
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ lineno; } ;
struct view {int lines; scalar_t__ update_secs; scalar_t__ custom_lines; scalar_t__* vid; TYPE_2__* line; scalar_t__ columns; TYPE_3__ pos; TYPE_1__* env; TYPE_3__ prev_pos; int prev; } ;
struct TYPE_5__ {struct TYPE_5__* data; } ;
struct TYPE_4__ {scalar_t__ goto_lineno; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct view*) ;
 int FUNC_3 (struct view*) ;

void
FUNC_4(struct view *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->lines; VAR_1++)
  FUNC_1(VAR_0->line[VAR_1].data);
 FUNC_1(VAR_0->line);

 FUNC_2(VAR_0);
 VAR_0->prev_pos = VAR_0->pos;

 if (!VAR_0->prev && !VAR_0->lines && VAR_0->prev_pos.lineno == 0)
  VAR_0->prev_pos.lineno = VAR_0->env->goto_lineno;
 FUNC_0(&VAR_0->pos);

 if (VAR_0->columns)
  FUNC_3(VAR_0);

 VAR_0->line = ((void*)0);
 VAR_0->lines = 0;
 VAR_0->vid[0] = 0;
 VAR_0->custom_lines = 0;
 VAR_0->update_secs = 0;
}
