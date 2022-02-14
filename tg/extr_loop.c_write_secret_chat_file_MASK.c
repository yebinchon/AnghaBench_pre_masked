
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int,int*,int) ;
 int VAR_6 ;

void FUNC_7 (void) {
  if (VAR_5) { return; }
  int VAR_7 = FUNC_4 (FUNC_2 (), VAR_0 | VAR_1, 0600);
  FUNC_0 (VAR_7 >= 0);
  int VAR_8 = VAR_2;
  FUNC_0 (FUNC_6 (VAR_7, &VAR_8, 4) == 4);
  VAR_8 = 2;
  FUNC_0 (FUNC_6 (VAR_7, &VAR_8, 4) == 4);
  FUNC_0 (FUNC_6 (VAR_7, &VAR_8, 4) == 4);

  int VAR_9[2];
  VAR_9[0] = VAR_7;
  VAR_9[1] = 0;

  FUNC_5 (VAR_4, VAR_6, VAR_9);

  FUNC_3 (VAR_7, 8, VAR_3);
  FUNC_0 (FUNC_6 (VAR_7, &VAR_9[1], 4) == 4);
  FUNC_1 (VAR_7);
}
