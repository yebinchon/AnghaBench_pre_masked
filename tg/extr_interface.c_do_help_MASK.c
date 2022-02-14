
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int dummy; } ;
struct command {int desc; scalar_t__ name; } ;
struct arg {int str; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct command* VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct in_ev*) ;
 int FUNC_3 (struct in_ev*) ;
 int FUNC_4 (struct in_ev*) ;
 int FUNC_5 (struct in_ev*,char*,int ) ;
 int FUNC_6 (struct in_ev*,int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,scalar_t__) ;

void FUNC_8 (struct command *VAR_3, int VAR_4, struct arg VAR_5[], struct in_ev *VAR_6) {
  FUNC_0 (VAR_4 == 1);
  if (VAR_6) { FUNC_4 (VAR_6); }
  int VAR_7 = 0;
  FUNC_6 (VAR_6, VAR_0);
  struct command *VAR_8 = VAR_1;
  while (VAR_8->name) {
    if (!VAR_5[0].str || !FUNC_7 (VAR_5[0].str, VAR_8->name)) {
      FUNC_5 (VAR_6, "%s\n", VAR_8->desc);
      VAR_7 ++;
    }
    VAR_8 ++;
  }
  if (!VAR_7) {
    FUNC_0 (VAR_4 == 1);
    FUNC_5 (VAR_6, "Unknown command '%s'\n", VAR_5[0].str);
  }
  FUNC_2 (VAR_6);
  if (VAR_6) { FUNC_3 (VAR_6); }
  if (!VAR_6) {
    FUNC_1 (VAR_2);
  }
}
