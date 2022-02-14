
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options_table_entry {int type; int name; int maximum; int minimum; int * pattern; } ;
struct options_entry {int dummy; } ;
struct options {int dummy; } ;
struct cmdq_item {int dummy; } ;
struct cmd {struct args* args; } ;
struct args {int dummy; } ;
typedef long long key_code ;


 long long VAR_0 ;
 int FUNC_0 (struct args*,char) ;
 int FUNC_1 (struct cmdq_item*,struct options_table_entry const*,struct options*,char const*) ;
 int FUNC_2 (struct cmdq_item*,struct options_table_entry const*,struct options*,char const*) ;
 int FUNC_3 (struct cmdq_item*,char*,...) ;
 long long FUNC_4 (char const*) ;
 int FUNC_5 (int *,char const*,int ) ;
 int FUNC_6 (char*) ;
 long long FUNC_7 (char const*) ;
 char* FUNC_8 (struct options*,int ) ;
 int FUNC_9 (struct options*,int ,long long) ;
 int FUNC_10 (struct options*,int ,int,char*,char const*) ;
 struct options_entry* FUNC_11 (struct options*,int ,int,char const*) ;
 struct options_table_entry* FUNC_12 (struct options_entry*) ;
 long long FUNC_13 (char const*,int ,int ,char const**) ;
 char* FUNC_14 (char*) ;

__attribute__((used)) static int
FUNC_15(struct cmd *VAR_1, struct cmdq_item *VAR_2, struct options *VAR_3,
    struct options_entry *VAR_4, const char *VAR_5)
{
 const struct options_table_entry *VAR_6;
 struct args *VAR_7 = VAR_1->args;
 int VAR_8 = FUNC_0(VAR_7, 'a');
 struct options_entry *VAR_9;
 long long VAR_10;
 const char *VAR_11, *VAR_12;
 char *VAR_13;
 key_code VAR_14;

 VAR_6 = FUNC_12(VAR_4);
 if (VAR_5 == ((void*)0) &&
     VAR_6->type != 132 &&
     VAR_6->type != 135) {
  FUNC_3(VAR_2, "empty value");
  return (-1);
 }

 switch (VAR_6->type) {
 case 129:
  VAR_13 = FUNC_14(FUNC_8(VAR_3, VAR_6->name));
  FUNC_10(VAR_3, VAR_6->name, VAR_8, "%s", VAR_5);
  VAR_12 = FUNC_8(VAR_3, VAR_6->name);
  if (VAR_6->pattern != ((void*)0) && FUNC_5(VAR_6->pattern, VAR_12, 0) != 0) {
   FUNC_10(VAR_3, VAR_6->name, 0, "%s", VAR_13);
   FUNC_6(VAR_13);
   FUNC_3(VAR_2, "value is invalid: %s", VAR_5);
   return (-1);
  }
  FUNC_6(VAR_13);
  return (0);
 case 130:
  VAR_10 = FUNC_13(VAR_5, VAR_6->minimum, VAR_6->maximum, &VAR_11);
  if (VAR_11 != ((void*)0)) {
   FUNC_3(VAR_2, "value is %s: %s", VAR_11, VAR_5);
   return (-1);
  }
  FUNC_9(VAR_3, VAR_6->name, VAR_10);
  return (0);
 case 131:
  VAR_14 = FUNC_7(VAR_5);
  if (VAR_14 == VAR_0) {
   FUNC_3(VAR_2, "bad key: %s", VAR_5);
   return (-1);
  }
  FUNC_9(VAR_3, VAR_6->name, VAR_14);
  return (0);
 case 134:
  if ((VAR_10 = FUNC_4(VAR_5)) == -1) {
   FUNC_3(VAR_2, "bad colour: %s", VAR_5);
   return (-1);
  }
  FUNC_9(VAR_3, VAR_6->name, VAR_10);
  return (0);
 case 132:
  return (FUNC_2(VAR_2, VAR_6, VAR_3, VAR_5));
 case 135:
  return (FUNC_1(VAR_2, VAR_6, VAR_3, VAR_5));
 case 128:
  VAR_9 = FUNC_11(VAR_3, VAR_6->name, VAR_8, VAR_5);
  if (VAR_9 == ((void*)0)) {
   FUNC_3(VAR_2, "bad style: %s", VAR_5);
   return (-1);
  }
  return (0);
 case 133:
  break;
 }
 return (-1);
}
