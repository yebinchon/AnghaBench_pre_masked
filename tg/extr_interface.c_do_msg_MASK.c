
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int peer_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int,int *,int ,struct in_ev*) ;
 int FUNC_4 (int ,char*,int ,int) ;

void FUNC_5 (struct command *VAR_6, int VAR_7, struct arg VAR_8[], struct in_ev *VAR_9) {
  FUNC_2 (VAR_7 == 2);
  if (VAR_9) { VAR_9->refcnt ++; }
  FUNC_4 (VAR_0, "reply_id=%d, disable=%d\n", VAR_5, VAR_2);
  FUNC_3 (VAR_1, VAR_8[0].peer_id, FUNC_0(1), FUNC_1(VAR_5) | VAR_2 | VAR_3, ((void*)0), VAR_4, VAR_9);
}
