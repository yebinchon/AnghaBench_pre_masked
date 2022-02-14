
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {int dummy; } ;
struct window_mode {int dummy; } ;
struct TYPE_2__ {struct window_pane* wp; } ;
struct cmdq_item {TYPE_1__ target; } ;
struct cmd {int * entry; struct args* args; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 struct window_mode VAR_3 ;
 struct window_mode VAR_4 ;
 int FUNC_2 (struct window_pane*,struct window_mode const*,TYPE_1__*,struct args*) ;
 struct window_mode VAR_5 ;

__attribute__((used)) static enum cmd_retval
FUNC_3(struct cmd *VAR_6, struct cmdq_item *VAR_7)
{
 struct args *VAR_8 = VAR_6->args;
 struct window_pane *VAR_9 = VAR_7->target.wp;
 const struct window_mode *VAR_10;

 if (VAR_6->entry == &VAR_1) {
  if (FUNC_0(((void*)0)) == ((void*)0))
   return (VAR_0);
  VAR_10 = &VAR_3;
 } else if (VAR_6->entry == &VAR_2) {
  if (FUNC_1() == 0)
   return (VAR_0);
  VAR_10 = &VAR_4;
 } else
  VAR_10 = &VAR_5;

 FUNC_2(VAR_9, VAR_10, &VAR_7->target, VAR_8);
 return (VAR_0);
}
