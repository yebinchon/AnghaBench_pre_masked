
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int str; int peer_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int,int ,struct in_ev*) ;

void FUNC_3 (struct command *VAR_5, int VAR_6, struct arg VAR_7[], struct in_ev *VAR_8) {
  FUNC_1 (VAR_6 == 2);
  if (VAR_8) { VAR_8->refcnt ++; }
  FUNC_2 (VAR_0, VAR_7[0].peer_id, VAR_7[1].str, FUNC_0(VAR_4) | VAR_1 | VAR_2, VAR_3, VAR_8);
}
