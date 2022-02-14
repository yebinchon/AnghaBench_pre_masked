
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct winlink {int idx; struct window* window; } ;
struct window_pane {int sy; int sx; int flags; int options; struct window* window; } ;
struct window {int panes; int options; } ;
struct session {int dummy; } ;
struct layout_cell {int dummy; } ;
struct TYPE_6__ {struct window_pane* wp; struct winlink* wl; } ;
struct TYPE_5__ {struct window_pane* wp; struct winlink* wl; struct session* s; } ;
struct cmdq_item {TYPE_3__ source; TYPE_2__ target; TYPE_1__* shared; } ;
struct cmd_find_state {int dummy; } ;
struct cmd {int * entry; struct args* args; } ;
struct args {int dummy; } ;
typedef enum layout_type { ____Placeholder_layout_type } layout_type ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_4__ {struct cmd_find_state current; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,struct window_pane*,struct window_pane*,int ) ;
 int FUNC_1 (int *,struct window_pane*,int ) ;
 char* FUNC_2 (struct args*,char) ;
 scalar_t__ FUNC_3 (struct args*,char) ;
 int FUNC_4 (struct args*,char,int ,int,char**) ;
 int FUNC_5 (struct cmd_find_state*,struct session*,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct cmdq_item*,char*,...) ;
 int VAR_8 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct layout_cell*,struct window_pane*) ;
 int FUNC_9 (struct window_pane*) ;
 struct layout_cell* FUNC_10 (struct window_pane*,int,int,int) ;
 int FUNC_11 (char*,struct window*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (struct window*) ;
 int FUNC_15 (struct session*) ;
 int FUNC_16 (struct window*) ;
 int FUNC_17 (struct session*) ;
 int FUNC_18 (struct window*) ;
 int FUNC_19 (struct session*,int) ;
 size_t FUNC_20 (char const*) ;
 int FUNC_21 (char*,int ,int,char const**) ;
 scalar_t__ FUNC_22 (struct window*) ;
 int FUNC_23 (struct window*,struct window_pane*) ;
 int FUNC_24 (struct window*,struct window_pane*,int) ;
 char* FUNC_25 (char const*) ;

__attribute__((used)) static enum cmd_retval
FUNC_26(struct cmd *VAR_9, struct cmdq_item *VAR_10)
{
 struct args *VAR_11 = VAR_9->args;
 struct cmd_find_state *VAR_12 = &VAR_10->shared->current;
 struct session *VAR_13;
 struct winlink *VAR_14, *VAR_15;
 struct window *VAR_16, *VAR_17;
 struct window_pane *VAR_18, *VAR_19;
 char *VAR_20, *VAR_21;
 const char *VAR_22, *VAR_23;
 size_t VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29;
 enum layout_type VAR_30;
 struct layout_cell *VAR_31;

 if (VAR_9->entry == &VAR_7)
  VAR_28 = 1;
 else
  VAR_28 = 0;

 VAR_13 = VAR_10->target.s;
 VAR_15 = VAR_10->target.wl;
 VAR_19 = VAR_10->target.wp;
 VAR_17 = VAR_15->window;
 VAR_27 = VAR_15->idx;
 FUNC_18(VAR_17);

 VAR_14 = VAR_10->source.wl;
 VAR_18 = VAR_10->source.wp;
 VAR_16 = VAR_14->window;
 FUNC_18(VAR_16);

 if (VAR_28 && VAR_16 == VAR_17) {
  FUNC_6(VAR_10, "can't join a pane to its own window");
  return (VAR_0);
 }
 if (!VAR_28 && VAR_18 == VAR_19) {
  FUNC_6(VAR_10, "source and target panes must be different");
  return (VAR_0);
 }

 VAR_30 = VAR_4;
 if (FUNC_3(VAR_11, 'h'))
  VAR_30 = VAR_3;

 VAR_25 = -1;
 if ((VAR_23 = FUNC_2(VAR_11, 'l')) != ((void*)0)) {
  VAR_24 = FUNC_20(VAR_23);
  if (VAR_23[VAR_24 - 1] == '%') {
   VAR_21 = FUNC_25(VAR_23);
   VAR_21[VAR_24 - 1] = '\0';
   VAR_26 = FUNC_21(VAR_21, 0, VAR_2, &VAR_22);
   FUNC_7(VAR_21);
   if (VAR_22 != ((void*)0)) {
    FUNC_6(VAR_10, "percentage %s", VAR_22);
    return (VAR_0);
   }
   if (VAR_30 == VAR_4)
    VAR_25 = (VAR_19->sy * VAR_26) / 100;
   else
    VAR_25 = (VAR_19->sx * VAR_26) / 100;
  } else {
   VAR_25 = FUNC_4(VAR_11, 'l', 0, VAR_2, &VAR_20);
   if (VAR_20 != ((void*)0)) {
    FUNC_6(VAR_10, "size %s", VAR_20);
    FUNC_7(VAR_20);
    return (VAR_0);
   }
  }
 } else if (FUNC_3(VAR_11, 'p')) {
  VAR_26 = FUNC_4(VAR_11, 'p', 0, 100, &VAR_20);
  if (VAR_20 != ((void*)0)) {
   FUNC_6(VAR_10, "percentage %s", VAR_20);
   FUNC_7(VAR_20);
   return (VAR_0);
  }
  if (VAR_30 == VAR_4)
   VAR_25 = (VAR_19->sy * VAR_26) / 100;
  else
   VAR_25 = (VAR_19->sx * VAR_26) / 100;
 }
 if (FUNC_3(VAR_11, 'b'))
  VAR_29 = VAR_6;
 else
  VAR_29 = 0;
 VAR_31 = FUNC_10(VAR_19, VAR_30, VAR_25, VAR_29);
 if (VAR_31 == ((void*)0)) {
  FUNC_6(VAR_10, "create pane failed: pane too small");
  return (VAR_0);
 }

 FUNC_9(VAR_18);

 FUNC_23(VAR_16, VAR_18);
 FUNC_1(&VAR_16->panes, VAR_18, VAR_8);

 VAR_18->window = VAR_17;
 FUNC_12(VAR_18->options, VAR_17->options);
 VAR_18->flags |= VAR_5;
 FUNC_0(&VAR_17->panes, VAR_19, VAR_18, VAR_8);
 FUNC_8(VAR_31, VAR_18);

 FUNC_13();

 FUNC_16(VAR_16);
 FUNC_16(VAR_17);

 if (!FUNC_3(VAR_11, 'd')) {
  FUNC_24(VAR_17, VAR_18, 1);
  FUNC_19(VAR_13, VAR_27);
  FUNC_5(VAR_12, VAR_13, 0);
  FUNC_15(VAR_13);
 } else
  FUNC_17(VAR_13);

 if (FUNC_22(VAR_16) == 0)
  FUNC_14(VAR_16);
 else
  FUNC_11("window-layout-changed", VAR_16);
 FUNC_11("window-layout-changed", VAR_17);

 return (VAR_1);
}
