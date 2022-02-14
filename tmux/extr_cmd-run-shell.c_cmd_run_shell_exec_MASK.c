
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {int dummy; } ;
struct window_pane {int id; } ;
struct session {int dummy; } ;
struct TYPE_2__ {struct window_pane* wp; struct winlink* wl; struct session* s; } ;
struct cmdq_item {int client; TYPE_1__ target; } ;
struct cmd_run_shell_data {int wp_id; int cmd; struct cmdq_item* item; } ;
struct cmd {struct args* args; } ;
struct client {int dummy; } ;
struct args {int * argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct args*,char) ;
 struct client* FUNC_1 (struct cmdq_item*,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct cmdq_item*,char*,int ) ;
 int FUNC_3 (struct cmdq_item*,int ,struct client*,struct session*,struct winlink*,struct window_pane*) ;
 int FUNC_4 (struct cmd_run_shell_data*) ;
 int * FUNC_5 (int ,struct session*,int ,int *,int ,int ,struct cmd_run_shell_data*,int ) ;
 int FUNC_6 (int ,struct session*) ;
 struct cmd_run_shell_data* FUNC_7 (int,int) ;

__attribute__((used)) static enum cmd_retval
FUNC_8(struct cmd *VAR_5, struct cmdq_item *VAR_6)
{
 struct args *VAR_7 = VAR_5->args;
 struct cmd_run_shell_data *VAR_8;
 struct client *VAR_9 = FUNC_1(VAR_6, ((void*)0), 1);
 struct session *VAR_10 = VAR_6->target.s;
 struct winlink *VAR_11 = VAR_6->target.wl;
 struct window_pane *VAR_12 = VAR_6->target.wp;

 VAR_8 = FUNC_7(1, sizeof *VAR_8);
 VAR_8->cmd = FUNC_3(VAR_6, VAR_7->argv[0], VAR_9, VAR_10, VAR_11, VAR_12);

 if (FUNC_0(VAR_7, 't') && VAR_12 != ((void*)0))
  VAR_8->wp_id = VAR_12->id;
 else
  VAR_8->wp_id = -1;

 if (!FUNC_0(VAR_7, 'b'))
  VAR_8->item = VAR_6;

 if (FUNC_5(VAR_8->cmd, VAR_10, FUNC_6(VAR_6->client, VAR_10), ((void*)0),
     VAR_3, VAR_4, VAR_8, 0) == ((void*)0)) {
  FUNC_2(VAR_6, "failed to run command: %s", VAR_8->cmd);
  FUNC_4(VAR_8);
  return (VAR_0);
 }

 if (FUNC_0(VAR_7, 'b'))
  return (VAR_1);
 return (VAR_2);
}
