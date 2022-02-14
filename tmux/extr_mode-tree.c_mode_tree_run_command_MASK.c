
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct cmdq_item {int dummy; } ;
struct cmd_parse_result {int status; char* error; int cmdlist; } ;
struct cmd_find_state {int dummy; } ;
struct client {int dummy; } ;





 int FUNC_0 (int ) ;
 struct cmd_parse_result* FUNC_1 (char*,int *) ;
 char* FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (struct client*,struct cmdq_item*) ;
 struct cmdq_item* FUNC_4 (int ,struct cmd_find_state*,int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct client*,char*,char*) ;
 char FUNC_7 (int ) ;

void
FUNC_8(struct client *VAR_0, struct cmd_find_state *VAR_1,
    const char *VAR_2, const char *VAR_3)
{
 struct cmdq_item *VAR_4;
 char *VAR_5;
 struct cmd_parse_result *VAR_6;

 VAR_5 = FUNC_2(VAR_2, VAR_3, 1);
 if (VAR_5 == ((void*)0) || *VAR_5 == '\0') {
  FUNC_5(VAR_5);
  return;
 }

 VAR_6 = FUNC_1(VAR_5, ((void*)0));
 switch (VAR_6->status) {
 case 130:
  break;
 case 129:
  if (VAR_0 != ((void*)0)) {
   *VAR_6->error = FUNC_7((u_char)*VAR_6->error);
   FUNC_6(VAR_0, "%s", VAR_6->error);
  }
  FUNC_5(VAR_6->error);
  break;
 case 128:
  VAR_4 = FUNC_4(VAR_6->cmdlist, VAR_1, ((void*)0), 0);
  FUNC_3(VAR_0, VAR_4);
  FUNC_0(VAR_6->cmdlist);
  break;
 }

 FUNC_5(VAR_5);
}
