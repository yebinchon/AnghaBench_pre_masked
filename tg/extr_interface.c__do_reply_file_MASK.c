
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int * str; int msg_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int *,int *,int ,unsigned long long,int ,struct in_ev*) ;

void FUNC_3 (struct command *VAR_2, int VAR_3, struct arg VAR_4[], struct in_ev *VAR_5, unsigned long long VAR_6) {
  FUNC_0 (VAR_3 >= 2);
  if (VAR_5) { VAR_5->refcnt ++; }
  FUNC_2 (VAR_0, &VAR_4[0].msg_id, VAR_4[1].str, VAR_3 == 2 ? ((void*)0) : VAR_4[2].str, VAR_3 == 2 ? 0 : FUNC_1 (VAR_4[2].str), VAR_6, VAR_1, VAR_5);
}
