
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct winlink {int idx; struct window* window; } ;
struct window_pane {int flags; int options; struct window* window; } ;
struct window {int options; struct client* latest; struct window_pane* active; int panes; int sy; int sx; } ;
struct session {int options; int windows; } ;
struct TYPE_6__ {int idx; struct session* s; } ;
struct TYPE_5__ {struct window_pane* wp; struct session* s; struct winlink* wl; } ;
struct cmdq_item {TYPE_3__ target; TYPE_2__ source; TYPE_1__* shared; } ;
struct cmd_find_state {int dummy; } ;
struct cmd {struct args* args; } ;
struct client {int dummy; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_4__ {struct cmd_find_state current; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct window_pane*,int ) ;
 int FUNC_1 (int *,struct window_pane*,int ) ;
 char* FUNC_2 (struct args*,float) ;
 scalar_t__ FUNC_3 (struct args*,char) ;
 struct client* FUNC_4 (struct cmdq_item*,int *,int) ;
 int FUNC_5 (struct cmd_find_state*,struct session*,int ) ;
 int FUNC_6 (struct cmdq_item*,char*,...) ;
 int FUNC_7 (struct cmdq_item*,char*,char*) ;
 char* FUNC_8 (struct window*) ;
 int VAR_5 ;
 char* FUNC_9 (struct cmdq_item*,char const*,struct client*,struct session*,struct winlink*,struct window_pane*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct window_pane*) ;
 int FUNC_12 (struct window*,struct window_pane*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,char*,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct session*) ;
 int FUNC_17 (struct session*) ;
 int FUNC_18 (struct window*) ;
 struct winlink* FUNC_19 (struct session*,struct window*,int,char**) ;
 int FUNC_20 (struct session*,int ) ;
 int FUNC_21 (struct window*) ;
 struct window* FUNC_22 (int ,int ) ;
 int FUNC_23 (struct window*,struct window_pane*) ;
 int FUNC_24 (struct window*,char*) ;
 int * FUNC_25 (int *,int) ;

__attribute__((used)) static enum cmd_retval
FUNC_26(struct cmd *VAR_6, struct cmdq_item *VAR_7)
{
 struct args *VAR_8 = VAR_6->args;
 struct cmd_find_state *VAR_9 = &VAR_7->shared->current;
 struct client *VAR_10 = FUNC_4(VAR_7, ((void*)0), 1);
 struct winlink *VAR_11 = VAR_7->source.wl;
 struct session *VAR_12 = VAR_7->source.s;
 struct session *VAR_13 = VAR_7->target.s;
 struct window_pane *VAR_14 = VAR_7->source.wp;
 struct window *VAR_15 = VAR_11->window;
 char *VAR_16, *VAR_17;
 int VAR_18 = VAR_7->target.idx;
 const char *VAR_19;
 char *VAR_20;

 if (VAR_18 != -1 && FUNC_25(&VAR_13->windows, VAR_18) != ((void*)0)) {
  FUNC_6(VAR_7, "index %d already in use", VAR_18);
  return (VAR_1);
 }

 if (FUNC_21(VAR_15) == 1) {
  FUNC_6(VAR_7, "can't break with only one pane");
  return (VAR_1);
 }
 FUNC_18(VAR_15);

 FUNC_1(&VAR_15->panes, VAR_14, VAR_5);
 FUNC_23(VAR_15, VAR_14);
 FUNC_11(VAR_14);

 VAR_15 = VAR_14->window = FUNC_22(VAR_15->sx, VAR_15->sy);
 FUNC_15(VAR_14->options, VAR_15->options);
 VAR_14->flags |= VAR_4;
 FUNC_0(&VAR_15->panes, VAR_14, VAR_5);
 VAR_15->active = VAR_14;
 VAR_15->latest = VAR_10;

 if (!FUNC_3(VAR_8, 'n')) {
  VAR_16 = FUNC_8(VAR_15);
  FUNC_24(VAR_15, VAR_16);
  FUNC_10(VAR_16);
 } else {
  FUNC_24(VAR_15, FUNC_2(VAR_8, 'n'));
  FUNC_14(VAR_15->options, "automatic-rename", 0);
 }

 FUNC_12(VAR_15, VAR_14);
 VAR_14->flags |= VAR_3;

 if (VAR_18 == -1)
  VAR_18 = -1 - FUNC_13(VAR_13->options, "base-index");
 VAR_11 = FUNC_19(VAR_13, VAR_15, VAR_18, &VAR_17);
 if (!FUNC_3(VAR_6->args, 'd')) {
  FUNC_20(VAR_13, VAR_11->idx);
  FUNC_5(VAR_9, VAR_13, 0);
 }

 FUNC_16(VAR_12);
 if (VAR_12 != VAR_13)
  FUNC_16(VAR_13);
 FUNC_17(VAR_12);
 if (VAR_12 != VAR_13)
  FUNC_17(VAR_13);

 if (FUNC_3(VAR_8, 'P')) {
  if ((VAR_19 = FUNC_2(VAR_8, 'F')) == ((void*)0))
   VAR_19 = VAR_0;
  VAR_20 = FUNC_9(VAR_7, VAR_19, VAR_10, VAR_13, VAR_11, VAR_14);
  FUNC_7(VAR_7, "%s", VAR_20);
  FUNC_10(VAR_20);
 }
 return (VAR_2);
}
