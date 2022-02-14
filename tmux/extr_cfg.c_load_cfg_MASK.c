
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_item {int dummy; } ;
struct cmd_parse_result {scalar_t__ status; int cmdlist; int error; } ;
struct cmd_parse_input {int flags; char const* file; int line; struct client* c; struct cmdq_item* item; } ;
struct client {int dummy; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (int ) ;
 struct cmd_parse_result* FUNC_2 (int *,struct cmd_parse_input*) ;
 int FUNC_3 (int *,struct cmdq_item*) ;
 struct cmdq_item* FUNC_4 (int ,int *,int *,int ) ;
 int FUNC_5 (struct cmdq_item*,struct cmdq_item*) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (struct cmd_parse_input*,int ,int) ;
 int FUNC_11 (scalar_t__) ;

int
FUNC_12(const char *VAR_6, struct client *VAR_7, struct cmdq_item *VAR_8, int VAR_9,
    struct cmdq_item **VAR_10)
{
 FILE *VAR_11;
 struct cmd_parse_input VAR_12;
 struct cmd_parse_result *VAR_13;
 struct cmdq_item *VAR_14;

 if (VAR_10 != ((void*)0))
  *VAR_10 = ((void*)0);

 FUNC_9("loading %s", VAR_6);
 if ((VAR_11 = FUNC_7(VAR_6, "rb")) == ((void*)0)) {
  if (VAR_5 == VAR_4 && (VAR_9 & VAR_3))
   return (0);
  FUNC_0("%s: %s", VAR_6, FUNC_11(VAR_5));
  return (-1);
 }

 FUNC_10(&VAR_12, 0, sizeof VAR_12);
 VAR_12.flags = VAR_9;
 VAR_12.file = VAR_6;
 VAR_12.line = 1;
 VAR_12.item = VAR_8;
 VAR_12.c = VAR_7;

 VAR_13 = FUNC_2(VAR_11, &VAR_12);
 FUNC_6(VAR_11);
 if (VAR_13->status == VAR_0)
  return (0);
 if (VAR_13->status == VAR_1) {
  FUNC_0("%s", VAR_13->error);
  FUNC_8(VAR_13->error);
  return (-1);
 }
 if (VAR_9 & VAR_2) {
  FUNC_1(VAR_13->cmdlist);
  return (0);
 }

 VAR_14 = FUNC_4(VAR_13->cmdlist, ((void*)0), ((void*)0), 0);
 if (VAR_8 != ((void*)0))
  FUNC_5(VAR_8, VAR_14);
 else
  FUNC_3(((void*)0), VAR_14);
 FUNC_1(VAR_13->cmdlist);

 if (VAR_10 != ((void*)0))
  *VAR_10 = VAR_14;
 return (0);
}
