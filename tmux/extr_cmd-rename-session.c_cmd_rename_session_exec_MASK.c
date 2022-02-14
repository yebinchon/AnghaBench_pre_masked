
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct session {char* name; } ;
struct TYPE_2__ {struct session* s; } ;
struct cmdq_item {TYPE_1__ target; } ;
struct cmd {struct args* args; } ;
struct client {int dummy; } ;
struct args {int * argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,struct session*) ;
 int FUNC_1 (int ,int *,struct session*) ;
 struct client* FUNC_2 (struct cmdq_item*,int *,int) ;
 int FUNC_3 (struct cmdq_item*,char*,char*) ;
 char* FUNC_4 (struct cmdq_item*,int ,struct client*,struct session*,int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,struct session*) ;
 int FUNC_7 (struct session*) ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (char*,char*) ;

__attribute__((used)) static enum cmd_retval
FUNC_11(struct cmd *VAR_3, struct cmdq_item *VAR_4)
{
 struct args *VAR_5 = VAR_3->args;
 struct client *VAR_6 = FUNC_2(VAR_4, ((void*)0), 1);
 struct session *VAR_7 = VAR_4->target.s;
 char *VAR_8;

 VAR_8 = FUNC_4(VAR_4, VAR_5->argv[0], VAR_6, VAR_7, ((void*)0), ((void*)0));
 if (FUNC_10(VAR_8, VAR_7->name) == 0) {
  FUNC_5(VAR_8);
  return (VAR_1);
 }

 if (!FUNC_8(VAR_8)) {
  FUNC_3(VAR_4, "bad session name: %s", VAR_8);
  FUNC_5(VAR_8);
  return (VAR_0);
 }
 if (FUNC_9(VAR_8) != ((void*)0)) {
  FUNC_3(VAR_4, "duplicate session: %s", VAR_8);
  FUNC_5(VAR_8);
  return (VAR_0);
 }

 FUNC_1(VAR_2, &VAR_2, VAR_7);
 FUNC_5(VAR_7->name);
 VAR_7->name = VAR_8;
 FUNC_0(VAR_2, &VAR_2, VAR_7);

 FUNC_7(VAR_7);
 FUNC_6("session-renamed", VAR_7);

 return (VAR_1);
}
