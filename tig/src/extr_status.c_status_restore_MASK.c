
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int lineno; int offset; } ;
struct TYPE_6__ {int lineno; int offset; } ;
struct view {int lines; TYPE_3__ prev_pos; TYPE_2__ pos; TYPE_1__* line; } ;
struct TYPE_5__ {int data; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(struct view *VAR_0)
{
 if (!FUNC_0(&VAR_0->prev_pos))
  return;

 if (VAR_0->prev_pos.lineno >= VAR_0->lines)
  VAR_0->prev_pos.lineno = VAR_0->lines - 1;
 while (VAR_0->prev_pos.lineno < VAR_0->lines && !VAR_0->line[VAR_0->prev_pos.lineno].data)
  VAR_0->prev_pos.lineno++;
 while (VAR_0->prev_pos.lineno > 0 && !VAR_0->line[VAR_0->prev_pos.lineno].data)
  VAR_0->prev_pos.lineno--;


 if (VAR_0->prev_pos.lineno < VAR_0->lines)
  VAR_0->pos.lineno = VAR_0->prev_pos.lineno;
 else
  VAR_0->pos.lineno = 1;

 if (VAR_0->prev_pos.offset > VAR_0->pos.lineno)
  VAR_0->pos.offset = VAR_0->pos.lineno;
 else if (VAR_0->prev_pos.offset < VAR_0->lines)
  VAR_0->pos.offset = VAR_0->prev_pos.offset;

 FUNC_1(&VAR_0->prev_pos);
}
