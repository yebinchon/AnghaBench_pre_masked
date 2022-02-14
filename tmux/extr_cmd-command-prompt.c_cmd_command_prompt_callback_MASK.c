
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {int dummy; } ;
struct cmd_parse_result {int status; char* error; int cmdlist; } ;
struct cmd_command_prompt_cdata {int flags; char* template; int idx; int next_input; int next_prompt; } ;
struct client {scalar_t__ prompt_inputcb; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct cmd_parse_result* FUNC_1 (char*,int *) ;
 char* FUNC_2 (char*,char const*,int ) ;
 int FUNC_3 (struct client*,struct cmdq_item*) ;
 struct cmdq_item* FUNC_4 (int ,int *,int *,int ) ;
 struct cmdq_item* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct client*,char*,char*) ;
 char* FUNC_8 (int *,char*) ;
 int FUNC_9 (char**,char*,char*) ;

__attribute__((used)) static int
FUNC_10(struct client *VAR_1, void *VAR_2, const char *VAR_3,
    int VAR_4)
{
 struct cmd_command_prompt_cdata *VAR_5 = VAR_2;
 struct cmdq_item *VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;
 char *VAR_10 = ((void*)0);
 struct cmd_parse_result *VAR_11;

 if (VAR_3 == ((void*)0))
  return (0);
 if (VAR_4 && (VAR_5->flags & VAR_0))
  return (0);

 VAR_7 = FUNC_2(VAR_5->template, VAR_3, VAR_5->idx);
 if (VAR_4) {
  FUNC_6(VAR_5->template);
  VAR_5->template = VAR_7;
 }





 if (VAR_4 && (VAR_9 = FUNC_8(&VAR_5->next_prompt, ",")) != ((void*)0)) {
  FUNC_9(&VAR_8, "%s ", VAR_9);
  VAR_10 = FUNC_8(&VAR_5->next_input, ",");
  FUNC_7(VAR_1, VAR_8, VAR_10);

  FUNC_6(VAR_8);
  VAR_5->idx++;
  return (1);
 }

 VAR_11 = FUNC_1(VAR_7, ((void*)0));
 switch (VAR_11->status) {
 case 130:
  VAR_6 = ((void*)0);
  break;
 case 129:
  VAR_6 = FUNC_5(VAR_11->error);
  FUNC_6(VAR_11->error);
  FUNC_3(VAR_1, VAR_6);
  break;
 case 128:
  VAR_6 = FUNC_4(VAR_11->cmdlist, ((void*)0), ((void*)0), 0);
  FUNC_0(VAR_11->cmdlist);
  FUNC_3(VAR_1, VAR_6);
  break;
 }

 if (!VAR_4)
  FUNC_6(VAR_7);
 if (VAR_1->prompt_inputcb != FUNC_10)
  return (1);
 return (0);
}
