
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct window_mode_entry {TYPE_2__* mode; } ;
struct key_table {int references; } ;
struct key_binding {int dummy; } ;
struct cmdq_item {int target; int client; } ;
struct cmd_find_state {int wl; int s; TYPE_3__* wp; } ;
struct client {int dummy; } ;
typedef int key_code ;
struct TYPE_6__ {TYPE_1__* window; int modes; } ;
struct TYPE_5__ {int (* key_table ) (struct window_mode_entry*) ;} ;
struct TYPE_4__ {int options; } ;


 int VAR_0 ;
 struct window_mode_entry* FUNC_0 (int *) ;
 struct cmdq_item* FUNC_1 (struct key_binding*,struct cmdq_item*,struct client*,int *,int *) ;
 struct key_binding* FUNC_2 (struct key_table*,int) ;
 struct key_table* FUNC_3 (int ,int) ;
 int FUNC_4 (struct key_table*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (struct window_mode_entry*) ;
 int FUNC_7 (TYPE_3__*,int ,int ,int ,int,int *) ;

__attribute__((used)) static struct cmdq_item *
FUNC_8(struct client *VAR_1, struct cmd_find_state *VAR_2,
    struct cmdq_item *VAR_3, key_code VAR_4)
{
 struct window_mode_entry *VAR_5;
 struct key_table *VAR_6;
 struct key_binding *VAR_7;

 VAR_5 = FUNC_0(&VAR_2->wp->modes);
 if (VAR_5 == ((void*)0) || VAR_5->mode->key_table == ((void*)0)) {
  if (FUNC_5(VAR_2->wp->window->options, "xterm-keys"))
   VAR_4 |= VAR_0;
  FUNC_7(VAR_2->wp, VAR_3->client, VAR_2->s, VAR_2->wl, VAR_4, ((void*)0));
  return (VAR_3);
 }
 VAR_6 = FUNC_3(VAR_5->mode->key_table(VAR_5), 1);

 VAR_7 = FUNC_2(VAR_6, VAR_4 & ~VAR_0);
 if (VAR_7 != ((void*)0)) {
  VAR_6->references++;
  VAR_3 = FUNC_1(VAR_7, VAR_3, VAR_1, ((void*)0), &VAR_3->target);
  FUNC_4(VAR_6);
 }
 return (VAR_3);
}
