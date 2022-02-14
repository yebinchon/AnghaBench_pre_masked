
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_symbol {scalar_t__ continued_right; scalar_t__ flanked; scalar_t__ parent_right; scalar_t__ continued_up; int continued_down; scalar_t__ shift_left; scalar_t__ empty; } ;



__attribute__((used)) static bool
FUNC_0(const struct graph_symbol *VAR_0)
{
 if (VAR_0->empty)
  return 0;

 if (VAR_0->shift_left)
  return 0;

 if (!VAR_0->continued_down)
  return 0;

 if (VAR_0->continued_up)
  return 1;

 if (VAR_0->parent_right)
  return 0;

 if (VAR_0->flanked)
  return 0;

 if (VAR_0->continued_right)
  return 0;

 return 1;
}
