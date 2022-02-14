
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int dummy; } ;
struct command {int dummy; } ;
struct arg {int peer_id; } ;
typedef int buf ;






 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (struct in_ev*) ;
 int FUNC_3 (struct in_ev*) ;
 int FUNC_4 (struct in_ev*) ;
 int FUNC_5 (struct in_ev*,char*) ;
 int FUNC_6 (struct in_ev*,char*) ;
 int FUNC_7 (int ,int ,unsigned char*) ;

void FUNC_8 (struct command *VAR_3, int VAR_4, struct arg VAR_5[], struct in_ev *VAR_6) {
  FUNC_0 (VAR_4 == 1);
  static char *VAR_7[4] = {128, 130, 131, 129};
  static unsigned char VAR_8[16];
  FUNC_1 (VAR_8, 0, sizeof (VAR_8));
  FUNC_7 (VAR_1, VAR_5[0].peer_id, VAR_8);
  FUNC_4 (VAR_6);
  int VAR_9;
  for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
    int VAR_10 = VAR_8[VAR_9];
    int VAR_11;
    for (VAR_11 = 0; VAR_11 < 4; VAR_11 ++) {
      if (!VAR_6) {
        FUNC_6 (VAR_6, VAR_7[VAR_10 & 3]);
        FUNC_6 (VAR_6, VAR_0);
      }
      if (!VAR_2 && !VAR_6) {
        FUNC_5 (VAR_6, "  ");
      } else {
        switch (VAR_10 & 3) {
        case 0:
          FUNC_5 (VAR_6, "  ");
          break;
        case 1:
          FUNC_5 (VAR_6, "--");
          break;
        case 2:
          FUNC_5 (VAR_6, "==");
          break;
        case 3:
          FUNC_5 (VAR_6, "||");
          break;
        }
      }
      if (!VAR_6) {
        FUNC_2 (VAR_6);
        FUNC_2 (VAR_6);
      }
      VAR_10 = VAR_10 >> 2;
    }
    if (VAR_9 & 1) {
      FUNC_5 (VAR_6, "\n");
    }
  }
  FUNC_3 (VAR_6);
}
