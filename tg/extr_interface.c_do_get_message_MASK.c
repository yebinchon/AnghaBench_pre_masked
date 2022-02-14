
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int msg_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ,struct in_ev*) ;

void FUNC_2 (struct command *VAR_2, int VAR_3, struct arg VAR_4[], struct in_ev *VAR_5) {
  FUNC_0 (VAR_3 == 1);
  if (VAR_5) { VAR_5->refcnt ++; }
  FUNC_1 (VAR_0, &VAR_4[0].msg_id, VAR_1, VAR_5);
}
