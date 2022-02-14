
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {int dummy; } ;
struct window_pane {int window; int flags; } ;
struct spawn_context {int idx; int environ; int flags; int cwd; int argv; int argc; int * name; int * lc; struct window_pane* wp0; struct winlink* wl; struct session* s; struct cmdq_item* item; } ;
struct session {int dummy; } ;
struct TYPE_2__ {struct window_pane* wp; struct winlink* wl; struct session* s; } ;
struct cmdq_item {TYPE_1__ target; } ;
struct cmd {struct args* args; } ;
struct args_value {int dummy; } ;
struct args {int argv; int argc; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct args*,char,struct args_value**) ;
 int FUNC_1 (struct args*,char) ;
 scalar_t__ FUNC_2 (struct args*,char) ;
 char* FUNC_3 (struct args_value**) ;
 int FUNC_4 (struct cmdq_item*,char*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct spawn_context*,int ,int) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (struct spawn_context*,char**) ;

__attribute__((used)) static enum cmd_retval
FUNC_12(struct cmd *VAR_5, struct cmdq_item *VAR_6)
{
 struct args *VAR_7 = VAR_5->args;
 struct spawn_context VAR_8;
 struct session *VAR_9 = VAR_6->target.s;
 struct winlink *VAR_10 = VAR_6->target.wl;
 struct window_pane *VAR_11 = VAR_6->target.wp;
 char *VAR_12 = ((void*)0);
 const char *VAR_13;
 struct args_value *VAR_14;

 FUNC_9(&VAR_8, 0, sizeof VAR_8);
 VAR_8.item = VAR_6;
 VAR_8.s = VAR_9;
 VAR_8.wl = VAR_10;

 VAR_8.wp0 = VAR_11;
 VAR_8.lc = ((void*)0);

 VAR_8.name = ((void*)0);
 VAR_8.argc = VAR_7->argc;
 VAR_8.argv = VAR_7->argv;
 VAR_8.environ = FUNC_5();

 VAR_13 = FUNC_0(VAR_7, 'e', &VAR_14);
 while (VAR_13 != ((void*)0)) {
  FUNC_7(VAR_8.environ, VAR_13);
  VAR_13 = FUNC_3(&VAR_14);
 }

 VAR_8.idx = -1;
 VAR_8.cwd = FUNC_1(VAR_7, 'c');

 VAR_8.flags = VAR_4;
 if (FUNC_2(VAR_7, 'k'))
  VAR_8.flags |= VAR_3;

 if (FUNC_11(&VAR_8, &VAR_12) == ((void*)0)) {
  FUNC_4(VAR_6, "respawn pane failed: %s", VAR_12);
  FUNC_8(VAR_12);
  return (VAR_0);
 }

 VAR_11->flags |= VAR_2;
 FUNC_10(VAR_11->window);

 FUNC_6(VAR_8.environ);
 return (VAR_1);
}
