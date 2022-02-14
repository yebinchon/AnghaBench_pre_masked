
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int msg_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int ,int ,int ,int ,int ,struct in_ev*) ;

void FUNC_3 (struct command *VAR_2, int VAR_3, struct arg VAR_4[], struct in_ev *VAR_5) {
  FUNC_1 (VAR_3 == 4);
  if (VAR_5) { VAR_5->refcnt ++; }
  FUNC_2 (VAR_0, &VAR_4[0].msg_id, FUNC_0 (1), FUNC_0 (2), FUNC_0 (3), 0, VAR_1, VAR_5);
}
