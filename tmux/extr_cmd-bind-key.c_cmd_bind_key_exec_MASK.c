
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {int dummy; } ;
struct cmd_parse_result {int status; char* error; int cmdlist; } ;
struct cmd {struct args* args; } ;
struct args {char** argv; int argc; } ;
typedef scalar_t__ key_code ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;





 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (struct args*,char) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 struct cmd_parse_result* FUNC_2 (int,char**,int *) ;
 struct cmd_parse_result* FUNC_3 (char*,int *) ;
 int FUNC_4 (struct cmdq_item*,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static enum cmd_retval
FUNC_8(struct cmd *VAR_4, struct cmdq_item *VAR_5)
{
 struct args *VAR_6 = VAR_4->args;
 key_code VAR_7;
 const char *VAR_8;
 struct cmd_parse_result *VAR_9;
 char **VAR_10 = VAR_6->argv;
 int VAR_11 = VAR_6->argc;

 VAR_7 = FUNC_7(VAR_10[0]);
 if (VAR_7 == VAR_2 || VAR_7 == VAR_3) {
  FUNC_4(VAR_5, "unknown key: %s", VAR_10[0]);
  return (VAR_0);
 }

 if (FUNC_1(VAR_6, 'T'))
  VAR_8 = FUNC_0(VAR_6, 'T');
 else if (FUNC_1(VAR_6, 'n'))
  VAR_8 = "root";
 else
  VAR_8 = "prefix";

 if (VAR_11 == 2)
  VAR_9 = FUNC_3(VAR_10[1], ((void*)0));
 else
  VAR_9 = FUNC_2(VAR_11 - 1, VAR_10 + 1, ((void*)0));
 switch (VAR_9->status) {
 case 130:
  FUNC_4(VAR_5, "empty command");
  return (VAR_0);
 case 129:
  FUNC_4(VAR_5, "%s", VAR_9->error);
  FUNC_5(VAR_9->error);
  return (VAR_0);
 case 128:
  break;
 }
 FUNC_6(VAR_8, VAR_7, FUNC_1(VAR_6, 'r'), VAR_9->cmdlist);
 return (VAR_1);
}
