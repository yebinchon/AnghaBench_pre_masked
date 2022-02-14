
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct session {int options; } ;
struct cmdq_item {int dummy; } ;
struct cmd_display_panes_data {struct cmdq_item* item; void* command; } ;
struct cmd {struct args* args; } ;
struct client {int * overlay_draw; struct session* session; } ;
struct args {scalar_t__ argc; char** argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct args*,char) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 int FUNC_2 (struct args*,char,int ,int ,char**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct client* FUNC_3 (struct cmdq_item*,int ,int ) ;
 int FUNC_4 (struct cmdq_item*,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct client*,int ,int ,int ,int ,struct cmd_display_panes_data*) ;
 struct cmd_display_panes_data* FUNC_8 (int) ;
 void* FUNC_9 (char*) ;

__attribute__((used)) static enum cmd_retval
FUNC_10(struct cmd *VAR_7, struct cmdq_item *VAR_8)
{
 struct args *VAR_9 = VAR_7->args;
 struct client *VAR_10;
 struct session *VAR_11;
 u_int VAR_12;
 char *VAR_13;
 struct cmd_display_panes_data *VAR_14;

 if ((VAR_10 = FUNC_3(VAR_8, FUNC_0(VAR_9, 't'), 0)) == ((void*)0))
  return (VAR_0);
 VAR_11 = VAR_10->session;

 if (VAR_10->overlay_draw != ((void*)0))
  return (VAR_1);

 if (FUNC_1(VAR_9, 'd')) {
  VAR_12 = FUNC_2(VAR_9, 'd', 0, VAR_3, &VAR_13);
  if (VAR_13 != ((void*)0)) {
   FUNC_4(VAR_8, "delay %s", VAR_13);
   FUNC_5(VAR_13);
   return (VAR_0);
  }
 } else
  VAR_12 = FUNC_6(VAR_11->options, "display-panes-time");

 VAR_14 = FUNC_8(sizeof *VAR_14);
 if (VAR_9->argc != 0)
  VAR_14->command = FUNC_9(VAR_9->argv[0]);
 else
  VAR_14->command = FUNC_9("select-pane -t '%%'");
 if (FUNC_1(VAR_9, 'b'))
  VAR_14->item = ((void*)0);
 else
  VAR_14->item = VAR_8;

 FUNC_7(VAR_10, VAR_12, VAR_4,
     VAR_6, VAR_5, VAR_14);

 if (FUNC_1(VAR_9, 'b'))
  return (VAR_1);
 return (VAR_2);
}
