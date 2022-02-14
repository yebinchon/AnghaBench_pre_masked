
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s; } ;
struct cmdq_item {TYPE_1__ target; } ;
struct cmd {struct args* args; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct args*,char) ;
 int FUNC_1 (struct cmd*,struct cmdq_item*) ;
 int FUNC_2 (struct cmd*,int ,struct cmdq_item*,int ) ;

__attribute__((used)) static enum cmd_retval
FUNC_3(struct cmd *VAR_1, struct cmdq_item *VAR_2)
{
 struct args *VAR_3 = VAR_1->args;

 if (FUNC_0(VAR_3, 'a'))
  FUNC_1(VAR_1, VAR_2);
 else
  FUNC_2(VAR_1, VAR_2->target.s, VAR_2, 0);

 return (VAR_0);
}
