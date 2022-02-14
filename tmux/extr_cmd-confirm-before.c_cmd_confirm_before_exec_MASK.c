
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {int dummy; } ;
struct cmd_confirm_before_data {void* cmd; } ;
struct cmd {struct args* args; } ;
struct client {int dummy; } ;
struct args {int * argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct args*,char) ;
 int VAR_3 ;
 int VAR_4 ;
 struct client* FUNC_1 (struct cmdq_item*,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct client*,char*,int *,int ,int ,struct cmd_confirm_before_data*,int ) ;
 char* FUNC_4 (char**,char*) ;
 int FUNC_5 (char**,char*,char const*) ;
 struct cmd_confirm_before_data* FUNC_6 (int) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static enum cmd_retval
FUNC_8(struct cmd *VAR_5, struct cmdq_item *VAR_6)
{
 struct args *VAR_7 = VAR_5->args;
 struct cmd_confirm_before_data *VAR_8;
 struct client *VAR_9;
 char *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 const char *VAR_14;

 if ((VAR_9 = FUNC_1(VAR_6, FUNC_0(VAR_7, 't'), 0)) == ((void*)0))
  return (VAR_0);

 if ((VAR_14 = FUNC_0(VAR_7, 'p')) != ((void*)0))
  FUNC_5(&VAR_12, "%s ", VAR_14);
 else {
  VAR_13 = VAR_11 = FUNC_7(VAR_7->argv[0]);
  VAR_10 = FUNC_4(&VAR_13, " \t");
  FUNC_5(&VAR_12, "Confirm '%s'? (y/n) ", VAR_10);
  FUNC_2(VAR_11);
 }

 VAR_8 = FUNC_6(sizeof *VAR_8);
 VAR_8->cmd = FUNC_7(VAR_7->argv[0]);

 FUNC_3(VAR_9, VAR_12, ((void*)0),
     VAR_3, VAR_4, VAR_8,
     VAR_2);

 FUNC_2(VAR_12);
 return (VAR_1);
}
