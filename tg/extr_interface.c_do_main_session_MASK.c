
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int refcnt; } ;
struct command {int dummy; } ;
struct arg {int dummy; } ;


 int FUNC_0 (struct in_ev*) ;
 struct in_ev* VAR_0 ;

void FUNC_1 (struct command *VAR_1, int VAR_2, struct arg VAR_3[], struct in_ev *VAR_4) {
  if (VAR_0 && !--VAR_0->refcnt) {
    FUNC_0 (VAR_0);
  }
  VAR_0 = VAR_4;
  if (VAR_4) { VAR_4->refcnt ++; }
}
