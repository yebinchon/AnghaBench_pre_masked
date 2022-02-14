
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct winlink {int dummy; } ;
struct session {int options; int curw; } ;
struct TYPE_4__ {int idx; struct session* s; } ;
struct TYPE_3__ {struct winlink* wl; struct session* s; } ;
struct cmdq_item {TYPE_2__ target; TYPE_1__ source; } ;
struct cmd {int * entry; struct args* args; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (struct args*,char) ;
 int FUNC_1 (struct args*,char) ;
 scalar_t__ FUNC_2 (TYPE_2__*,struct cmdq_item*,char const*,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct cmdq_item*,char*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct session*,struct winlink*,struct session*,int,int,int,char**) ;
 int FUNC_8 (struct session*) ;
 int FUNC_9 (struct session*,struct winlink*) ;
 int FUNC_10 (struct session*) ;
 int FUNC_11 (struct session*,int ) ;

__attribute__((used)) static enum cmd_retval
FUNC_12(struct cmd *VAR_7, struct cmdq_item *VAR_8)
{
 struct args *VAR_9 = VAR_7->args;
 const char *VAR_10 = FUNC_0(VAR_9, 't');
 struct session *VAR_11;
 struct session *VAR_12;
 struct winlink *VAR_13;
 char *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;

 if (FUNC_1(VAR_9, 'r')) {
  if (FUNC_2(&VAR_8->target, VAR_8, VAR_10,
      VAR_1, VAR_0) != 0)
   return (VAR_4);

  FUNC_10(VAR_8->target.s);
  FUNC_6();
  FUNC_8(VAR_8->target.s);

  return (VAR_5);
 }
 if (FUNC_2(&VAR_8->target, VAR_8, VAR_10, VAR_2,
     VAR_3) != 0)
  return (VAR_4);
 VAR_11 = VAR_8->source.s;
 VAR_12 = VAR_8->target.s;
 VAR_13 = VAR_8->source.wl;
 VAR_15 = VAR_8->target.idx;

 VAR_16 = FUNC_1(VAR_7->args, 'k');
 VAR_17 = FUNC_1(VAR_7->args, 'd');
 VAR_18 = FUNC_1(VAR_7->args, 's');

 if (FUNC_1(VAR_7->args, 'a')) {
  if ((VAR_15 = FUNC_11(VAR_12, VAR_12->curw)) == -1)
   return (VAR_4);
 }

 if (FUNC_7(VAR_11, VAR_13, VAR_12, VAR_15, VAR_16, !VAR_17,
     &VAR_14) != 0) {
  FUNC_3(VAR_8, "can't link window: %s", VAR_14);
  FUNC_4(VAR_14);
  return (VAR_4);
 }
 if (VAR_7->entry == &VAR_6)
  FUNC_9(VAR_11, VAR_13);






 if (!VAR_18 && FUNC_5(VAR_11->options, "renumber-windows"))
  FUNC_10(VAR_11);

 FUNC_6();

 return (VAR_5);
}
