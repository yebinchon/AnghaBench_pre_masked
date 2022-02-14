
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct winlink {int idx; } ;
struct session {struct winlink* curw; } ;
struct TYPE_4__ {struct session* s; struct winlink* wl; } ;
struct cmdq_item {TYPE_2__ target; TYPE_1__* shared; } ;
struct cmd_find_state {struct session* s; } ;
struct cmd {int args; int * entry; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_3__ {struct cmd_find_state current; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char) ;
 int FUNC_1 (struct cmd_find_state*,struct session*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct cmdq_item*,char*) ;
 int FUNC_3 (struct session*,struct cmdq_item*,struct cmd_find_state*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct session*) ;
 scalar_t__ FUNC_6 (struct session*) ;
 scalar_t__ FUNC_7 (struct session*,int) ;
 scalar_t__ FUNC_8 (struct session*,int) ;
 scalar_t__ FUNC_9 (struct session*,int ) ;

__attribute__((used)) static enum cmd_retval
FUNC_10(struct cmd *VAR_5, struct cmdq_item *VAR_6)
{
 struct cmd_find_state *VAR_7 = &VAR_6->shared->current;
 struct winlink *VAR_8 = VAR_6->target.wl;
 struct session *VAR_9 = VAR_6->target.s;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_10 = VAR_5->entry == &VAR_3;
 if (FUNC_0(VAR_5->args, 'n'))
  VAR_10 = 1;
 VAR_11 = VAR_5->entry == &VAR_4;
 if (FUNC_0(VAR_5->args, 'p'))
  VAR_11 = 1;
 VAR_12 = VAR_5->entry == &VAR_2;
 if (FUNC_0(VAR_5->args, 'l'))
  VAR_12 = 1;

 if (VAR_10 || VAR_11 || VAR_12) {
  VAR_13 = FUNC_0(VAR_5->args, 'a');
  if (VAR_10) {
   if (FUNC_7(VAR_9, VAR_13) != 0) {
    FUNC_2(VAR_6, "no next window");
    return (VAR_0);
   }
  } else if (VAR_11) {
   if (FUNC_8(VAR_9, VAR_13) != 0) {
    FUNC_2(VAR_6, "no previous window");
    return (VAR_0);
   }
  } else {
   if (FUNC_6(VAR_9) != 0) {
    FUNC_2(VAR_6, "no last window");
    return (VAR_0);
   }
  }
  FUNC_1(VAR_7, VAR_9, 0);
  FUNC_5(VAR_9);
  FUNC_3(VAR_9, VAR_6, VAR_7, "after-select-window");
 } else {




  if (FUNC_0(VAR_5->args, 'T') && VAR_8 == VAR_9->curw) {
   if (FUNC_6(VAR_9) != 0) {
    FUNC_2(VAR_6, "no last window");
    return (-1);
   }
   if (VAR_7->s == VAR_9)
    FUNC_1(VAR_7, VAR_9, 0);
   FUNC_5(VAR_9);
  } else if (FUNC_9(VAR_9, VAR_8->idx) == 0) {
   FUNC_1(VAR_7, VAR_9, 0);
   FUNC_5(VAR_9);
  }
  FUNC_3(VAR_9, VAR_6, VAR_7, "after-select-window");
 }
 FUNC_4();

 return (VAR_1);
}
