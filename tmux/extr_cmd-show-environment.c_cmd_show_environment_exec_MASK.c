
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct environ_entry {int dummy; } ;
struct environ {int dummy; } ;
struct TYPE_4__ {TYPE_1__* s; } ;
struct cmdq_item {TYPE_2__ target; } ;
struct cmd {struct args* args; } ;
struct args {scalar_t__ argc; char const** argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;
struct TYPE_3__ {struct environ* environ; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct args*,char) ;
 scalar_t__ FUNC_1 (struct args*,char) ;
 int FUNC_2 (struct cmd*,struct cmdq_item*,struct environ_entry*) ;
 int FUNC_3 (struct cmdq_item*,char*,...) ;
 struct environ_entry* FUNC_4 (struct environ*,char const*) ;
 struct environ_entry* FUNC_5 (struct environ*) ;
 struct environ_entry* FUNC_6 (struct environ_entry*) ;
 struct environ* VAR_2 ;

__attribute__((used)) static enum cmd_retval
FUNC_7(struct cmd *VAR_3, struct cmdq_item *VAR_4)
{
 struct args *VAR_5 = VAR_3->args;
 struct environ *VAR_6;
 struct environ_entry *VAR_7;
 const char *VAR_8;

 if ((VAR_8 = FUNC_0(VAR_5, 't')) != ((void*)0)) {
  if (VAR_4->target.s == ((void*)0)) {
   FUNC_3(VAR_4, "no such session: %s", VAR_8);
   return (VAR_0);
  }
 }

 if (FUNC_1(VAR_3->args, 'g'))
  VAR_6 = VAR_2;
 else {
  if (VAR_4->target.s == ((void*)0)) {
   VAR_8 = FUNC_0(VAR_5, 't');
   if (VAR_8 != ((void*)0))
    FUNC_3(VAR_4, "no such session: %s", VAR_8);
   else
    FUNC_3(VAR_4, "no current session");
   return (VAR_0);
  }
  VAR_6 = VAR_4->target.s->environ;
 }

 if (VAR_5->argc != 0) {
  VAR_7 = FUNC_4(VAR_6, VAR_5->argv[0]);
  if (VAR_7 == ((void*)0)) {
   FUNC_3(VAR_4, "unknown variable: %s", VAR_5->argv[0]);
   return (VAR_0);
  }
  FUNC_2(VAR_3, VAR_4, VAR_7);
  return (VAR_1);
 }

 VAR_7 = FUNC_5(VAR_6);
 while (VAR_7 != ((void*)0)) {
  FUNC_2(VAR_3, VAR_4, VAR_7);
  VAR_7 = FUNC_6(VAR_7);
 }
 return (VAR_1);
}
