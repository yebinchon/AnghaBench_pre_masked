
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmdq_item {TYPE_1__* cmd; } ;
struct cmd_find_state {int dummy; } ;
struct cmd_entry_flag {scalar_t__ flag; int flags; int type; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_2__ {int args; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct cmd_find_state*,int ) ;
 scalar_t__ FUNC_2 (struct cmd_find_state*,struct cmdq_item*,char const*,int ,int ) ;

__attribute__((used)) static enum cmd_retval
FUNC_3(struct cmdq_item *VAR_2, struct cmd_find_state *VAR_3,
    const struct cmd_entry_flag *VAR_4)
{
 const char *VAR_5;

 if (VAR_4->flag == 0) {
  FUNC_1(VAR_3, 0);
  return (VAR_1);
 }

 VAR_5 = FUNC_0(VAR_2->cmd->args, VAR_4->flag);
 if (FUNC_2(VAR_3, VAR_2, VAR_5, VAR_4->type, VAR_4->flags) != 0) {
  FUNC_1(VAR_3, 0);
  return (VAR_0);
 }
 return (VAR_1);
}
