
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgl_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_3 (struct tgl_state*,int,int ,int ,int ) ;
 scalar_t__ VAR_3 ;

void FUNC_4 (struct tgl_state *VAR_4) {
  if (VAR_3) {
    VAR_3 = 0;
    FUNC_3 (VAR_4, 100, 0, VAR_0, 0);
    return;
  }
  if (VAR_2) {
    VAR_1 = 1;
    while (*VAR_2) {
      char *VAR_5 = VAR_2;
      while (*VAR_2 && *VAR_2 != '\n') {
        VAR_2 ++;
      }
      if (*VAR_2) {
        *VAR_2 = 0;
        VAR_2 ++;
      }
      FUNC_0 (VAR_5, 0);
    }
  }
}
