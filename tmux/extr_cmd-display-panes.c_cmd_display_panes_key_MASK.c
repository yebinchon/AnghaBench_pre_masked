
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct window_pane {int id; } ;
struct window {int dummy; } ;
struct key_event {char key; } ;
struct cmdq_item {int dummy; } ;
struct cmd_parse_result {int status; char* error; int cmdlist; } ;
struct cmd_display_panes_data {int command; } ;
struct client {TYPE_2__* session; struct cmd_display_panes_data* overlay_data; } ;
struct TYPE_4__ {TYPE_1__* curw; } ;
struct TYPE_3__ {struct window* window; } ;





 int FUNC_0 (int ) ;
 struct cmd_parse_result* FUNC_1 (char*,int *) ;
 char* FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct client*,struct cmdq_item*) ;
 struct cmdq_item* FUNC_4 (int ,int *,int *,int ) ;
 struct cmdq_item* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 struct window_pane* FUNC_7 (struct window*,char) ;
 int FUNC_8 (struct window*) ;
 int FUNC_9 (char**,char*,int ) ;

__attribute__((used)) static int
FUNC_10(struct client *VAR_0, struct key_event *VAR_1)
{
 struct cmd_display_panes_data *VAR_2 = VAR_0->overlay_data;
 struct cmdq_item *VAR_3;
 char *VAR_4, *VAR_5;
 struct window *VAR_6 = VAR_0->session->curw->window;
 struct window_pane *VAR_7;
 struct cmd_parse_result *VAR_8;

 if (VAR_1->key < '0' || VAR_1->key > '9')
  return (-1);

 VAR_7 = FUNC_7(VAR_6, VAR_1->key - '0');
 if (VAR_7 == ((void*)0))
  return (1);
 FUNC_8(VAR_6);

 FUNC_9(&VAR_5, "%%%u", VAR_7->id);
 VAR_4 = FUNC_2(VAR_2->command, VAR_5, 1);

 VAR_8 = FUNC_1(VAR_4, ((void*)0));
 switch (VAR_8->status) {
 case 130:
  VAR_3 = ((void*)0);
  break;
 case 129:
  VAR_3 = FUNC_5(VAR_8->error);
  FUNC_6(VAR_8->error);
  FUNC_3(VAR_0, VAR_3);
  break;
 case 128:
  VAR_3 = FUNC_4(VAR_8->cmdlist, ((void*)0), ((void*)0), 0);
  FUNC_0(VAR_8->cmdlist);
  FUNC_3(VAR_0, VAR_3);
  break;
 }

 FUNC_6(VAR_4);
 FUNC_6(VAR_5);
 return (1);
}
