
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int peer_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,struct in_ev*) ;

void FUNC_4 (struct command *VAR_3, int VAR_4, struct arg VAR_5[], struct in_ev *VAR_6) {
  FUNC_2 (VAR_4 == 4);
  if (VAR_6) { VAR_6->refcnt ++; }
  FUNC_3 (VAR_0, VAR_5[0].peer_id, FUNC_0 (1), FUNC_0 (2), FUNC_0 (3), FUNC_1(VAR_2), VAR_1, VAR_6);
}
