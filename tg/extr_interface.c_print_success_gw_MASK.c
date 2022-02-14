
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgl_state {int dummy; } ;
struct in_ev {int refcnt; } ;


 struct tgl_state* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct in_ev*) ;
 int FUNC_2 (struct in_ev*) ;
 int FUNC_3 (struct in_ev*) ;

void FUNC_4 (struct tgl_state *VAR_1, void *VAR_2, int VAR_3) {
  FUNC_0 (VAR_0 == VAR_1);
  struct in_ev *VAR_4 = VAR_2;
  if (VAR_4 && !--VAR_4->refcnt) {
    FUNC_1 (VAR_4);
    return;
  }
  if (!VAR_3) { FUNC_2 (VAR_4); return; }
  else { FUNC_3 (VAR_4); return; }
}
