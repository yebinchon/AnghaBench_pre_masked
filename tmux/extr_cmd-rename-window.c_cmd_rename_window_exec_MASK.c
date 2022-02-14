
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct winlink {TYPE_2__* window; } ;
struct session {int dummy; } ;
struct TYPE_4__ {struct winlink* wl; struct session* s; } ;
struct cmdq_item {TYPE_1__ target; } ;
struct cmd {struct args* args; } ;
struct client {int dummy; } ;
struct args {int * argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_5__ {int options; } ;


 int VAR_0 ;
 struct client* FUNC_0 (struct cmdq_item*,int *,int) ;
 char* FUNC_1 (struct cmdq_item*,int ,struct client*,struct session*,struct winlink*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*) ;

__attribute__((used)) static enum cmd_retval
FUNC_6(struct cmd *VAR_1, struct cmdq_item *VAR_2)
{
 struct args *VAR_3 = VAR_1->args;
 struct client *VAR_4 = FUNC_0(VAR_2, ((void*)0), 1);
 struct session *VAR_5 = VAR_2->target.s;
 struct winlink *VAR_6 = VAR_2->target.wl;
 char *VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3->argv[0], VAR_4, VAR_5, VAR_6, ((void*)0));
 FUNC_5(VAR_6->window, VAR_7);
 FUNC_3(VAR_6->window->options, "automatic-rename", 0);

 FUNC_4(VAR_6->window);
 FUNC_2(VAR_7);

 return (VAR_0);
}
