
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int num; int str; int peer_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int,int,int,int ,int ,int ,struct in_ev*) ;

void FUNC_3 (struct command *VAR_3, int VAR_4, struct arg VAR_5[], struct in_ev *VAR_6) {
  FUNC_0 (VAR_4 == 6);
  int VAR_7;
  if (VAR_5[1].num != VAR_0) {
    VAR_7 = VAR_5[1].num;
  } else {
    VAR_7 = 40;
  }
  int VAR_8;
  if (VAR_5[2].num != VAR_0) {
    VAR_8 = VAR_5[2].num;
  } else {
    VAR_8 = 0;
  }
  int VAR_9;
  if (VAR_5[3].num != VAR_0) {
    VAR_9 = VAR_5[3].num;
  } else {
    VAR_9 = 0;
  }
  int VAR_10;
  if (VAR_5[4].num != VAR_0) {
    VAR_10 = VAR_5[4].num;
  } else {
    VAR_10 = 0;
  }
  if (VAR_6) { VAR_6->refcnt ++; }
  FUNC_2 (VAR_1, VAR_5[0].peer_id, VAR_8, VAR_9, VAR_7, VAR_10, VAR_5[5].str, FUNC_1 (VAR_5[5].str), VAR_2, VAR_6);
}
