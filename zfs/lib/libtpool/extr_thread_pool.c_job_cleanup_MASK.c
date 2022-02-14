
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tp_flags; TYPE_2__* tp_active; int tp_mutex; } ;
typedef TYPE_1__ tpool_t ;
struct TYPE_5__ {scalar_t__ tpa_tid; struct TYPE_5__* tpa_next; } ;
typedef TYPE_2__ tpool_active_t ;
typedef scalar_t__ pthread_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 tpool_t *VAR_2 = (tpool_t *)VAR_1;

 pthread_t VAR_3 = FUNC_2();
 tpool_active_t *VAR_4;
 tpool_active_t **VAR_5;

 FUNC_1(&VAR_2->tp_mutex);

 for (VAR_5 = &VAR_2->tp_active;; VAR_5 = &VAR_4->tpa_next) {
  VAR_4 = *VAR_5;
  if (VAR_4->tpa_tid == VAR_3) {
   *VAR_5 = VAR_4->tpa_next;
   break;
  }
 }
 if (VAR_2->tp_flags & VAR_0)
  FUNC_0(VAR_2);
}
