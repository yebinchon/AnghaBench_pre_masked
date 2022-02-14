
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct job {int dummy; } ;
struct cmd_run_shell_data {char* cmd; int * item; } ;
struct bufferevent {int input; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct job*,char*) ;
 int FUNC_7 (int *) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 struct cmd_run_shell_data* FUNC_10 (struct job*) ;
 struct bufferevent* FUNC_11 (struct job*) ;
 int FUNC_12 (struct job*) ;
 int FUNC_13 (char*,int ,size_t) ;
 int FUNC_14 (char**,char*,char*,int) ;
 char* FUNC_15 (size_t) ;

__attribute__((used)) static void
FUNC_16(struct job *VAR_0)
{
 struct cmd_run_shell_data *VAR_1 = FUNC_10(VAR_0);
 struct bufferevent *VAR_2 = FUNC_11(VAR_0);
 char *VAR_3 = VAR_1->cmd, *VAR_4 = ((void*)0), *VAR_5;
 size_t VAR_6;
 int VAR_7, VAR_8;

 do {
  if ((VAR_5 = FUNC_8(VAR_2->input)) != ((void*)0)) {
   FUNC_6(VAR_0, VAR_5);
   FUNC_9(VAR_5);
  }
 } while (VAR_5 != ((void*)0));

 VAR_6 = FUNC_1(VAR_2->input);
 if (VAR_6 != 0) {
  VAR_5 = FUNC_15(VAR_6 + 1);
  FUNC_13(VAR_5, FUNC_0(VAR_2->input), VAR_6);
  VAR_5[VAR_6] = '\0';

  FUNC_6(VAR_0, VAR_5);

  FUNC_9(VAR_5);
 }

 VAR_8 = FUNC_12(VAR_0);
 if (FUNC_3(VAR_8)) {
  if ((VAR_7 = FUNC_2(VAR_8)) != 0)
   FUNC_14(&VAR_4, "'%s' returned %d", VAR_3, VAR_7);
 } else if (FUNC_4(VAR_8)) {
  VAR_7 = FUNC_5(VAR_8);
  FUNC_14(&VAR_4, "'%s' terminated by signal %d", VAR_3, VAR_7);
 }
 if (VAR_4 != ((void*)0))
  FUNC_6(VAR_0, VAR_4);
 FUNC_9(VAR_4);

 if (VAR_1->item != ((void*)0))
  FUNC_7(VAR_1->item);
}
