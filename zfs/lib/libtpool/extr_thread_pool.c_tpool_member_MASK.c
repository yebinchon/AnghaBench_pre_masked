
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tp_flags; int tp_mutex; TYPE_2__* tp_active; } ;
typedef TYPE_1__ tpool_t ;
struct TYPE_5__ {scalar_t__ tpa_tid; struct TYPE_5__* tpa_next; } ;
typedef TYPE_2__ tpool_active_t ;
typedef scalar_t__ pthread_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;

int
FUNC_4(tpool_t *VAR_2)
{
 pthread_t VAR_3 = FUNC_3();
 tpool_active_t *VAR_4;

 FUNC_0(!(VAR_2->tp_flags & (VAR_1 | VAR_0)));

 FUNC_1(&VAR_2->tp_mutex);
 for (VAR_4 = VAR_2->tp_active; VAR_4; VAR_4 = VAR_4->tpa_next) {
  if (VAR_4->tpa_tid == VAR_3) {
   FUNC_2(&VAR_2->tp_mutex);
   return (1);
  }
 }
 FUNC_2(&VAR_2->tp_mutex);
 return (0);
}
