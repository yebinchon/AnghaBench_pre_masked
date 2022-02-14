
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tp_flags; scalar_t__ tp_idle; scalar_t__ tp_current; scalar_t__ tp_maximum; int tp_mutex; int tp_workcv; int tp_njobs; TYPE_2__* tp_tail; TYPE_2__* tp_head; } ;
typedef TYPE_1__ tpool_t ;
struct TYPE_7__ {void (* tpj_func ) (void*) ;struct TYPE_7__* tpj_next; void* tpj_arg; } ;
typedef TYPE_2__ tpool_job_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(tpool_t *VAR_3, void (*VAR_4)(void *), void *VAR_5)
{
 tpool_job_t *VAR_6;

 FUNC_0(!(VAR_3->tp_flags & (VAR_1 | VAR_0)));

 if ((VAR_6 = FUNC_1(1, sizeof (*VAR_6))) == ((void*)0))
  return (-1);
 VAR_6->tpj_next = ((void*)0);
 VAR_6->tpj_func = VAR_4;
 VAR_6->tpj_arg = VAR_5;

 FUNC_4(&VAR_3->tp_mutex);

 if (VAR_3->tp_head == ((void*)0))
  VAR_3->tp_head = VAR_6;
 else
  VAR_3->tp_tail->tpj_next = VAR_6;
 VAR_3->tp_tail = VAR_6;
 VAR_3->tp_njobs++;

 if (!(VAR_3->tp_flags & VAR_2)) {
  if (VAR_3->tp_idle > 0)
   (void) FUNC_3(&VAR_3->tp_workcv);
  else if (VAR_3->tp_current < VAR_3->tp_maximum &&
      FUNC_2(VAR_3) == 0)
   VAR_3->tp_current++;
 }

 FUNC_5(&VAR_3->tp_mutex);
 return (0);
}
