
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct mode_tree_item {scalar_t__ tagged; } ;
struct mode_tree_data {size_t line_size; TYPE_1__* line_list; } ;
struct TYPE_2__ {struct mode_tree_item* item; } ;



u_int
FUNC_0(struct mode_tree_data *VAR_0)
{
 struct mode_tree_item *VAR_1;
 u_int VAR_2, VAR_3;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->line_size; VAR_2++) {
  VAR_1 = VAR_0->line_list[VAR_2].item;
  if (VAR_1->tagged)
   VAR_3++;
 }
 return (VAR_3);
}
