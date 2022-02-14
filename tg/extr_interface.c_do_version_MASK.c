
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int dummy; } ;
struct command {int dummy; } ;
struct arg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct in_ev*) ;
 int FUNC_3 (struct in_ev*) ;
 int FUNC_4 (struct in_ev*) ;
 int FUNC_5 (struct in_ev*,char*,...) ;
 int FUNC_6 (struct in_ev*,int ) ;
 int VAR_3 ;

void FUNC_7 (struct command *VAR_4, int VAR_5, struct arg VAR_6[], struct in_ev *VAR_7) {
  FUNC_0 (!VAR_5);
  if (VAR_7) { FUNC_4 (VAR_7); }
  FUNC_6 (VAR_7, VAR_0);
  FUNC_5 (VAR_7, "Telegram-cli version %s (uses tgl version %s)\n", VAR_1, VAR_2);



    FUNC_5 (VAR_7, "uses libopenssl for encryption\n");

  FUNC_2 (VAR_7);
  if (VAR_7) { FUNC_3 (VAR_7); }
  if (!VAR_7) {
    FUNC_1 (VAR_3);
  }

}
