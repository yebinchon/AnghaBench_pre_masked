
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {int dummy; } ;
struct cmd {struct args* args; } ;
struct args {int argc; char const** argv; } ;
typedef scalar_t__ key_code ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (struct args*,char) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 int FUNC_2 (struct cmdq_item*,char*,...) ;
 int * FUNC_3 (char const*,int ) ;
 int FUNC_4 (char const*,scalar_t__) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static enum cmd_retval
FUNC_7(struct cmd *VAR_4, struct cmdq_item *VAR_5)
{
 struct args *VAR_6 = VAR_4->args;
 key_code VAR_7;
 const char *VAR_8;

 if (!FUNC_1(VAR_6, 'a')) {
  if (VAR_6->argc != 1) {
   FUNC_2(VAR_5, "missing key");
   return (VAR_0);
  }
  VAR_7 = FUNC_6(VAR_6->argv[0]);
  if (VAR_7 == VAR_2 || VAR_7 == VAR_3) {
   FUNC_2(VAR_5, "unknown key: %s", VAR_6->argv[0]);
   return (VAR_0);
  }
 } else {
  if (VAR_6->argc != 0) {
   FUNC_2(VAR_5, "key given with -a");
   return (VAR_0);
  }
  VAR_7 = VAR_3;
 }

 if (VAR_7 == VAR_3) {
  VAR_8 = FUNC_0(VAR_6, 'T');
  if (VAR_8 == ((void*)0)) {
   FUNC_5("root");
   FUNC_5("prefix");
   return (VAR_1);
  }
  if (FUNC_3(VAR_8, 0) == ((void*)0)) {
   FUNC_2(VAR_5, "table %s doesn't exist", VAR_8);
   return (VAR_0);
  }
  FUNC_5(VAR_8);
  return (VAR_1);
 }

 if (FUNC_1(VAR_6, 'T')) {
  VAR_8 = FUNC_0(VAR_6, 'T');
  if (FUNC_3(VAR_8, 0) == ((void*)0)) {
   FUNC_2(VAR_5, "table %s doesn't exist", VAR_8);
   return (VAR_0);
  }
 } else if (FUNC_1(VAR_6, 'n'))
  VAR_8 = "root";
 else
  VAR_8 = "prefix";
 FUNC_4(VAR_8, VAR_7);
 return (VAR_1);
}
