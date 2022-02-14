
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tp_flags; int tp_njobs; int tp_idle; scalar_t__ tp_current; scalar_t__ tp_maximum; int tp_mutex; int tp_workcv; } ;
typedef TYPE_1__ tpool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(tpool_t *VAR_3)
{
 int VAR_4;

 FUNC_0(!(VAR_3->tp_flags & (VAR_1 | VAR_0)));

 FUNC_3(&VAR_3->tp_mutex);
 if (!(VAR_3->tp_flags & VAR_2)) {
  FUNC_4(&VAR_3->tp_mutex);
  return;
 }
 VAR_3->tp_flags &= ~VAR_2;
 (void) FUNC_2(&VAR_3->tp_workcv);
 VAR_4 = VAR_3->tp_njobs - VAR_3->tp_idle;
 while (VAR_4-- > 0 && VAR_3->tp_current < VAR_3->tp_maximum) {
  if (FUNC_1(VAR_3) != 0)
   break;
  VAR_3->tp_current++;
 }
 FUNC_4(&VAR_3->tp_mutex);
}
