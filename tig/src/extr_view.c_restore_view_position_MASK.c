
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lineno; int col; int offset; } ;
struct view {scalar_t__ lines; TYPE_1__ prev_pos; TYPE_1__ pos; int win; scalar_t__ pipe; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct view*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct view*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(struct view *VAR_0)
{

 if (!FUNC_0(&VAR_0->prev_pos) ||
     (VAR_0->pipe && VAR_0->lines <= VAR_0->prev_pos.lineno))
  return FUNC_2(VAR_0, VAR_0->pos.offset, VAR_0->pos.lineno);



 if (FUNC_0(&VAR_0->pos)) {
  FUNC_1(&VAR_0->prev_pos);
  return 0;
 }

 if (FUNC_2(VAR_0, VAR_0->prev_pos.offset, VAR_0->prev_pos.lineno) &&
     FUNC_3(VAR_0))
  FUNC_4(VAR_0->win);

 VAR_0->pos.col = VAR_0->prev_pos.col;
 FUNC_1(&VAR_0->prev_pos);

 return 1;
}
