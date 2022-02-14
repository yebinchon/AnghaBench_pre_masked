
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seq; int pts; int qts; int date; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int,int*,int) ;

void FUNC_7 (void) {
  if (VAR_4) { return; }
  static int VAR_5;
  static int VAR_6;
  static int VAR_7;
  static int VAR_8;
  if (VAR_5 >= VAR_3->seq && VAR_6 >= VAR_3->pts && VAR_7 >= VAR_3->qts && VAR_8 >= VAR_3->date) { return; }
  VAR_5 = VAR_3->seq; VAR_6 = VAR_3->pts; VAR_7 = VAR_3->qts; VAR_8 = VAR_3->date;
  int VAR_9 = FUNC_5 (FUNC_3 (), VAR_0 | VAR_1, 0600);
  if (VAR_9 < 0) {
    FUNC_4 ("Can not write state file '%s': %m\n", FUNC_3 ());
    FUNC_2 (1);
  }
  int VAR_10[6];
  VAR_10[0] = VAR_2;
  VAR_10[1] = 0;
  VAR_10[2] = VAR_6;
  VAR_10[3] = VAR_7;
  VAR_10[4] = VAR_5;
  VAR_10[5] = VAR_8;
  FUNC_0 (FUNC_6 (VAR_9, VAR_10, 24) == 24);
  FUNC_1 (VAR_9);
}
