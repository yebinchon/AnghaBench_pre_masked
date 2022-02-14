
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct window_pane {int dummy; } ;
struct session {int dummy; } ;
struct cmdq_shared {int mouse; } ;
struct TYPE_2__ {struct window_pane* wp; } ;
struct cmdq_item {TYPE_1__ target; struct client* client; struct cmdq_shared* shared; } ;
struct cmd {struct args* args; int * entry; } ;
struct client {struct session* session; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct args*,unsigned char) ;
 int VAR_1 ;
 struct window_pane* FUNC_1 (int *,struct session**,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct window_pane*,int ) ;
 int FUNC_3 (struct client*,int *) ;
 int FUNC_4 (struct window_pane*,int *,int *,struct args*) ;

__attribute__((used)) static enum cmd_retval
FUNC_5(struct cmd *VAR_4, struct cmdq_item *VAR_5)
{
 struct args *VAR_6 = VAR_4->args;
 struct cmdq_shared *VAR_7 = VAR_5->shared;
 struct client *VAR_8 = VAR_5->client;
 struct session *VAR_9;
 struct window_pane *VAR_10 = VAR_5->target.wp;

 if (FUNC_0(VAR_6, 'M')) {
  if ((VAR_10 = FUNC_1(&VAR_7->mouse, &VAR_9, ((void*)0))) == ((void*)0))
   return (VAR_0);
  if (VAR_8 == ((void*)0) || VAR_8->session != VAR_9)
   return (VAR_0);
 }

 if (VAR_4->entry == &VAR_1) {
  FUNC_4(VAR_10, &VAR_2, ((void*)0), ((void*)0));
  return (VAR_0);
 }

 if (!FUNC_4(VAR_10, &VAR_3, ((void*)0), VAR_6)) {
  if (FUNC_0(VAR_6, 'M'))
   FUNC_3(VAR_8, &VAR_7->mouse);
 }
 if (FUNC_0(VAR_4->args, 'u'))
  FUNC_2(VAR_10, 0);

 return (VAR_0);
}
