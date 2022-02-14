
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct options_table_entry {int scope; int flags; int * name; } ;
struct options_entry {int dummy; } ;
struct options_array_item {int dummy; } ;
struct options {int dummy; } ;
struct cmdq_item {int dummy; } ;
struct cmd {int args; int * entry; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char) ;
 int VAR_2 ;
 int FUNC_1 (struct cmd*,struct cmdq_item*,struct options_entry*,int,int) ;
 int FUNC_2 (struct cmdq_item*,char*,char const*) ;
 struct options_array_item* FUNC_3 (struct options_entry*) ;
 int FUNC_4 (struct options_array_item*) ;
 struct options_array_item* FUNC_5 (struct options_array_item*) ;
 struct options_entry* FUNC_6 (struct options*) ;
 struct options_entry* FUNC_7 (struct options*,int *) ;
 struct options_entry* FUNC_8 (struct options*,int *) ;
 int FUNC_9 (struct options_entry*) ;
 char* FUNC_10 (struct options_entry*) ;
 struct options_entry* FUNC_11 (struct options_entry*) ;
 struct options_table_entry* VAR_3 ;
 int * FUNC_12 (struct options_entry*) ;

__attribute__((used)) static enum cmd_retval
FUNC_13(struct cmd *VAR_4, struct cmdq_item *VAR_5, int VAR_6,
    struct options *VAR_7)
{
 const struct options_table_entry *VAR_8;
 struct options_entry *VAR_9;
 struct options_array_item *VAR_10;
 const char *VAR_11;
 u_int VAR_12;
 int VAR_13;

 VAR_9 = FUNC_6(VAR_7);
 while (VAR_9 != ((void*)0)) {
  if (FUNC_12(VAR_9) == ((void*)0))
   FUNC_1(VAR_4, VAR_5, VAR_9, -1, 0);
  VAR_9 = FUNC_11(VAR_9);
 }
 for (VAR_8 = VAR_3; VAR_8->name != ((void*)0); VAR_8++) {
  if (~VAR_8->scope & VAR_6)
   continue;

  if ((VAR_4->entry != &VAR_2 &&
      !FUNC_0(VAR_4->args, 'H') &&
      VAR_8 != ((void*)0) &&
      (VAR_8->flags & VAR_1)) ||
      (VAR_4->entry == &VAR_2 &&
      (VAR_8 == ((void*)0) ||
      (~VAR_8->flags & VAR_1))))
   continue;

  VAR_9 = FUNC_8(VAR_7, VAR_8->name);
  if (VAR_9 == ((void*)0)) {
   if (!FUNC_0(VAR_4->args, 'A'))
    continue;
   VAR_9 = FUNC_7(VAR_7, VAR_8->name);
   if (VAR_9 == ((void*)0))
    continue;
   VAR_13 = 1;
  } else
   VAR_13 = 0;

  if (!FUNC_9(VAR_9))
   FUNC_1(VAR_4, VAR_5, VAR_9, -1, VAR_13);
  else if ((VAR_10 = FUNC_3(VAR_9)) == ((void*)0)) {
   if (!FUNC_0(VAR_4->args, 'v')) {
    VAR_11 = FUNC_10(VAR_9);
    if (VAR_13)
     FUNC_2(VAR_5, "%s*", VAR_11);
    else
     FUNC_2(VAR_5, "%s", VAR_11);
   }
  } else {
   while (VAR_10 != ((void*)0)) {
    VAR_12 = FUNC_4(VAR_10);
    FUNC_1(VAR_4, VAR_5, VAR_9, VAR_12,
        VAR_13);
    VAR_10 = FUNC_5(VAR_10);
   }
  }
 }
 return (VAR_0);
}
