
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct mode_tree_menu {int line; int itemdata; struct client* c; struct mode_tree_data* data; } ;
struct mode_tree_item {int itemdata; int name; } ;
struct mode_tree_data {int offset; int line_size; int current; int references; struct menu_item* menu; TYPE_1__* line_list; } ;
struct menu_item {int dummy; } ;
struct menu {int dummy; } ;
struct client {int dummy; } ;
struct TYPE_2__ {struct mode_tree_item* item; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct menu*,struct menu_item const*,int *,int *,int *) ;
 struct menu* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct menu*,int ,int *,int,int,struct client*,int *,int ,struct mode_tree_menu*) ;
 int FUNC_4 (struct menu*) ;
 int VAR_0 ;
 struct menu_item* VAR_1 ;
 int FUNC_5 (char**,char*,int ) ;
 struct mode_tree_menu* FUNC_6 (int) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(struct mode_tree_data *VAR_2, struct client *VAR_3, u_int VAR_4,
    u_int VAR_5, int VAR_6)
{
 struct mode_tree_item *VAR_7;
 struct menu *VAR_8;
 const struct menu_item *VAR_9;
 struct mode_tree_menu *VAR_10;
 char *VAR_11;
 u_int VAR_12;

 if (VAR_2->offset + VAR_5 > VAR_2->line_size - 1)
  VAR_12 = VAR_2->current;
 else
  VAR_12 = VAR_2->offset + VAR_5;
 VAR_7 = VAR_2->line_list[VAR_12].item;

 if (!VAR_6) {
  VAR_9 = VAR_2->menu;
  FUNC_5(&VAR_11, "#[align=centre]%s", VAR_7->name);
 } else {
  VAR_9 = VAR_1;
  VAR_11 = FUNC_7("");
 }
 VAR_8 = FUNC_2(VAR_11);
 FUNC_1(VAR_8, VAR_9, ((void*)0), ((void*)0), ((void*)0));
 FUNC_0(VAR_11);

 VAR_10 = FUNC_6(sizeof *VAR_10);
 VAR_10->data = VAR_2;
 VAR_10->c = VAR_3;
 VAR_10->line = VAR_12;
 VAR_10->itemdata = VAR_7->itemdata;
 VAR_2->references++;

 if (FUNC_3(VAR_8, 0, ((void*)0), VAR_4, VAR_5, VAR_3, ((void*)0), VAR_0,
     VAR_10) != 0)
  FUNC_4(VAR_8);
}
