
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s; } ;
struct cmdq_item {TYPE_1__ target; } ;
struct cmd {int * entry; struct args* args; } ;
struct client {int dummy; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct args*,char) ;
 struct client* FUNC_1 (struct cmdq_item*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct client*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static enum cmd_retval
FUNC_6(struct cmd *VAR_4, struct cmdq_item *VAR_5)
{
 struct args *VAR_6 = VAR_4->args;
 struct client *VAR_7;

 if (VAR_4->entry == &VAR_2)
  FUNC_3();
 else if (VAR_4->entry == &VAR_3)
  FUNC_5(VAR_5->target.s);
 else {
  if ((VAR_7 = FUNC_1(VAR_5, FUNC_0(VAR_6, 't'), 0)) == ((void*)0))
   return (VAR_0);
  FUNC_4(VAR_7);
 }
 FUNC_2();

 return (VAR_1);
}
