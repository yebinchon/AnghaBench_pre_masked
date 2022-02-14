
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {int dummy; } ;
struct cmd_command_prompt_cdata {int idx; int flags; int * next_input; int * inputs; int * next_prompt; int * prompts; int * template; } ;
struct cmd {struct args* args; } ;
struct client {int * prompt_string; } ;
struct args {scalar_t__ argc; char const** argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct args*,char) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 int VAR_5 ;
 int VAR_6 ;
 struct client* FUNC_2 (struct cmdq_item*,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct client*,char*,char*,int ,int ,struct cmd_command_prompt_cdata*,int ) ;
 size_t FUNC_5 (int *,char*) ;
 char* FUNC_6 (int **,char*) ;
 int FUNC_7 (char**,char*,...) ;
 struct cmd_command_prompt_cdata* FUNC_8 (int,int) ;
 void* FUNC_9 (char const*) ;

__attribute__((used)) static enum cmd_retval
FUNC_10(struct cmd *VAR_7, struct cmdq_item *VAR_8)
{
 struct args *VAR_9 = VAR_7->args;
 const char *VAR_10, *VAR_11;
 struct cmd_command_prompt_cdata *VAR_12;
 struct client *VAR_13;
 char *VAR_14, *VAR_15, *VAR_16 = ((void*)0);
 size_t VAR_17;

 if ((VAR_13 = FUNC_2(VAR_8, FUNC_0(VAR_9, 't'), 0)) == ((void*)0))
  return (VAR_0);

 if (VAR_13->prompt_string != ((void*)0))
  return (VAR_1);

 VAR_12 = FUNC_8(1, sizeof *VAR_12);

 VAR_12->inputs = ((void*)0);
 VAR_12->next_input = ((void*)0);

 VAR_12->prompts = ((void*)0);
 VAR_12->next_prompt = ((void*)0);

 VAR_12->template = ((void*)0);
 VAR_12->idx = 1;

 if (VAR_9->argc != 0)
  VAR_12->template = FUNC_9(VAR_9->argv[0]);
 else
  VAR_12->template = FUNC_9("%1");

 if ((VAR_11 = FUNC_0(VAR_9, 'p')) != ((void*)0))
  VAR_12->prompts = FUNC_9(VAR_11);
 else if (VAR_9->argc != 0) {
  VAR_17 = FUNC_5(VAR_12->template, " ,");
  FUNC_7(&VAR_12->prompts, "(%.*s) ", (int) VAR_17, VAR_12->template);
 } else
  VAR_12->prompts = FUNC_9(":");


 VAR_12->next_prompt = VAR_12->prompts;
 VAR_15 = FUNC_6(&VAR_12->next_prompt, ",");
 if (VAR_11 == ((void*)0))
  VAR_14 = FUNC_9(VAR_15);
 else
  FUNC_7(&VAR_14, "%s ", VAR_15);


 if ((VAR_10 = FUNC_0(VAR_9, 'I')) != ((void*)0)) {
  VAR_12->inputs = FUNC_9(VAR_10);
  VAR_12->next_input = VAR_12->inputs;
  VAR_16 = FUNC_6(&VAR_12->next_input, ",");
 }

 if (FUNC_1(VAR_9, '1'))
  VAR_12->flags |= VAR_4;
 else if (FUNC_1(VAR_9, 'N'))
  VAR_12->flags |= VAR_3;
 else if (FUNC_1(VAR_9, 'i'))
  VAR_12->flags |= VAR_2;
 FUNC_4(VAR_13, VAR_14, VAR_16, VAR_5,
     VAR_6, VAR_12, VAR_12->flags);
 FUNC_3(VAR_14);

 return (VAR_1);
}
