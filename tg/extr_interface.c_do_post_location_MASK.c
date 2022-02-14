
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int dval; int peer_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ,int,int ,struct in_ev*) ;

void FUNC_3 (struct command *VAR_4, int VAR_5, struct arg VAR_6[], struct in_ev *VAR_7) {
  FUNC_1 (VAR_5 == 3);
  if (VAR_7) { VAR_7->refcnt ++; }
  FUNC_2 (VAR_1, VAR_6[0].peer_id, VAR_6[1].dval, VAR_6[2].dval, FUNC_0(VAR_3) | VAR_0, VAR_2, VAR_7);
}
