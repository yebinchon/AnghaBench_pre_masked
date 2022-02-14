
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct winlink {struct window* window; } ;
struct window_pane {int flags; int window; int base; int options; } ;
struct window {struct window_pane* active; struct window_pane* last; } ;
struct style {int dummy; } ;
struct session {int dummy; } ;
struct options_entry {int dummy; } ;
struct TYPE_5__ {struct window_pane* wp; struct session* s; struct winlink* wl; } ;
struct cmdq_item {TYPE_2__ target; TYPE_1__* shared; } ;
struct cmd_find_state {int dummy; } ;
struct cmd {struct args* args; int * entry; } ;
struct client {int dummy; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_6__ {struct window_pane* wp; } ;
struct TYPE_4__ {struct cmd_find_state current; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct window_pane* FUNC_0 (struct window_pane*,int ) ;
 struct window_pane* FUNC_1 (struct window_pane*,int ,int ) ;
 char* FUNC_2 (struct args*,char) ;
 int FUNC_3 (struct args*,char) ;
 struct client* FUNC_4 (struct cmdq_item*,int *,int) ;
 int FUNC_5 (struct cmd_find_state*,struct winlink*,int ) ;
 int FUNC_6 (struct cmd_find_state*,struct winlink*,struct window_pane*,int ) ;
 int VAR_5 ;
 int FUNC_7 (struct window*) ;
 int FUNC_8 (struct cmdq_item*,char*,...) ;
 int FUNC_9 (struct session*,struct cmdq_item*,struct cmd_find_state*,char*) ;
 int FUNC_10 (struct cmdq_item*,char*,int ) ;
 int VAR_6 ;
 char* FUNC_11 (struct cmdq_item*,char*,struct client*,struct session*,struct winlink*,struct window_pane*) ;
 int FUNC_12 (char*) ;
 TYPE_3__ VAR_7 ;
 struct style* FUNC_13 (int ,char*) ;
 struct options_entry* FUNC_14 (int ,char*,int ,char const*) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (struct session*,struct winlink*,struct window_pane*) ;
 int FUNC_18 (struct window*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct session*,struct winlink*,struct window_pane*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct style*) ;
 int FUNC_23 (struct window*) ;
 struct window_pane* FUNC_24 (struct window_pane*) ;
 struct window_pane* FUNC_25 (struct window_pane*) ;
 struct window_pane* FUNC_26 (struct window_pane*) ;
 struct window_pane* FUNC_27 (struct window_pane*) ;
 int FUNC_28 (struct window_pane*) ;
 int VAR_8 ;
 scalar_t__ FUNC_29 (struct window*) ;
 scalar_t__ FUNC_30 (struct window*,int) ;
 int FUNC_31 (struct window*,struct window_pane*) ;
 scalar_t__ FUNC_32 (struct window*,struct window_pane*,int) ;

__attribute__((used)) static enum cmd_retval
FUNC_33(struct cmd *VAR_9, struct cmdq_item *VAR_10)
{
 struct args *VAR_11 = VAR_9->args;
 struct cmd_find_state *VAR_12 = &VAR_10->shared->current;
 struct client *VAR_13 = FUNC_4(VAR_10, ((void*)0), 1);
 struct winlink *VAR_14 = VAR_10->target.wl;
 struct window *VAR_15 = VAR_14->window;
 struct session *VAR_16 = VAR_10->target.s;
 struct window_pane *VAR_17 = VAR_10->target.wp, *VAR_18, *VAR_19;
 char *VAR_20;
 const char *VAR_21;
 struct style *VAR_22;
 struct options_entry *VAR_23;

 if (VAR_9->entry == &VAR_5 || FUNC_3(VAR_11, 'l')) {
  VAR_18 = VAR_15->last;
  if (VAR_18 == ((void*)0) && FUNC_23(VAR_15) == 2) {
   VAR_18 = FUNC_1(VAR_15->active, VAR_8, VAR_6);
   if (VAR_18 == ((void*)0))
    VAR_18 = FUNC_0(VAR_15->active, VAR_6);
  }
  if (VAR_18 == ((void*)0)) {
   FUNC_8(VAR_10, "no last pane");
   return (VAR_0);
  }
  if (FUNC_3(VAR_9->args, 'e'))
   VAR_18->flags &= ~VAR_2;
  else if (FUNC_3(VAR_9->args, 'd'))
   VAR_18->flags |= VAR_2;
  else {
   if (FUNC_30(VAR_15, FUNC_3(VAR_9->args, 'Z')))
    FUNC_18(VAR_15);
   FUNC_31(VAR_15, VAR_18);
   if (FUNC_32(VAR_15, VAR_18, 1)) {
    FUNC_5(VAR_12, VAR_14, 0);
    FUNC_7(VAR_15);
   }
   if (FUNC_29(VAR_15))
    FUNC_18(VAR_15);
  }
  return (VAR_1);
 }

 if (FUNC_3(VAR_11, 'm') || FUNC_3(VAR_11, 'M')) {
  if (FUNC_3(VAR_11, 'm') && !FUNC_28(VAR_17))
   return (VAR_1);
  VAR_18 = VAR_7.wp;

  if (FUNC_3(VAR_11, 'M') || FUNC_17(VAR_16, VAR_14, VAR_17))
   FUNC_16();
  else
   FUNC_20(VAR_16, VAR_14, VAR_17);
  VAR_19 = VAR_7.wp;

  if (VAR_18 != ((void*)0)) {
   FUNC_19(VAR_18->window);
   FUNC_21(VAR_18->window);
  }
  if (VAR_19 != ((void*)0)) {
   FUNC_19(VAR_19->window);
   FUNC_21(VAR_19->window);
  }
  return (VAR_1);
 }

 if (FUNC_3(VAR_9->args, 'P') || FUNC_3(VAR_9->args, 'g')) {
  if ((VAR_21 = FUNC_2(VAR_11, 'P')) != ((void*)0)) {
   VAR_23 = FUNC_14(VAR_17->options, "window-style", 0,
       VAR_21);
   if (VAR_23 == ((void*)0)) {
    FUNC_8(VAR_10, "bad style: %s", VAR_21);
    return (VAR_0);
   }
   FUNC_14(VAR_17->options, "window-active-style", 0,
       VAR_21);
   VAR_17->flags |= (VAR_3|VAR_4);
  }
  if (FUNC_3(VAR_9->args, 'g')) {
   VAR_22 = FUNC_13(VAR_17->options, "window-style");
   FUNC_10(VAR_10, "%s", FUNC_22(VAR_22));
  }
  return (VAR_1);
 }

 if (FUNC_3(VAR_9->args, 'L')) {
  FUNC_30(VAR_15, 1);
  VAR_17 = FUNC_25(VAR_17);
  FUNC_29(VAR_15);
 } else if (FUNC_3(VAR_9->args, 'R')) {
  FUNC_30(VAR_15, 1);
  VAR_17 = FUNC_26(VAR_17);
  FUNC_29(VAR_15);
 } else if (FUNC_3(VAR_9->args, 'U')) {
  FUNC_30(VAR_15, 1);
  VAR_17 = FUNC_27(VAR_17);
  FUNC_29(VAR_15);
 } else if (FUNC_3(VAR_9->args, 'D')) {
  FUNC_30(VAR_15, 1);
  VAR_17 = FUNC_24(VAR_17);
  FUNC_29(VAR_15);
 }
 if (VAR_17 == ((void*)0))
  return (VAR_1);

 if (FUNC_3(VAR_9->args, 'e')) {
  VAR_17->flags &= ~VAR_2;
  return (VAR_1);
 }
 if (FUNC_3(VAR_9->args, 'd')) {
  VAR_17->flags |= VAR_2;
  return (VAR_1);
 }

 if (FUNC_3(VAR_9->args, 'T')) {
  VAR_20 = FUNC_11(VAR_10, FUNC_2(VAR_9->args, 'T'),
      VAR_13, VAR_16, VAR_14, VAR_17);
  FUNC_15(&VAR_17->base, VAR_20);
  FUNC_21(VAR_17->window);
  FUNC_12(VAR_20);
  return (VAR_1);
 }

 if (VAR_17 == VAR_15->active)
  return (VAR_1);
 if (FUNC_30(VAR_15, FUNC_3(VAR_9->args, 'Z')))
  FUNC_18(VAR_15);
 FUNC_31(VAR_15, VAR_17);
 if (FUNC_32(VAR_15, VAR_17, 1)) {
  FUNC_6(VAR_12, VAR_14, VAR_17, 0);
  FUNC_9(VAR_16, VAR_10, VAR_12, "after-select-pane");
  FUNC_7(VAR_15);
 }
 if (FUNC_29(VAR_15))
  FUNC_18(VAR_15);

 return (VAR_1);
}
