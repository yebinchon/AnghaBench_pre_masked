
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wait_channel {char const* name; } ;
struct cmdq_item {int dummy; } ;
struct cmd {struct args* args; } ;
struct args {char** argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 struct wait_channel* FUNC_0 (int ,int *,struct wait_channel*) ;
 scalar_t__ FUNC_1 (struct args*,unsigned char) ;
 int FUNC_2 (struct cmdq_item*,char const*,struct wait_channel*) ;
 int FUNC_3 (struct cmdq_item*,char const*,struct wait_channel*) ;
 int FUNC_4 (struct cmdq_item*,char const*,struct wait_channel*) ;
 int FUNC_5 (struct cmdq_item*,char const*,struct wait_channel*) ;
 int VAR_0 ;

__attribute__((used)) static enum cmd_retval
FUNC_6(struct cmd *VAR_1, struct cmdq_item *VAR_2)
{
 struct args *VAR_3 = VAR_1->args;
 const char *VAR_4 = VAR_3->argv[0];
 struct wait_channel *VAR_5, VAR_6;

 VAR_6 = VAR_4;
 VAR_5 = FUNC_0(VAR_0, &VAR_0, &VAR_6);

 if (FUNC_1(VAR_3, 'S'))
  return (FUNC_3(VAR_2, VAR_4, VAR_5));
 if (FUNC_1(VAR_3, 'L'))
  return (FUNC_2(VAR_2, VAR_4, VAR_5));
 if (FUNC_1(VAR_3, 'U'))
  return (FUNC_4(VAR_2, VAR_4, VAR_5));
 return (FUNC_5(VAR_2, VAR_4, VAR_5));
}
