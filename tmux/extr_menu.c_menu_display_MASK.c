
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int ;
struct menu_data {int flags; int choice; void* data; int cb; struct menu* menu; void* py; void* px; int s; int fs; struct cmdq_item* item; } ;
struct menu {scalar_t__ width; scalar_t__ count; } ;
struct cmdq_item {int dummy; } ;
struct cmd_find_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ sx; scalar_t__ sy; } ;
struct client {TYPE_1__ tty; } ;
typedef int menu_choice_cb ;


 int FUNC_0 (int *,struct cmd_find_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct client*,int ,int ,int ,int ,struct menu_data*) ;
 struct menu_data* FUNC_3 (int,int) ;

int
FUNC_4(struct menu *VAR_3, int VAR_4, struct cmdq_item *VAR_5, u_int VAR_6,
    u_int VAR_7, struct client *VAR_8, struct cmd_find_state *VAR_9, menu_choice_cb VAR_10,
    void *VAR_11)
{
 struct menu_data *VAR_12;

 if (VAR_8->tty.sx < VAR_3->width + 4 || VAR_8->tty.sy < VAR_3->count + 2)
  return (-1);

 VAR_12 = FUNC_3(1, sizeof *VAR_12);
 VAR_12->item = VAR_5;
 VAR_12->flags = VAR_4;

 if (VAR_9 != ((void*)0))
  FUNC_0(&VAR_12->fs, VAR_9);
 FUNC_1(&VAR_12->s, VAR_3->width + 4, VAR_3->count + 2, 0);

 VAR_12->px = VAR_6;
 VAR_12->py = VAR_7;

 VAR_12->menu = VAR_3;
 VAR_12->choice = -1;

 VAR_12->cb = VAR_10;
 VAR_12->data = VAR_11;

 FUNC_2(VAR_8, 0, VAR_0, VAR_2, VAR_1,
     VAR_12);
 return (0);
}
