
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_entry {int dummy; } ;
struct options_array_item {int dummy; } ;
struct cmdq_item {int dummy; } ;
struct cmd {int args; } ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char) ;
 int FUNC_2 (struct cmdq_item*,char*,char const*,...) ;
 int FUNC_3 (char*) ;
 struct options_array_item* FUNC_4 (struct options_entry*) ;
 int FUNC_5 (struct options_array_item*) ;
 struct options_array_item* FUNC_6 (struct options_array_item*) ;
 scalar_t__ FUNC_7 (struct options_entry*) ;
 scalar_t__ FUNC_8 (struct options_entry*) ;
 char* FUNC_9 (struct options_entry*) ;
 char* FUNC_10 (struct options_entry*,int,int ) ;
 int FUNC_11 (char**,char*,char const*,int) ;

__attribute__((used)) static void
FUNC_12(struct cmd *VAR_0, struct cmdq_item *VAR_1,
    struct options_entry *VAR_2, int VAR_3, int VAR_4)
{
 struct options_array_item *VAR_5;
 const char *VAR_6 = FUNC_9(VAR_2);
 char *VAR_7, *VAR_8 = ((void*)0), *VAR_9;

 if (VAR_3 != -1) {
  FUNC_11(&VAR_8, "%s[%d]", VAR_6, VAR_3);
  VAR_6 = VAR_8;
 } else {
  if (FUNC_7(VAR_2)) {
   VAR_5 = FUNC_4(VAR_2);
   if (VAR_5 == ((void*)0)) {
    if (!FUNC_1(VAR_0->args, 'v'))
     FUNC_2(VAR_1, "%s", VAR_6);
    return;
   }
   while (VAR_5 != ((void*)0)) {
    VAR_3 = FUNC_5(VAR_5);
    FUNC_12(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4);
    VAR_5 = FUNC_6(VAR_5);
   }
   return;
  }
 }

 VAR_7 = FUNC_10(VAR_2, VAR_3, 0);
 if (FUNC_1(VAR_0->args, 'v'))
  FUNC_2(VAR_1, "%s", VAR_7);
 else if (FUNC_8(VAR_2)) {
  VAR_9 = FUNC_0(VAR_7);
  if (VAR_4)
   FUNC_2(VAR_1, "%s* %s", VAR_6, VAR_9);
  else
   FUNC_2(VAR_1, "%s %s", VAR_6, VAR_9);
  FUNC_3(VAR_9);
 } else {
  if (VAR_4)
   FUNC_2(VAR_1, "%s* %s", VAR_6, VAR_7);
  else
   FUNC_2(VAR_1, "%s %s", VAR_6, VAR_7);
 }
 FUNC_3(VAR_7);

 FUNC_3(VAR_8);
}
