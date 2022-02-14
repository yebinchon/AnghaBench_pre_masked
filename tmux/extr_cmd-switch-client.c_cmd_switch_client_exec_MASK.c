
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct winlink {struct window* window; } ;
struct window_pane {int dummy; } ;
struct window {int dummy; } ;
struct session {TYPE_2__* curw; int last_attached_time; int environ; int options; } ;
struct key_table {int references; } ;
struct TYPE_6__ {struct window_pane* wp; struct winlink* wl; struct session* s; } ;
struct cmdq_item {TYPE_1__* shared; int * client; TYPE_3__ target; } ;
struct cmd {struct args* args; } ;
struct client {struct session* session; struct session* last_session; int environ; struct key_table* keytable; int flags; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
typedef enum cmd_find_type { ____Placeholder_cmd_find_type } cmd_find_type ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int flags; int current; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct session*) ;
 char* FUNC_1 (struct args*,char) ;
 scalar_t__ FUNC_2 (struct args*,char) ;
 struct client* FUNC_3 (struct cmdq_item*,char*,int ) ;
 int FUNC_4 (int *,struct session*,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*,struct cmdq_item*,char const*,int,int) ;
 int FUNC_6 (struct cmdq_item*,char*,...) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,int *) ;
 struct key_table* FUNC_9 (char const*,int ) ;
 int FUNC_10 (struct key_table*) ;
 int FUNC_11 (char*,struct client*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct client*,int *) ;
 int FUNC_15 (struct client*) ;
 int FUNC_16 (struct window*) ;
 scalar_t__ FUNC_17 (struct session*) ;
 struct session* FUNC_18 (struct session*) ;
 struct session* FUNC_19 (struct session*) ;
 int FUNC_20 (struct session*,struct winlink*) ;
 int FUNC_21 (struct session*,int *) ;
 int FUNC_22 (struct client*) ;
 size_t FUNC_23 (char const*,char*) ;
 int FUNC_24 (struct client*) ;
 scalar_t__ FUNC_25 (struct window*) ;
 scalar_t__ FUNC_26 (struct window*,scalar_t__) ;
 int FUNC_27 (struct window*,struct window_pane*) ;
 int FUNC_28 (struct window*,struct window_pane*,int) ;

__attribute__((used)) static enum cmd_retval
FUNC_29(struct cmd *VAR_8, struct cmdq_item *VAR_9)
{
 struct args *VAR_10 = VAR_8->args;
 const char *VAR_11 = FUNC_1(VAR_10, 't');
 enum cmd_find_type VAR_12;
 int VAR_13;
 struct client *VAR_14;
 struct session *VAR_15;
 struct winlink *VAR_16;
 struct window *VAR_17;
 struct window_pane *VAR_18;
 const char *VAR_19;
 struct key_table *VAR_20;

 if ((VAR_14 = FUNC_3(VAR_9, FUNC_1(VAR_10, 'c'), 0)) == ((void*)0))
  return (VAR_5);

 if (VAR_11 != ((void*)0) && VAR_11[FUNC_23(VAR_11, ":.%")] != '\0') {
  VAR_12 = VAR_2;
  VAR_13 = 0;
 } else {
  VAR_12 = VAR_4;
  VAR_13 = VAR_3;
 }
 if (FUNC_5(&VAR_9->target, VAR_9, VAR_11, VAR_12, VAR_13) != 0)
  return (VAR_5);
 VAR_15 = VAR_9->target.s;
 VAR_16 = VAR_9->target.wl;
 VAR_17 = VAR_16->window;
 VAR_18 = VAR_9->target.wp;

 if (FUNC_2(VAR_10, 'r'))
  VAR_14->flags ^= VAR_0;

 VAR_19 = FUNC_1(VAR_10, 'T');
 if (VAR_19 != ((void*)0)) {
  VAR_20 = FUNC_9(VAR_19, 0);
  if (VAR_20 == ((void*)0)) {
   FUNC_6(VAR_9, "table %s doesn't exist", VAR_19);
   return (VAR_5);
  }
  VAR_20->references++;
  FUNC_10(VAR_14->keytable);
  VAR_14->keytable = VAR_20;
  return (VAR_6);
 }

 if (FUNC_2(VAR_10, 'n')) {
  if ((VAR_15 = FUNC_18(VAR_14->session)) == ((void*)0)) {
   FUNC_6(VAR_9, "can't find next session");
   return (VAR_5);
  }
 } else if (FUNC_2(VAR_10, 'p')) {
  if ((VAR_15 = FUNC_19(VAR_14->session)) == ((void*)0)) {
   FUNC_6(VAR_9, "can't find previous session");
   return (VAR_5);
  }
 } else if (FUNC_2(VAR_10, 'l')) {
  if (VAR_14->last_session != ((void*)0) && FUNC_17(VAR_14->last_session))
   VAR_15 = VAR_14->last_session;
  else
   VAR_15 = ((void*)0);
  if (VAR_15 == ((void*)0)) {
   FUNC_6(VAR_9, "can't find last session");
   return (VAR_5);
  }
 } else {
  if (VAR_9->client == ((void*)0))
   return (VAR_6);
  if (VAR_16 != ((void*)0) && VAR_18 != ((void*)0)) {
   if (FUNC_26(VAR_17, FUNC_2(VAR_8->args, 'Z')))
    FUNC_16(VAR_17);
   FUNC_27(VAR_17, VAR_18);
   FUNC_28(VAR_17, VAR_18, 1);
   if (FUNC_25(VAR_17))
    FUNC_16(VAR_17);
  }
  if (VAR_16 != ((void*)0)) {
   FUNC_20(VAR_15, VAR_16);
   FUNC_4(&VAR_9->shared->current, VAR_15, 0);
  }
 }

 if (!FUNC_2(VAR_10, 'E'))
  FUNC_7(VAR_15->options, VAR_14->environ, VAR_15->environ);

 if (VAR_14->session != ((void*)0) && VAR_14->session != VAR_15)
  VAR_14->last_session = VAR_14->session;
 VAR_14->session = VAR_15;
 if (~VAR_9->shared->flags & VAR_1)
  FUNC_14(VAR_14, ((void*)0));
 FUNC_24(VAR_14);
 FUNC_22(VAR_14);
 FUNC_11("client-session-changed", VAR_14);
 FUNC_21(VAR_15, ((void*)0));
 FUNC_8(&VAR_15->last_attached_time, ((void*)0));

 FUNC_12();
 FUNC_13();
 FUNC_15(VAR_14);
 VAR_15->curw->flags &= ~VAR_7;
 FUNC_0(VAR_15);

 return (VAR_6);
}
