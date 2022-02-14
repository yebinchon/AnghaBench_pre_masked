
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct winlink {int dummy; } ;
struct window_pane {int sy; int sx; int window; } ;
struct spawn_context {int argc; char** argv; int idx; int flags; int environ; void* cwd; int * name; struct layout_cell* lc; struct window_pane* wp0; struct winlink* wl; struct session* s; struct cmdq_item* item; } ;
struct session {int dummy; } ;
struct layout_cell {int dummy; } ;
struct TYPE_4__ {struct window_pane* wp; struct winlink* wl; struct session* s; } ;
struct cmdq_item {TYPE_2__ target; TYPE_1__* shared; } ;
struct cmd_find_state {int dummy; } ;
struct cmd {struct args* args; } ;
struct client {int dummy; } ;
struct args_value {int dummy; } ;
struct args {int argc; char** argv; } ;
typedef enum layout_type { ____Placeholder_layout_type } layout_type ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_3__ {struct cmd_find_state current; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 char* FUNC_0 (struct args*,char,struct args_value**) ;
 void* FUNC_1 (struct args*,float) ;
 scalar_t__ FUNC_2 (struct args*,char) ;
 char* FUNC_3 (struct args_value**) ;
 int FUNC_4 (struct args*,char,int ,int ,char**) ;
 struct client* FUNC_5 (struct cmdq_item*,int *,int) ;
 int FUNC_6 (struct cmd_find_state*,struct winlink*,struct window_pane*,int ) ;
 int FUNC_7 (struct cmdq_item*,char*,...) ;
 int FUNC_8 (struct session*,struct cmdq_item*,struct cmd_find_state*,char*) ;
 int FUNC_9 (struct cmdq_item*,char*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char const*) ;
 char* FUNC_13 (struct cmdq_item*,char const*,struct client*,struct session*,struct winlink*,struct window_pane*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (struct window_pane*) ;
 struct layout_cell* FUNC_16 (struct window_pane*,int,int,int) ;
 int FUNC_17 (struct spawn_context*,int ,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct session*) ;
 int FUNC_20 (int ) ;
 struct window_pane* FUNC_21 (struct spawn_context*,char**) ;
 size_t FUNC_22 (char const*) ;
 int FUNC_23 (char*,int ,int ,char const**) ;
 scalar_t__ FUNC_24 (struct window_pane*,struct cmdq_item*,char**) ;
 int FUNC_25 (int ,struct window_pane*) ;
 char* FUNC_26 (char const*) ;

__attribute__((used)) static enum cmd_retval
FUNC_27(struct cmd *VAR_11, struct cmdq_item *VAR_12)
{
 struct args *VAR_13 = VAR_11->args;
 struct cmd_find_state *VAR_14 = &VAR_12->shared->current;
 struct spawn_context VAR_15;
 struct client *VAR_16 = FUNC_5(VAR_12, ((void*)0), 1);
 struct session *VAR_17 = VAR_12->target.s;
 struct winlink *VAR_18 = VAR_12->target.wl;
 struct window_pane *VAR_19 = VAR_12->target.wp, *VAR_20;
 enum layout_type VAR_21;
 struct layout_cell *VAR_22;
 struct cmd_find_state VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;
 const char *VAR_28, *VAR_29, *VAR_30, *VAR_31;
 char *VAR_32, *VAR_33, *VAR_34;
 size_t VAR_35;
 struct args_value *VAR_36;

 if (FUNC_2(VAR_13, 'h'))
  VAR_21 = VAR_4;
 else
  VAR_21 = VAR_5;
 if ((VAR_31 = FUNC_1(VAR_13, 'l')) != ((void*)0)) {
  VAR_35 = FUNC_22(VAR_31);
  if (VAR_31[VAR_35 - 1] == '%') {
   VAR_34 = FUNC_26(VAR_31);
   VAR_34[VAR_35 - 1] = '\0';
   VAR_25 = FUNC_23(VAR_34, 0, VAR_3, &VAR_30);
   FUNC_14(VAR_34);
   if (VAR_30 != ((void*)0)) {
    FUNC_7(VAR_12, "percentage %s", VAR_30);
    return (VAR_0);
   }
   if (VAR_21 == VAR_5)
    VAR_24 = (VAR_19->sy * VAR_25) / 100;
   else
    VAR_24 = (VAR_19->sx * VAR_25) / 100;
  } else {
   VAR_24 = FUNC_4(VAR_13, 'l', 0, VAR_3, &VAR_32);
   if (VAR_32 != ((void*)0)) {
    FUNC_7(VAR_12, "lines %s", VAR_32);
    FUNC_14(VAR_32);
    return (VAR_0);
   }
  }
 } else if (FUNC_2(VAR_13, 'p')) {
  VAR_25 = FUNC_4(VAR_13, 'p', 0, VAR_3, &VAR_32);
  if (VAR_32 != ((void*)0)) {
   FUNC_7(VAR_12, "create pane failed: -p %s", VAR_32);
   FUNC_14(VAR_32);
   return (VAR_0);
  }
  if (VAR_21 == VAR_5)
   VAR_24 = (VAR_19->sy * VAR_25) / 100;
  else
   VAR_24 = (VAR_19->sx * VAR_25) / 100;
 } else
  VAR_24 = -1;

 FUNC_20(VAR_19->window);
 VAR_27 = (FUNC_2(VAR_13, 'I') && VAR_13->argc == 0);

 VAR_26 = 0;
 if (FUNC_2(VAR_13, 'b'))
  VAR_26 |= VAR_6;
 if (FUNC_2(VAR_13, 'f'))
  VAR_26 |= VAR_9;
 if (VAR_27 || (VAR_13->argc == 1 && *VAR_13->argv[0] == '\0'))
  VAR_26 |= VAR_8;

 VAR_22 = FUNC_16(VAR_19, VAR_21, VAR_24, VAR_26);
 if (VAR_22 == ((void*)0)) {
  FUNC_7(VAR_12, "no space for new pane");
  return (VAR_0);
 }

 FUNC_17(&VAR_15, 0, sizeof VAR_15);
 VAR_15.item = VAR_12;
 VAR_15.s = VAR_17;
 VAR_15.wl = VAR_18;

 VAR_15.wp0 = VAR_19;
 VAR_15.lc = VAR_22;

 VAR_15.name = ((void*)0);
 VAR_15.argc = VAR_13->argc;
 VAR_15.argv = VAR_13->argv;
 VAR_15.environ = FUNC_10();

 VAR_29 = FUNC_0(VAR_13, 'e', &VAR_36);
 while (VAR_29 != ((void*)0)) {
  FUNC_12(VAR_15.environ, VAR_29);
  VAR_29 = FUNC_3(&VAR_36);
 }

 VAR_15.idx = -1;
 VAR_15.cwd = FUNC_1(VAR_13, 'c');

 VAR_15.flags = VAR_26;
 if (FUNC_2(VAR_13, 'd'))
  VAR_15.flags |= VAR_7;

 if ((VAR_20 = FUNC_21(&VAR_15, &VAR_32)) == ((void*)0)) {
  FUNC_15(VAR_20);
  FUNC_7(VAR_12, "create pane failed: %s", VAR_32);
  FUNC_14(VAR_32);
  return (VAR_0);
 }
 if (VAR_27 && FUNC_24(VAR_20, VAR_12, &VAR_32) != 0) {
  FUNC_15(VAR_20);
  FUNC_25(VAR_19->window, VAR_20);
  FUNC_7(VAR_12, "%s", VAR_32);
  FUNC_14(VAR_32);
  return (VAR_0);
 }
 if (!FUNC_2(VAR_13, 'd'))
  FUNC_6(VAR_14, VAR_18, VAR_20, 0);
 FUNC_18(VAR_19->window);
 FUNC_19(VAR_17);

 if (FUNC_2(VAR_13, 'P')) {
  if ((VAR_28 = FUNC_1(VAR_13, 'F')) == ((void*)0))
   VAR_28 = VAR_10;
  VAR_33 = FUNC_13(VAR_12, VAR_28, VAR_16, VAR_17, VAR_18, VAR_20);
  FUNC_9(VAR_12, "%s", VAR_33);
  FUNC_14(VAR_33);
 }

 FUNC_6(&VAR_23, VAR_18, VAR_20, 0);
 FUNC_8(VAR_17, VAR_12, &VAR_23, "after-split-window");

 FUNC_11(VAR_15.environ);
 if (VAR_27)
  return (VAR_2);
 return (VAR_1);
}
