
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mode_tree_data {int current; int height; int offset; } ;



__attribute__((used)) static void
FUNC_0(struct mode_tree_data *VAR_0)
{




 if (VAR_0->current > VAR_0->height - 1)
  VAR_0->offset = VAR_0->current - VAR_0->height + 1;
}
