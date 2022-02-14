
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int peer_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,struct in_ev*) ;

void FUNC_2 (struct command *VAR_3, int VAR_4, struct arg VAR_5[], struct in_ev *VAR_6) {
  FUNC_0 (VAR_4 == 1);
  if (VAR_6) { VAR_6->refcnt ++; }
  FUNC_1 (VAR_0, VAR_5[0].peer_id, VAR_1, VAR_2, VAR_6);
}
