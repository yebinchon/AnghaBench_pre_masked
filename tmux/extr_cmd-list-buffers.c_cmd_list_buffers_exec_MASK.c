
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct paste_buffer {int dummy; } ;
struct format_tree {int dummy; } ;
struct cmdq_item {int client; } ;
struct cmd {struct args* args; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 (struct args*,float) ;
 int FUNC_1 (struct cmdq_item*,char*,char*) ;
 struct format_tree* FUNC_2 (int ,struct cmdq_item*,int ,int ) ;
 int FUNC_3 (struct format_tree*,struct paste_buffer*) ;
 char* FUNC_4 (struct format_tree*,char const*) ;
 int FUNC_5 (struct format_tree*) ;
 int FUNC_6 (char*) ;
 struct paste_buffer* FUNC_7 (struct paste_buffer*) ;

__attribute__((used)) static enum cmd_retval
FUNC_8(struct cmd *VAR_3, struct cmdq_item *VAR_4)
{
 struct args *VAR_5 = VAR_3->args;
 struct paste_buffer *VAR_6;
 struct format_tree *VAR_7;
 char *VAR_8;
 const char *VAR_9;

 if ((VAR_9 = FUNC_0(VAR_5, 'F')) == ((void*)0))
  VAR_9 = VAR_2;

 VAR_6 = ((void*)0);
 while ((VAR_6 = FUNC_7(VAR_6)) != ((void*)0)) {
  VAR_7 = FUNC_2(VAR_4->client, VAR_4, VAR_1, 0);
  FUNC_3(VAR_7, VAR_6);

  VAR_8 = FUNC_4(VAR_7, VAR_9);
  FUNC_1(VAR_4, "%s", VAR_8);
  FUNC_6(VAR_8);

  FUNC_5(VAR_7);
 }

 return (VAR_0);
}
