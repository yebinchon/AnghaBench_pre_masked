
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct environ {int dummy; } ;
struct TYPE_4__ {TYPE_1__* s; } ;
struct cmdq_item {TYPE_2__ target; } ;
struct cmd {struct args* args; } ;
struct args {char** argv; int argc; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_3__ {struct environ* environ; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct args*,char) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 int FUNC_2 (struct cmdq_item*,char*,...) ;
 int FUNC_3 (struct environ*,char const*) ;
 int FUNC_4 (struct environ*,char const*,char*,char const*) ;
 int FUNC_5 (struct environ*,char const*) ;
 struct environ* VAR_2 ;
 int * FUNC_6 (char const*,char) ;

__attribute__((used)) static enum cmd_retval
FUNC_7(struct cmd *VAR_3, struct cmdq_item *VAR_4)
{
 struct args *VAR_5 = VAR_3->args;
 struct environ *VAR_6;
 const char *VAR_7, *VAR_8, *VAR_9;

 VAR_7 = VAR_5->argv[0];
 if (*VAR_7 == '\0') {
  FUNC_2(VAR_4, "empty variable name");
  return (VAR_0);
 }
 if (FUNC_6(VAR_7, '=') != ((void*)0)) {
  FUNC_2(VAR_4, "variable name contains =");
  return (VAR_0);
 }

 if (VAR_5->argc < 2)
  VAR_8 = ((void*)0);
 else
  VAR_8 = VAR_5->argv[1];

 if (FUNC_1(VAR_3->args, 'g'))
  VAR_6 = VAR_2;
 else {
  if (VAR_4->target.s == ((void*)0)) {
   VAR_9 = FUNC_0(VAR_5, 't');
   if (VAR_9 != ((void*)0))
    FUNC_2(VAR_4, "no such session: %s", VAR_9);
   else
    FUNC_2(VAR_4, "no current session");
   return (VAR_0);
  }
  VAR_6 = VAR_4->target.s->environ;
 }

 if (FUNC_1(VAR_3->args, 'u')) {
  if (VAR_8 != ((void*)0)) {
   FUNC_2(VAR_4, "can't specify a value with -u");
   return (VAR_0);
  }
  FUNC_5(VAR_6, VAR_7);
 } else if (FUNC_1(VAR_3->args, 'r')) {
  if (VAR_8 != ((void*)0)) {
   FUNC_2(VAR_4, "can't specify a value with -r");
   return (VAR_0);
  }
  FUNC_3(VAR_6, VAR_7);
 } else {
  if (VAR_8 == ((void*)0)) {
   FUNC_2(VAR_4, "no value specified");
   return (VAR_0);
  }
  FUNC_4(VAR_6, VAR_7, "%s", VAR_8);
 }

 return (VAR_1);
}
