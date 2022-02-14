
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {int dummy; } ;
struct window_pane {int dummy; } ;
struct session {int dummy; } ;
struct format_tree {int dummy; } ;
struct TYPE_2__ {struct window_pane* wp; struct winlink* wl; struct session* s; } ;
struct cmdq_item {int client; TYPE_1__ target; } ;
struct cmd {struct args* args; } ;
struct client {struct session* session; } ;
struct args {scalar_t__ argc; char** argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (struct args*,char) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 int VAR_6 ;
 struct client* FUNC_2 (struct session*) ;
 struct client* FUNC_3 (struct cmdq_item*,char*,int) ;
 int FUNC_4 (struct cmdq_item*,char*,...) ;
 int FUNC_5 (struct cmdq_item*,char*,char*) ;
 struct format_tree* FUNC_6 (int ,struct cmdq_item*,int ,int) ;
 int FUNC_7 (struct format_tree*,struct client*,struct session*,struct winlink*,struct window_pane*) ;
 int FUNC_8 (struct format_tree*,int ,struct cmdq_item*) ;
 char* FUNC_9 (struct format_tree*,char const*) ;
 int FUNC_10 (struct format_tree*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct client*,char*,char*) ;
 scalar_t__ FUNC_13 (struct window_pane*,struct cmdq_item*,char**) ;

__attribute__((used)) static enum cmd_retval
FUNC_14(struct cmd *VAR_7, struct cmdq_item *VAR_8)
{
 struct args *VAR_9 = VAR_7->args;
 struct client *VAR_10, *VAR_11;
 struct session *VAR_12 = VAR_8->target.s;
 struct winlink *VAR_13 = VAR_8->target.wl;
 struct window_pane *VAR_14 = VAR_8->target.wp;
 const char *VAR_15;
 char *VAR_16, *VAR_17;
 struct format_tree *VAR_18;
 int VAR_19;

 if (FUNC_1(VAR_9, 'I')) {
  if (FUNC_13(VAR_14, VAR_8, &VAR_17) != 0) {
   FUNC_4(VAR_8, "%s", VAR_17);
   FUNC_11(VAR_17);
   return (VAR_0);
  }
  return (VAR_2);
 }

 if (FUNC_1(VAR_9, 'F') && VAR_9->argc != 0) {
  FUNC_4(VAR_8, "only one of -F or argument must be given");
  return (VAR_0);
 }

 VAR_15 = FUNC_0(VAR_9, 'F');
 if (VAR_9->argc != 0)
  VAR_15 = VAR_9->argv[0];
 if (VAR_15 == ((void*)0))
  VAR_15 = VAR_3;







 VAR_10 = FUNC_3(VAR_8, FUNC_0(VAR_9, 'c'), 1);
 if (VAR_10 != ((void*)0) && VAR_10->session == VAR_12)
  VAR_11 = VAR_10;
 else
  VAR_11 = FUNC_2(VAR_12);
 if (FUNC_1(VAR_7->args, 'v'))
  VAR_19 = VAR_5;
 else
  VAR_19 = 0;
 VAR_18 = FUNC_6(VAR_8->client, VAR_8, VAR_4, VAR_19);
 FUNC_7(VAR_18, VAR_11, VAR_12, VAR_13, VAR_14);

 if (FUNC_1(VAR_9, 'a')) {
  FUNC_8(VAR_18, VAR_6, VAR_8);
  return (VAR_1);
 }

 VAR_16 = FUNC_9(VAR_18, VAR_15);
 if (FUNC_1(VAR_7->args, 'p'))
  FUNC_5(VAR_8, "%s", VAR_16);
 else if (VAR_10 != ((void*)0))
  FUNC_12(VAR_10, "%s", VAR_16);
 FUNC_11(VAR_16);

 FUNC_10(VAR_18);

 return (VAR_1);
}
