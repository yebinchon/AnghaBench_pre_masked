
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winlink {int dummy; } ;
struct session {int dummy; } ;
struct TYPE_2__ {struct winlink* wl; struct session* s; } ;
struct cmdq_item {TYPE_1__ target; } ;
struct cmd {struct args* args; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct args*,char) ;
 int FUNC_1 (struct cmd*,struct cmdq_item*) ;
 int FUNC_2 (struct cmd*,struct session*,struct cmdq_item*,int) ;
 int FUNC_3 (struct cmd*,struct session*,struct winlink*,struct cmdq_item*,int ) ;

__attribute__((used)) static enum cmd_retval
FUNC_4(struct cmd *VAR_1, struct cmdq_item *VAR_2)
{
 struct args *VAR_3 = VAR_1->args;
 struct session *VAR_4 = VAR_2->target.s;
 struct winlink *VAR_5 = VAR_2->target.wl;

 if (FUNC_0(VAR_3, 'a'))
  FUNC_1(VAR_1, VAR_2);
 else if (FUNC_0(VAR_3, 's'))
  FUNC_2(VAR_1, VAR_4, VAR_2, 1);
 else
  FUNC_3(VAR_1, VAR_4, VAR_5, VAR_2, 0);

 return (VAR_0);
}
