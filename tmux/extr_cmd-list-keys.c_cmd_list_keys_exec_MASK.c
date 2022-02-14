
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_table {char* name; } ;
struct key_binding {int flags; int cmdlist; int key; } ;
struct cmdq_item {int dummy; } ;
struct cmd {int * entry; struct args* args; } ;
struct args {int dummy; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 char* FUNC_1 (struct args*,char) ;
 int VAR_3 ;
 int FUNC_2 (struct cmd*,struct cmdq_item*) ;
 char* FUNC_3 (int ,int) ;
 int FUNC_4 (struct cmdq_item*,char*,char const*) ;
 int FUNC_5 (struct cmdq_item*,char*,char*) ;
 int FUNC_6 (char*) ;
 struct key_binding* FUNC_7 (struct key_table*) ;
 struct key_table* FUNC_8 () ;
 int * FUNC_9 (char const*,int ) ;
 struct key_binding* FUNC_10 (struct key_table*,struct key_binding*) ;
 struct key_table* FUNC_11 (struct key_table*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (char*,char const*) ;
 size_t FUNC_14 (char*,char*,size_t) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 char* FUNC_17 (char*,int) ;
 char* FUNC_18 (size_t) ;
 char* FUNC_19 (char*,size_t) ;
 size_t FUNC_20 (char*,size_t,char*,char const*) ;

__attribute__((used)) static enum cmd_retval
FUNC_21(struct cmd *VAR_4, struct cmdq_item *VAR_5)
{
 struct args *VAR_6 = VAR_4->args;
 struct key_table *VAR_7;
 struct key_binding *VAR_8;
 const char *VAR_9, *VAR_10;
 char *VAR_11, *VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 size_t VAR_18, VAR_19, VAR_20;

 if (VAR_4->entry == &VAR_3)
  return (FUNC_2(VAR_4, VAR_5));

 VAR_9 = FUNC_1(VAR_6, 'T');
 if (VAR_9 != ((void*)0) && FUNC_9(VAR_9, 0) == ((void*)0)) {
  FUNC_4(VAR_5, "table %s doesn't exist", VAR_9);
  return (VAR_0);
 }

 VAR_14 = 0;
 VAR_16 = VAR_17 = 0;
 VAR_7 = FUNC_8 ();
 while (VAR_7 != ((void*)0)) {
  if (VAR_9 != ((void*)0) && FUNC_13(VAR_7->name, VAR_9) != 0) {
   VAR_7 = FUNC_11(VAR_7);
   continue;
  }
  VAR_8 = FUNC_7(VAR_7);
  while (VAR_8 != ((void*)0)) {
   VAR_11 = FUNC_0(FUNC_12(VAR_8->key));

   if (VAR_8->flags & VAR_2)
    VAR_14 = 1;

   VAR_15 = FUNC_16(VAR_7->name);
   if (VAR_15 > VAR_16)
    VAR_16 = VAR_15;
   VAR_15 = FUNC_16(VAR_11);
   if (VAR_15 > VAR_17)
    VAR_17 = VAR_15;

   FUNC_6(VAR_11);
   VAR_8 = FUNC_10(VAR_7, VAR_8);
  }
  VAR_7 = FUNC_11(VAR_7);
 }

 VAR_18 = 256;
 VAR_13 = FUNC_18(VAR_18);

 VAR_7 = FUNC_8 ();
 while (VAR_7 != ((void*)0)) {
  if (VAR_9 != ((void*)0) && FUNC_13(VAR_7->name, VAR_9) != 0) {
   VAR_7 = FUNC_11(VAR_7);
   continue;
  }
  VAR_8 = FUNC_7(VAR_7);
  while (VAR_8 != ((void*)0)) {
   VAR_11 = FUNC_0(FUNC_12(VAR_8->key));

   if (!VAR_14)
    VAR_10 = "";
   else if (VAR_8->flags & VAR_2)
    VAR_10 = "-r ";
   else
    VAR_10 = "   ";
   VAR_19 = FUNC_20(VAR_13, VAR_18, "%s-T ", VAR_10);

   VAR_12 = FUNC_17(VAR_7->name, VAR_16);
   VAR_20 = FUNC_15(VAR_12) + 1;
   while (VAR_19 + VAR_20 + 1 >= VAR_18) {
    VAR_18 *= 2;
    VAR_13 = FUNC_19(VAR_13, VAR_18);
   }
   VAR_19 = FUNC_14(VAR_13, VAR_12, VAR_18);
   VAR_19 = FUNC_14(VAR_13, " ", VAR_18);
   FUNC_6(VAR_12);

   VAR_12 = FUNC_17(VAR_11, VAR_17);
   VAR_20 = FUNC_15(VAR_12) + 1;
   while (VAR_19 + VAR_20 + 1 >= VAR_18) {
    VAR_18 *= 2;
    VAR_13 = FUNC_19(VAR_13, VAR_18);
   }
   VAR_19 = FUNC_14(VAR_13, VAR_12, VAR_18);
   VAR_19 = FUNC_14(VAR_13, " ", VAR_18);
   FUNC_6(VAR_12);

   VAR_12 = FUNC_3(VAR_8->cmdlist, 1);
   VAR_20 = FUNC_15(VAR_12);
   while (VAR_19 + VAR_20 + 1 >= VAR_18) {
    VAR_18 *= 2;
    VAR_13 = FUNC_19(VAR_13, VAR_18);
   }
   FUNC_14(VAR_13, VAR_12, VAR_18);
   FUNC_6(VAR_12);

   FUNC_5(VAR_5, "bind-key %s", VAR_13);

   FUNC_6(VAR_11);
   VAR_8 = FUNC_10(VAR_7, VAR_8);
  }
  VAR_7 = FUNC_11(VAR_7);
 }

 FUNC_6(VAR_13);

 return (VAR_1);
}
