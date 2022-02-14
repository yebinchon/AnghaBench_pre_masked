
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {int dummy; } ;
struct cmd {struct args* args; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int FUNC_0 (struct args*,char) ;
 int FUNC_1 (struct args*,char) ;
 int FUNC_2 (struct cmdq_item*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static enum cmd_retval
FUNC_3(struct cmd *VAR_0, struct cmdq_item *VAR_1)
{
 struct args *VAR_2 = VAR_0->args;

 return (FUNC_2(VAR_1, FUNC_0(VAR_2, 't'),
     FUNC_1(VAR_2, 'd'), FUNC_1(VAR_2, 'x'), FUNC_1(VAR_2, 'r'),
     FUNC_0(VAR_2, 'c'), FUNC_1(VAR_2, 'E')));
}
