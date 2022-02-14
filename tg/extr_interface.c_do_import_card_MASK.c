
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {char* str; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int*,int ,struct in_ev*) ;

void FUNC_3 (struct command *VAR_2, int VAR_3, struct arg VAR_4[], struct in_ev *VAR_5) {
  FUNC_0 (VAR_3 == 1);
  char *VAR_6 = VAR_4[0].str;
  int VAR_7 = FUNC_1 (VAR_6);
  if (VAR_7 > 0) {
    int VAR_8;
    static int VAR_9[10];
    int VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12 = 1;
    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8 ++) {
      if (VAR_6[VAR_8] >= '0' && VAR_6[VAR_8] <= '9') {
        VAR_11 = VAR_11 * 16 + VAR_6[VAR_8] - '0';
      } else if (VAR_6[VAR_8] >= 'a' && VAR_6[VAR_8] <= 'f') {
        VAR_11 = VAR_11 * 16 + VAR_6[VAR_8] - 'a' + 10;
      } else if (VAR_6[VAR_8] == ':') {
        if (VAR_10 >= 9) {
          VAR_12 = 0;
          break;
        }
        VAR_9[VAR_10 ++] = VAR_11;
        VAR_11 = 0;
      }
    }
    if (VAR_12) {
      VAR_9[VAR_10 ++] = VAR_11;
      if (VAR_5) { VAR_5->refcnt ++; }
      FUNC_2 (VAR_0, VAR_10, VAR_9, VAR_1, VAR_5);
    }
  }
}
