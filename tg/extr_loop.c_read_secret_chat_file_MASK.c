
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int,int*,int) ;
 int FUNC_5 (int,int) ;

void FUNC_6 (void) {
  if (VAR_2) { return; }
  int VAR_3 = FUNC_3 (FUNC_2 (), VAR_0, 0600);
  if (VAR_3 < 0) { return; }

  int VAR_4;
  if (FUNC_4 (VAR_3, &VAR_4, 4) < 4) { FUNC_1 (VAR_3); return; }
  if (VAR_4 != VAR_1) { FUNC_1 (VAR_3); return; }
  int VAR_5 = 0;
  FUNC_0 (FUNC_4 (VAR_3, &VAR_5, 4) == 4);
  FUNC_0 (VAR_5 == 0 || VAR_5 == 1 || VAR_5 == 2);
  FUNC_0 (FUNC_4 (VAR_3, &VAR_4, 4) == 4);
  FUNC_0 (VAR_4 >= 0);
  while (VAR_4 --> 0) {
    FUNC_5 (VAR_3, VAR_5);
  }
  FUNC_1 (VAR_3);
}
