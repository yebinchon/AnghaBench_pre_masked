
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int dummy; } ;
struct command {int dummy; } ;
struct arg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct in_ev*) ;
 int FUNC_3 (struct in_ev*) ;
 int FUNC_4 (struct in_ev*,char*,char*) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,int) ;

void FUNC_6 (struct command *VAR_2, int VAR_3, struct arg VAR_4[], struct in_ev *VAR_5) {
  FUNC_0 (!VAR_3);
  static char VAR_6[1 << 15];
  FUNC_5 (VAR_0, VAR_6, (1 << 15) - 1);
  if (VAR_5) { FUNC_3 (VAR_5); }
  FUNC_4 (VAR_5, "%s\n", VAR_6);
  if (VAR_5) { FUNC_2 (VAR_5); }
  if (!VAR_5) {
    FUNC_1 (VAR_1);
  }
}
