
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct environ_entry {int name; int * value; } ;
struct cmdq_item {int dummy; } ;
struct cmd {int args; } ;


 int FUNC_0 (int ,char) ;
 char* FUNC_1 (struct environ_entry*) ;
 int FUNC_2 (struct cmdq_item*,char*,int ,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct cmd *VAR_0, struct cmdq_item *VAR_1,
    struct environ_entry *VAR_2)
{
 char *VAR_3;

 if (!FUNC_0(VAR_0->args, 's')) {
  if (VAR_2->value != ((void*)0))
   FUNC_2(VAR_1, "%s=%s", VAR_2->name, VAR_2->value);
  else
   FUNC_2(VAR_1, "-%s", VAR_2->name);
  return;
 }

 if (VAR_2->value != ((void*)0)) {
  VAR_3 = FUNC_1(VAR_2);
  FUNC_2(VAR_1, "%s=\"%s\"; export %s;", VAR_2->name, VAR_3,
      VAR_2->name);
  FUNC_3(VAR_3);
 } else
  FUNC_2(VAR_1, "unset %s;", VAR_2->name);
}
