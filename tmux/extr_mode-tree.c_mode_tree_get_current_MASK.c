
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mode_tree_data {size_t current; TYPE_2__* line_list; } ;
struct TYPE_4__ {TYPE_1__* item; } ;
struct TYPE_3__ {void* itemdata; } ;



void *
FUNC_0(struct mode_tree_data *VAR_0)
{
 return (VAR_0->line_list[VAR_0->current].item->itemdata);
}
