
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mouse_event {int dummy; } ;
struct job {int dummy; } ;
struct cmdq_item {int dummy; } ;
struct cmd_parse_result {int status; int cmdlist; int error; } ;
struct cmd_if_shell_data {char* cmd_else; char* cmd_if; int * item; int input; struct mouse_event mouse; struct client* client; } ;
struct client {int dummy; } ;





 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct cmd_parse_result* FUNC_3 (char*,int *) ;
 int FUNC_4 (struct client*,struct cmdq_item*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ) ;
 struct cmdq_item* FUNC_7 (int ,int *,struct mouse_event*,int ) ;
 int FUNC_8 (int *,struct cmdq_item*) ;
 int FUNC_9 (int ) ;
 struct cmd_if_shell_data* FUNC_10 (struct job*) ;
 int FUNC_11 (struct job*) ;

__attribute__((used)) static void
FUNC_12(struct job *VAR_0)
{
 struct cmd_if_shell_data *VAR_1 = FUNC_10(VAR_0);
 struct client *VAR_2 = VAR_1->client;
 struct mouse_event *VAR_3 = &VAR_1->mouse;
 struct cmdq_item *VAR_4 = ((void*)0);
 char *VAR_5;
 int VAR_6;
 struct cmd_parse_result *VAR_7;

 VAR_6 = FUNC_11(VAR_0);
 if (!FUNC_1(VAR_6) || FUNC_0(VAR_6) != 0)
  VAR_5 = VAR_1->cmd_else;
 else
  VAR_5 = VAR_1->cmd_if;
 if (VAR_5 == ((void*)0))
  goto out;

 VAR_7 = FUNC_3(VAR_5, &VAR_1->input);
 switch (VAR_7->status) {
 case 130:
  break;
 case 129:
  if (VAR_1->item != ((void*)0))
         FUNC_6(VAR_1->item, "%s", VAR_7->error);
  FUNC_9(VAR_7->error);
  break;
 case 128:
  VAR_4 = FUNC_7(VAR_7->cmdlist, ((void*)0), VAR_3, 0);
  FUNC_2(VAR_7->cmdlist);
  break;
 }
 if (VAR_4 != ((void*)0)) {
  if (VAR_1->item == ((void*)0))
   FUNC_4(VAR_2, VAR_4);
  else
   FUNC_8(VAR_1->item, VAR_4);
 }

out:
 if (VAR_1->item != ((void*)0))
  FUNC_5(VAR_1->item);
}
