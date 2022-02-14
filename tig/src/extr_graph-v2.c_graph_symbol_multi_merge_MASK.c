
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graph_symbol {int continued_right; int parent_right; int parent_down; } ;



__attribute__((used)) static bool
FUNC_0(const struct graph_symbol *VAR_0)
{
 if (!VAR_0->parent_down)
  return 0;

 if (!VAR_0->parent_right && !VAR_0->continued_right)
  return 0;

 return 1;
}
