
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mode_tree_data {int current; int line_size; int offset; int height; } ;



void
FUNC_0(struct mode_tree_data *VAR_0, int VAR_1)
{
 if (VAR_0->current == VAR_0->line_size - 1) {
  if (VAR_1) {
   VAR_0->current = 0;
   VAR_0->offset = 0;
  }
 } else {
  VAR_0->current++;
  if (VAR_0->current > VAR_0->offset + VAR_0->height - 1)
   VAR_0->offset++;
 }
}
