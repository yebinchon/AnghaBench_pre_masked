
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct winlink {int idx; struct window* window; } ;
struct window {int winlinks; } ;
struct session_group {int dummy; } ;
struct session {int dummy; } ;
struct TYPE_4__ {struct session* s; struct winlink* wl; } ;
struct TYPE_3__ {struct session* s; struct winlink* wl; } ;
struct cmdq_item {TYPE_2__ target; TYPE_1__ source; } ;
struct cmd {int args; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct winlink*,int ) ;
 int FUNC_1 (int *,struct winlink*,int ) ;
 scalar_t__ FUNC_2 (int ,char) ;
 int FUNC_3 (struct cmdq_item*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct session*) ;
 struct session_group* FUNC_6 (struct session*) ;
 int FUNC_7 (struct session*) ;
 int FUNC_8 (struct session*,int ) ;
 int VAR_2 ;

__attribute__((used)) static enum cmd_retval
FUNC_9(struct cmd *VAR_3, struct cmdq_item *VAR_4)
{
 struct session *VAR_5, *VAR_6;
 struct session_group *VAR_7, *VAR_8;
 struct winlink *VAR_9, *VAR_10;
 struct window *VAR_11, *VAR_12;

 VAR_9 = VAR_4->source.wl;
 VAR_5 = VAR_4->source.s;
 VAR_7 = FUNC_6(VAR_5);

 VAR_10 = VAR_4->target.wl;
 VAR_6 = VAR_4->target.s;
 VAR_8 = FUNC_6(VAR_6);

 if (VAR_5 != VAR_6 && VAR_7 != ((void*)0) && VAR_8 != ((void*)0) &&
     VAR_7 == VAR_8) {
  FUNC_3(VAR_4, "can't move window, sessions are grouped");
  return (VAR_0);
 }

 if (VAR_10->window == VAR_9->window)
  return (VAR_1);

 VAR_12 = VAR_10->window;
 FUNC_1(&VAR_12->winlinks, VAR_10, VAR_2);
 VAR_11 = VAR_9->window;
 FUNC_1(&VAR_11->winlinks, VAR_9, VAR_2);

 VAR_10->window = VAR_11;
 FUNC_0(&VAR_11->winlinks, VAR_10, VAR_2);
 VAR_9->window = VAR_12;
 FUNC_0(&VAR_12->winlinks, VAR_9, VAR_2);

 if (FUNC_2(VAR_3->args, 'd')) {
  FUNC_8(VAR_6, VAR_10->idx);
  if (VAR_5 != VAR_6)
   FUNC_8(VAR_5, VAR_9->idx);
 }
 FUNC_7(VAR_5);
 FUNC_5(VAR_5);
 if (VAR_5 != VAR_6) {
  FUNC_7(VAR_6);
  FUNC_5(VAR_6);
 }
 FUNC_4();

 return (VAR_1);
}
