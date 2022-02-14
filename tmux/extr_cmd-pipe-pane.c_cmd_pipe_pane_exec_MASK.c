
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct winlink {int dummy; } ;
struct window_pane {int pipe_fd; int fd; int * pipe_event; int pipe_off; TYPE_2__* event; } ;
struct session {int dummy; } ;
struct format_tree {int dummy; } ;
struct TYPE_3__ {struct winlink* wl; struct session* s; struct window_pane* wp; } ;
struct cmdq_item {int client; TYPE_1__ target; } ;
struct cmd {struct args* args; } ;
struct client {int dummy; } ;
struct args {scalar_t__ argc; char** argv; } ;
typedef int sigset_t ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_4__ {int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct args*,char) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ,int ,int ,struct window_pane*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 struct client* FUNC_8 (struct cmdq_item*,int *,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct cmdq_item*,char*,int ) ;
 int FUNC_10 (int,int) ;
 int VAR_19 ;
 int FUNC_11 (int ,char*,char*,char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 struct format_tree* FUNC_14 (int ,struct cmdq_item*,int ,int ) ;
 int FUNC_15 (struct format_tree*,struct client*,struct session*,struct winlink*,struct window_pane*) ;
 char* FUNC_16 (struct format_tree*,char*) ;
 int FUNC_17 (struct format_tree*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (struct window_pane*,int) ;
 int VAR_20 ;
 int FUNC_22 (int,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,int *,int *) ;
 scalar_t__ FUNC_25 (int ,int ,int ,int*) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (struct window_pane*) ;

__attribute__((used)) static enum cmd_retval
FUNC_28(struct cmd *VAR_21, struct cmdq_item *VAR_22)
{
 struct args *VAR_23 = VAR_21->args;
 struct client *VAR_24 = FUNC_8(VAR_22, ((void*)0), 1);
 struct window_pane *VAR_25 = VAR_22->target.wp;
 struct session *VAR_26 = VAR_22->target.s;
 struct winlink *VAR_27 = VAR_22->target.wl;
 char *VAR_28;
 int VAR_29, VAR_30[2], VAR_31, VAR_32, VAR_33;
 struct format_tree *VAR_34;
 sigset_t VAR_35, VAR_36;


 VAR_29 = VAR_25->pipe_fd;
 if (VAR_25->pipe_fd != -1) {
  FUNC_4(VAR_25->pipe_event);
  FUNC_6(VAR_25->pipe_fd);
  VAR_25->pipe_fd = -1;

  if (FUNC_27(VAR_25)) {
   FUNC_21(VAR_25, 1);
   return (VAR_2);
  }
 }


 if (VAR_23->argc == 0 || *VAR_23->argv[0] == '\0')
  return (VAR_2);







 if (FUNC_2(VAR_21->args, 'o') && VAR_29 != -1)
  return (VAR_2);


 if (FUNC_2(VAR_21->args, 'I')) {
  VAR_32 = 1;
  VAR_33 = FUNC_2(VAR_21->args, 'O');
 } else {
  VAR_32 = 0;
  VAR_33 = 1;
 }


 if (FUNC_25(VAR_0, VAR_10, VAR_7, VAR_30) != 0) {
  FUNC_9(VAR_22, "socketpair error: %s", FUNC_26(VAR_19));
  return (VAR_1);
 }


 VAR_34 = FUNC_14(VAR_22->client, VAR_22, VAR_5, 0);
 FUNC_15(VAR_34, VAR_24, VAR_26, VAR_27, VAR_25);
 VAR_28 = FUNC_16(VAR_34, VAR_23->argv[0]);
 FUNC_17(VAR_34);


 FUNC_23(&VAR_35);
 FUNC_24(VAR_8, &VAR_35, &VAR_36);
 switch (FUNC_13()) {
 case -1:
  FUNC_24(VAR_9, &VAR_36, ((void*)0));
  FUNC_9(VAR_22, "fork error: %s", FUNC_26(VAR_19));

  FUNC_18(VAR_28);
  return (VAR_1);
 case 0:

  FUNC_20(VAR_20, 1);
  FUNC_24(VAR_9, &VAR_36, ((void*)0));
  FUNC_6(VAR_30[0]);

  VAR_31 = FUNC_19(VAR_15, VAR_6, 0);
  if (VAR_33) {
   if (FUNC_10(VAR_30[1], VAR_12) == -1)
    FUNC_1(1);
  } else {
   if (FUNC_10(VAR_31, VAR_12) == -1)
    FUNC_1(1);
  }
  if (VAR_32) {
   if (FUNC_10(VAR_30[1], VAR_13) == -1)
    FUNC_1(1);
   if (VAR_30[1] != VAR_13)
    FUNC_6(VAR_30[1]);
  } else {
   if (FUNC_10(VAR_31, VAR_13) == -1)
    FUNC_1(1);
  }
  if (FUNC_10(VAR_31, VAR_11) == -1)
   FUNC_1(1);
  FUNC_7(VAR_11 + 1);

  FUNC_11(VAR_14, "sh", "-c", VAR_28, (char *) ((void*)0));
  FUNC_1(1);
 default:

  FUNC_24(VAR_9, &VAR_36, ((void*)0));
  FUNC_6(VAR_30[1]);

  VAR_25->pipe_fd = VAR_30[0];
  if (VAR_25->fd != -1)
   VAR_25->pipe_off = FUNC_0(VAR_25->event->input);
  else
   VAR_25->pipe_off = 0;

  FUNC_22(VAR_25->pipe_fd, 0);
  VAR_25->pipe_event = FUNC_5(VAR_25->pipe_fd,
      VAR_17,
      VAR_18,
      VAR_16,
      VAR_25);
  if (VAR_25->pipe_event == ((void*)0))
   FUNC_12("out of memory");
  if (VAR_33)
   FUNC_3(VAR_25->pipe_event, VAR_4);
  if (VAR_32)
   FUNC_3(VAR_25->pipe_event, VAR_3);

  FUNC_18(VAR_28);
  return (VAR_2);
 }
}
