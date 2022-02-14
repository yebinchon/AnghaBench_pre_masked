
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int,int*,int) ;

void FUNC_9 (void) {
  if (VAR_4) { return; }
  int VAR_5 = FUNC_7 (FUNC_6 (), VAR_0 | VAR_1, 0600);
  if (VAR_5 < 0) {
    return;
  }
  int VAR_6, VAR_7;
  if (FUNC_8 (VAR_5, &VAR_7, 4) < 4) { FUNC_5 (VAR_5); return; }
  if (VAR_7 != (int)VAR_2) { FUNC_5 (VAR_5); return; }
  if (FUNC_8 (VAR_5, &VAR_6, 4) < 4) { FUNC_5 (VAR_5); return; }
  FUNC_0 (VAR_6 >= 0);
  int VAR_8[4];
  if (FUNC_8 (VAR_5, VAR_8, 16) < 16) {
    FUNC_5 (VAR_5);
    return;
  }
  int VAR_9 = VAR_8[0];
  int VAR_10 = VAR_8[1];
  int VAR_11 = VAR_8[2];
  int VAR_12 = VAR_8[3];
  FUNC_5 (VAR_5);
  FUNC_4 (VAR_3, VAR_11);
  FUNC_2 (VAR_3, VAR_9);
  FUNC_3 (VAR_3, VAR_10);
  FUNC_1 (VAR_3, VAR_12);
}
