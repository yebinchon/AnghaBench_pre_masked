
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t u_int ;
struct mode_tree_data {size_t line_size; size_t current; int height; int offset; TYPE_2__* line_list; } ;
struct TYPE_4__ {TYPE_1__* item; } ;
struct TYPE_3__ {scalar_t__ tag; } ;



void
FUNC_0(struct mode_tree_data *VAR_0, uint64_t VAR_1)
{
 u_int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->line_size; VAR_2++) {
  if (VAR_0->line_list[VAR_2].item->tag == VAR_1)
   break;
 }
 if (VAR_2 != VAR_0->line_size) {
  VAR_0->current = VAR_2;
  if (VAR_0->current > VAR_0->height - 1)
   VAR_0->offset = VAR_0->current - VAR_0->height + 1;
  else
   VAR_0->offset = 0;
 } else {
  VAR_0->current = 0;
  VAR_0->offset = 0;
 }
}
