
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int,...) ;
 int FUNC_9 (int,int,unsigned int) ;

void FUNC_10 (void) {
  if (VAR_4) { return; }
  int VAR_5 = FUNC_7 (FUNC_6 (), VAR_1 | VAR_2, 0600);
  if (VAR_5 < 0) {
    FUNC_5 ();
    return;
  }
  FUNC_1 (VAR_5 >= 0);
  unsigned VAR_6;
  unsigned VAR_7;
  if (FUNC_8 (VAR_5, &VAR_7, 4) < 4 || (VAR_7 != VAR_0)) {
    FUNC_4 (VAR_5);
    FUNC_5 ();
    return;
  }
  FUNC_1 (FUNC_8 (VAR_5, &VAR_6, 4) == 4);
  FUNC_1 (VAR_6 > 0);
  int VAR_8;
  FUNC_1 (FUNC_8 (VAR_5, &VAR_8, 4) == 4);

  int VAR_9;
  for (VAR_9 = 0; VAR_9 <= (int)VAR_6; VAR_9++) {
    int VAR_10;
    FUNC_1 (FUNC_8 (VAR_5, &VAR_10, 4) == 4);
    if (VAR_10) {
      FUNC_9 (VAR_5, VAR_9, VAR_7);
    }
  }
  FUNC_3 (VAR_3, VAR_8);
  int VAR_11;
  int VAR_12 = FUNC_8 (VAR_5, &VAR_11, 4);
  if (VAR_12 < 4) {
    FUNC_1 (!VAR_12);
  }
  if (VAR_11) {
    FUNC_2 (VAR_3, FUNC_0 (VAR_11));
  }
  FUNC_4 (VAR_5);
}
