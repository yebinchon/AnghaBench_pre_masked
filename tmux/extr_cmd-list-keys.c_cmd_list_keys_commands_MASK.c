
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_tree {int dummy; } ;
struct cmdq_item {int client; } ;
struct cmd_entry {char const* name; char* alias; char* usage; } ;
struct cmd {struct args* args; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct args*,float) ;
 struct cmd_entry** VAR_2 ;
 int FUNC_1 (struct cmdq_item*,char*,char*) ;
 int FUNC_2 (struct format_tree*,char*,char*,char const*) ;
 struct format_tree* FUNC_3 (int ,struct cmdq_item*,int ,int ) ;
 int FUNC_4 (struct format_tree*,int *,int *,int *,int *) ;
 char* FUNC_5 (struct format_tree*,char const*) ;
 int FUNC_6 (struct format_tree*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static enum cmd_retval
FUNC_8(struct cmd *VAR_3, struct cmdq_item *VAR_4)
{
 struct args *VAR_5 = VAR_3->args;
 const struct cmd_entry **VAR_6;
 const struct cmd_entry *VAR_7;
 struct format_tree *VAR_8;
 const char *VAR_9, *VAR_10;
 char *VAR_11;

 if ((VAR_9 = FUNC_0(VAR_5, 'F')) == ((void*)0)) {
  VAR_9 = "#{command_list_name}"
      "#{?command_list_alias, (#{command_list_alias}),} "
      "#{command_list_usage}";
 }

 VAR_8 = FUNC_3(VAR_4->client, VAR_4, VAR_1, 0);
 FUNC_4(VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

 for (VAR_6 = VAR_2; *VAR_6 != ((void*)0); VAR_6++) {
  VAR_7 = *VAR_6;

  FUNC_2(VAR_8, "command_list_name", "%s", VAR_7->name);
  if (VAR_7->alias != ((void*)0))
   VAR_10 = VAR_7->alias;
  else
   VAR_10 = "";
  FUNC_2(VAR_8, "command_list_alias", "%s", VAR_10);
  if (VAR_7->usage != ((void*)0))
   VAR_10 = VAR_7->usage;
  else
   VAR_10 = "";
  FUNC_2(VAR_8, "command_list_usage", "%s", VAR_10);

  VAR_11 = FUNC_5(VAR_8, VAR_9);
  if (*VAR_11 != '\0')
   FUNC_1(VAR_4, "%s", VAR_11);
  FUNC_7(VAR_11);
 }

 FUNC_6(VAR_8);
 return (VAR_0);
}
