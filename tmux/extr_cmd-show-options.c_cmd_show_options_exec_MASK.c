
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winlink {int dummy; } ;
struct session {int dummy; } ;
struct options_entry {int dummy; } ;
struct options {int dummy; } ;
struct cmd_find_state {struct winlink* wl; struct session* s; } ;
struct cmdq_item {struct cmd_find_state target; } ;
struct cmd {int * entry; struct args* args; } ;
struct client {int dummy; } ;
struct args {scalar_t__ argc; int * argv; } ;
typedef enum cmd_retval { ____Placeholder_cmd_retval } cmd_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct args*,char) ;
 struct client* FUNC_1 (struct cmdq_item*,int *,int) ;
 int FUNC_2 (struct cmd*,struct cmdq_item*,int,struct options*) ;
 int FUNC_3 (struct cmd*,struct cmdq_item*,struct options_entry*,int,int) ;
 int VAR_3 ;
 int FUNC_4 (struct cmdq_item*,char*,char*) ;
 char* FUNC_5 (struct cmdq_item*,int ,struct client*,struct session*,struct winlink*,int *) ;
 int FUNC_6 (char*) ;
 struct options_entry* FUNC_7 (struct options*,char*) ;
 struct options_entry* FUNC_8 (struct options*,char*) ;
 char* FUNC_9 (char*,int*,int*) ;
 int FUNC_10 (struct args*,int,struct cmd_find_state*,struct options**,char**) ;
 int FUNC_11 (struct args*,int,char*,struct cmd_find_state*,struct options**,char**) ;

__attribute__((used)) static enum cmd_retval
FUNC_12(struct cmd *VAR_4, struct cmdq_item *VAR_5)
{
 struct args *VAR_6 = VAR_4->args;
 struct cmd_find_state *VAR_7 = &VAR_5->target;
 struct client *VAR_8 = FUNC_1(VAR_5, ((void*)0), 1);
 struct session *VAR_9 = VAR_5->target.s;
 struct winlink *VAR_10 = VAR_5->target.wl;
 struct options *VAR_11;
 char *VAR_12, *VAR_13 = ((void*)0), *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 struct options_entry *VAR_20;

 VAR_15 = (VAR_4->entry == &VAR_3);

 if (VAR_6->argc == 0) {
  VAR_19 = FUNC_10(VAR_6, VAR_15, VAR_7, &VAR_11, &VAR_14);
  if (VAR_19 == VAR_2) {
   if (FUNC_0(VAR_6, 'q'))
    return (VAR_1);
   FUNC_4(VAR_5, "%s", VAR_14);
   FUNC_6(VAR_14);
   return (VAR_0);
  }
  return (FUNC_2(VAR_4, VAR_5, VAR_19, VAR_11));
 }
 VAR_12 = FUNC_5(VAR_5, VAR_6->argv[0], VAR_8, VAR_9, VAR_10, ((void*)0));

 VAR_13 = FUNC_9(VAR_12, &VAR_16, &VAR_17);
 if (VAR_13 == ((void*)0)) {
  if (FUNC_0(VAR_6, 'q'))
   goto fail;
  if (VAR_17)
   FUNC_4(VAR_5, "ambiguous option: %s", VAR_12);
  else
   FUNC_4(VAR_5, "invalid option: %s", VAR_12);
  goto fail;
 }
 VAR_19 = FUNC_11(VAR_6, VAR_15, VAR_13, VAR_7, &VAR_11, &VAR_14);
 if (VAR_19 == VAR_2) {
  if (FUNC_0(VAR_6, 'q'))
   goto fail;
  FUNC_4(VAR_5, "%s", VAR_14);
  FUNC_6(VAR_14);
  goto fail;
 }
 VAR_20 = FUNC_8(VAR_11, VAR_13);
 if (FUNC_0(VAR_6, 'A') && VAR_20 == ((void*)0)) {
  VAR_20 = FUNC_7(VAR_11, VAR_13);
  VAR_18 = 1;
 } else
  VAR_18 = 0;
 if (VAR_20 != ((void*)0))
  FUNC_3(VAR_4, VAR_5, VAR_20, VAR_16, VAR_18);

 FUNC_6(VAR_13);
 FUNC_6(VAR_12);
 return (VAR_1);

fail:
 FUNC_6(VAR_13);
 FUNC_6(VAR_12);
 return (VAR_0);
}
