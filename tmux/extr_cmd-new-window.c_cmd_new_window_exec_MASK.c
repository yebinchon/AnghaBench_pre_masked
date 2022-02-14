
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct winlink {int dummy; } ;
struct spawn_context {int idx; int environ; int flags; void* cwd; int argv; int argc; void* name; struct client* c; struct session* s; struct cmdq_item* item; } ;
struct session {struct winlink* curw; } ;
struct TYPE_4__ {int idx; struct winlink* wl; struct session* s; } ;
struct cmdq_item {TYPE_2__ target; TYPE_1__* shared; } ;
struct cmd_find_state {int dummy; } ;
struct cmd {struct args* args; } ;
struct client {int dummy; } ;
struct args_value {int dummy; } ;
struct args {int argv; int argc; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_3__ {struct cmd_find_state current; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct args*,char,struct args_value**) ;
 void* FUNC_1 (struct args*,float) ;
 scalar_t__ FUNC_2 (struct args*,char) ;
 char* FUNC_3 (struct args_value**) ;
 struct client* FUNC_4 (struct cmdq_item*,int *,int) ;
 int FUNC_5 (struct cmd_find_state*,struct winlink*,int ) ;
 int FUNC_6 (struct cmdq_item*,char*,...) ;
 int FUNC_7 (struct session*,struct cmdq_item*,struct cmd_find_state*,char*) ;
 int FUNC_8 (struct cmdq_item*,char*,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char const*) ;
 char* FUNC_12 (struct cmdq_item*,char const*,struct client*,struct session*,struct winlink*,int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct spawn_context*,int ,int) ;
 int FUNC_15 (struct session*) ;
 int FUNC_16 (struct session*) ;
 struct winlink* FUNC_17 (struct spawn_context*,char**) ;
 int FUNC_18 (struct session*,struct winlink*) ;

__attribute__((used)) static enum cmd_retval
FUNC_19(struct cmd *VAR_5, struct cmdq_item *VAR_6)
{
 struct args *VAR_7 = VAR_5->args;
 struct cmd_find_state *VAR_8 = &VAR_6->shared->current;
 struct spawn_context VAR_9;
 struct client *VAR_10 = FUNC_4(VAR_6, ((void*)0), 1);
 struct session *VAR_11 = VAR_6->target.s;
 struct winlink *VAR_12 = VAR_6->target.wl;
 int VAR_13 = VAR_6->target.idx;
 struct winlink *VAR_14;
 char *VAR_15 = ((void*)0), *VAR_16;
 const char *VAR_17, *VAR_18;
 struct cmd_find_state VAR_19;
 struct args_value *VAR_20;

 if (FUNC_2(VAR_7, 'a') && (VAR_13 = FUNC_18(VAR_11, VAR_12)) == -1) {
  FUNC_6(VAR_6, "couldn't get a window index");
  return (VAR_0);
 }

 FUNC_14(&VAR_9, 0, sizeof VAR_9);
 VAR_9.item = VAR_6;
 VAR_9.s = VAR_11;
 VAR_9.c = VAR_10;

 VAR_9.name = FUNC_1(VAR_7, 'n');
 VAR_9.argc = VAR_7->argc;
 VAR_9.argv = VAR_7->argv;
 VAR_9.environ = FUNC_9();

 VAR_18 = FUNC_0(VAR_7, 'e', &VAR_20);
 while (VAR_18 != ((void*)0)) {
  FUNC_11(VAR_9.environ, VAR_18);
  VAR_18 = FUNC_3(&VAR_20);
 }

 VAR_9.idx = VAR_13;
 VAR_9.cwd = FUNC_1(VAR_7, 'c');

 VAR_9.flags = 0;
 if (FUNC_2(VAR_7, 'd'))
  VAR_9.flags |= VAR_3;
 if (FUNC_2(VAR_7, 'k'))
  VAR_9.flags |= VAR_4;

 if ((VAR_14 = FUNC_17(&VAR_9, &VAR_15)) == ((void*)0)) {
  FUNC_6(VAR_6, "create window failed: %s", VAR_15);
  FUNC_13(VAR_15);
  return (VAR_0);
 }
 if (!FUNC_2(VAR_7, 'd') || VAR_14 == VAR_11->curw) {
  FUNC_5(VAR_8, VAR_14, 0);
  FUNC_15(VAR_11);
 } else
  FUNC_16(VAR_11);

 if (FUNC_2(VAR_7, 'P')) {
  if ((VAR_17 = FUNC_1(VAR_7, 'F')) == ((void*)0))
   VAR_17 = VAR_2;
  VAR_16 = FUNC_12(VAR_6, VAR_17, VAR_10, VAR_11, VAR_14, ((void*)0));
  FUNC_8(VAR_6, "%s", VAR_16);
  FUNC_13(VAR_16);
 }

 FUNC_5(&VAR_19, VAR_14, 0);
 FUNC_7(VAR_11, VAR_6, &VAR_19, "after-new-window");

 FUNC_10(VAR_9.environ);
 return (VAR_1);
}
