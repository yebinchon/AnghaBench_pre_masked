
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_symbol {scalar_t__ merge; scalar_t__ flanked; int parent_right; int continued_right; int continued_down; } ;



__attribute__((used)) static bool
FUNC_0(const struct graph_symbol *VAR_0)
{
 if (!VAR_0->continued_down)
  return 0;

 if (!VAR_0->continued_right)
  return 0;

 if (!VAR_0->parent_right && !VAR_0->flanked)
  return 0;

 if (VAR_0->flanked)
  return 1;

 if (VAR_0->merge)
  return 1;

 return 0;
}
