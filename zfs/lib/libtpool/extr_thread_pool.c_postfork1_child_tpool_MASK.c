
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tp_current; int tp_flags; TYPE_3__* tp_active; scalar_t__ tp_idle; scalar_t__ tp_njobs; int * tp_tail; TYPE_2__* tp_head; int tp_waitcv; int tp_workcv; int tp_busycv; int tp_mutex; struct TYPE_7__* tp_forw; } ;
typedef TYPE_1__ tpool_t ;
struct TYPE_8__ {struct TYPE_8__* tpj_next; } ;
typedef TYPE_2__ tpool_job_t ;
struct TYPE_9__ {scalar_t__ tpa_tid; struct TYPE_9__* tpa_next; } ;
typedef TYPE_3__ tpool_active_t ;
typedef scalar_t__ pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 () ;
 TYPE_1__* VAR_3 ;

void
FUNC_5(void)
{
 pthread_t VAR_4 = FUNC_4();
 tpool_t *VAR_5;
 tpool_job_t *VAR_6;







top:
 if ((VAR_5 = VAR_3) == ((void*)0))
  return;

 do {
  tpool_active_t *VAR_7;

  (void) FUNC_3(&VAR_5->tp_mutex, ((void*)0));
  (void) FUNC_2(&VAR_5->tp_busycv, ((void*)0));
  (void) FUNC_2(&VAR_5->tp_workcv, ((void*)0));
  (void) FUNC_2(&VAR_5->tp_waitcv, ((void*)0));
  for (VAR_6 = VAR_5->tp_head; VAR_6; VAR_6 = VAR_5->tp_head) {
   VAR_5->tp_head = VAR_6->tpj_next;
   FUNC_1(VAR_6);
  }
  VAR_5->tp_tail = ((void*)0);
  VAR_5->tp_njobs = 0;
  for (VAR_7 = VAR_5->tp_active; VAR_7;
      VAR_7 = VAR_7->tpa_next) {
   if (VAR_7->tpa_tid == VAR_4) {
    VAR_7->tpa_next = ((void*)0);
    break;
   }
  }
  VAR_5->tp_idle = 0;
  VAR_5->tp_current = 0;
  if ((VAR_5->tp_active = VAR_7) != ((void*)0))
   VAR_5->tp_current = 1;
  VAR_5->tp_flags &= ~VAR_2;
  if (VAR_5->tp_flags & (VAR_1 | VAR_0)) {
   VAR_5->tp_flags &= ~VAR_1;
   VAR_5->tp_flags |= VAR_0;
   if (VAR_5->tp_current == 0) {
    FUNC_0(VAR_5);
    goto top;
   }
  }
 } while ((VAR_5 = VAR_5->tp_forw) != VAR_3);
}
