
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_symbol {scalar_t__ shift_left; scalar_t__ matches_commit; scalar_t__ below_commit; scalar_t__ new_column; scalar_t__ continued_up; scalar_t__ below_shift; int continued_right; scalar_t__ continued_down; } ;



__attribute__((used)) static bool
FUNC_0(const struct graph_symbol *VAR_0)
{
 if (VAR_0->continued_down)
  return 0;

 if (!VAR_0->continued_right)
  return 0;

 if (VAR_0->below_shift)
  return 0;

 if (VAR_0->continued_up || VAR_0->new_column || VAR_0->below_commit) {
  if (VAR_0->matches_commit)
   return 1;

  if (VAR_0->shift_left)
   return 1;
 }

 return 0;
}
