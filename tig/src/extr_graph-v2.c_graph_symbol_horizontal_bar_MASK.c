
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_symbol {int below_commit; int continued_up_left; scalar_t__ continued_up; int continued_right; int parent_right; scalar_t__ continued_down; scalar_t__ shift_left; int next_right; } ;



__attribute__((used)) static bool
FUNC_0(const struct graph_symbol *VAR_0)
{
 if (!VAR_0->next_right)
  return 0;

 if (VAR_0->shift_left)
  return 1;

 if (VAR_0->continued_down)
  return 0;

 if (!VAR_0->parent_right && !VAR_0->continued_right)
  return 0;

 if ((VAR_0->continued_up && !VAR_0->continued_up_left))
  return 0;

 if (!VAR_0->below_commit)
  return 1;

 return 0;
}
