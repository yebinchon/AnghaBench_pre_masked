
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_command_prompt_cdata {struct cmd_command_prompt_cdata* template; struct cmd_command_prompt_cdata* prompts; struct cmd_command_prompt_cdata* inputs; } ;


 int FUNC_0 (struct cmd_command_prompt_cdata*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct cmd_command_prompt_cdata *VAR_1 = VAR_0;

 FUNC_0(VAR_1->inputs);
 FUNC_0(VAR_1->prompts);
 FUNC_0(VAR_1->template);
 FUNC_0(VAR_1);
}
