
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int grid; } ;
struct window_pane {TYPE_2__ base; } ;
struct TYPE_3__ {struct window_pane* wp; } ;
struct cmdq_item {struct client* client; TYPE_1__ target; } ;
struct cmd {int * entry; struct args* args; } ;
struct client {int flags; int stdout_data; int * session; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct args*,char) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 char* FUNC_2 (struct args*,struct cmdq_item*,struct window_pane*,size_t*) ;
 char* FUNC_3 (struct args*,struct window_pane*,size_t*) ;
 int VAR_3 ;
 int FUNC_4 (struct cmdq_item*,char*,...) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,size_t,char const*,char**) ;
 int FUNC_9 (struct client*) ;
 int FUNC_10 (struct window_pane*) ;

__attribute__((used)) static enum cmd_retval
FUNC_11(struct cmd *VAR_4, struct cmdq_item *VAR_5)
{
 struct args *VAR_6 = VAR_4->args;
 struct client *VAR_7;
 struct window_pane *VAR_8 = VAR_5->target.wp;
 char *VAR_9, *VAR_10;
 const char *VAR_11;
 size_t VAR_12;

 if (VAR_4->entry == &VAR_3) {
  FUNC_10(VAR_8);
  FUNC_7(VAR_8->base.grid);
  return (VAR_2);
 }

 VAR_12 = 0;
 if (FUNC_1(VAR_6, 'P'))
  VAR_9 = FUNC_3(VAR_6, VAR_8, &VAR_12);
 else
  VAR_9 = FUNC_2(VAR_6, VAR_5, VAR_8, &VAR_12);
 if (VAR_9 == ((void*)0))
  return (VAR_1);

 if (FUNC_1(VAR_6, 'p')) {
  VAR_7 = VAR_5->client;
  if (VAR_7 == ((void*)0) ||
      (VAR_7->session != ((void*)0) && !(VAR_7->flags & VAR_0))) {
   FUNC_4(VAR_5, "can't write to stdout");
   FUNC_6(VAR_9);
   return (VAR_1);
  }
  FUNC_5(VAR_7->stdout_data, VAR_9, VAR_12);
  FUNC_6(VAR_9);
  if (FUNC_1(VAR_6, 'P') && VAR_12 > 0)
      FUNC_5(VAR_7->stdout_data, "\n", 1);
  FUNC_9(VAR_7);
 } else {
  VAR_11 = ((void*)0);
  if (FUNC_1(VAR_6, 'b'))
   VAR_11 = FUNC_0(VAR_6, 'b');

  if (FUNC_8(VAR_9, VAR_12, VAR_11, &VAR_10) != 0) {
   FUNC_4(VAR_5, "%s", VAR_10);
   FUNC_6(VAR_10);
   FUNC_6(VAR_9);
   return (VAR_1);
  }
 }

 return (VAR_2);
}
