
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct mode_tree_item {int itemdata; scalar_t__ tagged; } ;
struct mode_tree_data {size_t line_size; size_t current; int modedata; TYPE_1__* line_list; } ;
struct client {int dummy; } ;
typedef int (* mode_tree_each_cb ) (int ,int ,struct client*,int ) ;
typedef int key_code ;
struct TYPE_2__ {struct mode_tree_item* item; } ;



void
FUNC_0(struct mode_tree_data *VAR_0, mode_tree_each_cb VAR_1,
    struct client *VAR_2, key_code VAR_3, int VAR_4)
{
 struct mode_tree_item *VAR_5;
 u_int VAR_6;
 int VAR_7;

 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0->line_size; VAR_6++) {
  VAR_5 = VAR_0->line_list[VAR_6].item;
  if (VAR_5->tagged) {
   VAR_7 = 1;
   VAR_1(VAR_0->modedata, VAR_5->itemdata, VAR_2, VAR_3);
  }
 }
 if (!VAR_7 && VAR_4) {
  VAR_5 = VAR_0->line_list[VAR_0->current].item;
  VAR_1(VAR_0->modedata, VAR_5->itemdata, VAR_2, VAR_3);
 }
}
