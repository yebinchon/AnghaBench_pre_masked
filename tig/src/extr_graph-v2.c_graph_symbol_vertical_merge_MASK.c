
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_symbol {int continued_right; scalar_t__ parent_down; scalar_t__ continued_left; scalar_t__ continued_up; scalar_t__ merge; int matches_commit; scalar_t__ next_right; scalar_t__ continued_up_left; scalar_t__ shift_left; int below_commit; int new_column; scalar_t__ empty; } ;



__attribute__((used)) static bool
FUNC_0(const struct graph_symbol *VAR_0)
{
 if (VAR_0->empty)
  return 0;

 if (!VAR_0->continued_up && !VAR_0->new_column && !VAR_0->below_commit)
  return 0;

 if (VAR_0->shift_left && VAR_0->continued_up_left)
  return 0;

 if (VAR_0->next_right)
  return 0;

 if (!VAR_0->matches_commit)
  return 0;

 if (VAR_0->merge && VAR_0->continued_up && VAR_0->continued_left && VAR_0->parent_down && !VAR_0->continued_right)
  return 1;

 return 0;
}
