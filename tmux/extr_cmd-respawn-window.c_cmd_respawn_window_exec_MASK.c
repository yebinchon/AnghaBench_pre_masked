
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {int window; } ;
struct spawn_context {int idx; int environ; int flags; int cwd; int argv; int argc; int * name; int c; struct winlink* wl; struct session* s; struct cmdq_item* item; } ;
struct session {int dummy; } ;
struct TYPE_2__ {struct winlink* wl; struct session* s; } ;
struct cmdq_item {TYPE_1__ target; } ;
struct cmd {struct args* args; } ;
struct args_value {int dummy; } ;
struct args {int argv; int argc; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (struct args*,char,struct args_value**) ;
 int FUNC_1 (struct args*,char) ;
 scalar_t__ FUNC_2 (struct args*,char) ;
 char* FUNC_3 (struct args_value**) ;
 int FUNC_4 (struct cmdq_item*,int *,int) ;
 int FUNC_5 (struct cmdq_item*,char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct spawn_context*,int ,int) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (struct spawn_context*,char**) ;

__attribute__((used)) static enum cmd_retval
FUNC_13(struct cmd *VAR_4, struct cmdq_item *VAR_5)
{
 struct args *VAR_6 = VAR_4->args;
 struct spawn_context VAR_7;
 struct session *VAR_8 = VAR_5->target.s;
 struct winlink *VAR_9 = VAR_5->target.wl;
 char *VAR_10 = ((void*)0);
 const char *VAR_11;
 struct args_value *VAR_12;

 FUNC_10(&VAR_7, 0, sizeof VAR_7);
 VAR_7.item = VAR_5;
 VAR_7.s = VAR_8;
 VAR_7.wl = VAR_9;
 VAR_7.c = FUNC_4(VAR_5, ((void*)0), 1);

 VAR_7.name = ((void*)0);
 VAR_7.argc = VAR_6->argc;
 VAR_7.argv = VAR_6->argv;
 VAR_7.environ = FUNC_6();

 VAR_11 = FUNC_0(VAR_6, 'e', &VAR_12);
 while (VAR_11 != ((void*)0)) {
  FUNC_8(VAR_7.environ, VAR_11);
  VAR_11 = FUNC_3(&VAR_12);
 }

 VAR_7.idx = -1;
 VAR_7.cwd = FUNC_1(VAR_6, 'c');

 VAR_7.flags = VAR_3;
 if (FUNC_2(VAR_6, 'k'))
  VAR_7.flags |= VAR_2;

 if (FUNC_12(&VAR_7, &VAR_10) == ((void*)0)) {
  FUNC_5(VAR_5, "respawn window failed: %s", VAR_10);
  FUNC_9(VAR_10);
  return (VAR_0);
 }

 FUNC_11(VAR_9->window);

 FUNC_7(VAR_7.environ);
 return (VAR_1);
}
