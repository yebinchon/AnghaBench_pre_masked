
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tp_flags; scalar_t__ tp_current; scalar_t__ tp_minimum; scalar_t__ tp_linger; int tp_mutex; TYPE_3__* tp_active; int tp_njobs; TYPE_2__* tp_tail; TYPE_2__* tp_head; int tp_workcv; int tp_idle; } ;
typedef TYPE_1__ tpool_t ;
struct TYPE_8__ {void (* tpj_func ) (void*) ;struct TYPE_8__* tpj_next; void* tpj_arg; } ;
typedef TYPE_2__ tpool_job_t ;
struct TYPE_9__ {struct TYPE_9__* tpa_next; int tpa_tid; } ;
typedef TYPE_3__ tpool_active_t ;
struct timespec {int tv_sec; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,struct timespec*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *,int *) ;
 int VAR_9 ;

__attribute__((used)) static void *
FUNC_14(void *VAR_10)
{
 tpool_t *VAR_11 = (tpool_t *)VAR_10;
 int VAR_12;
 tpool_job_t *VAR_13;
 void (*VAR_14)(void *);
 tpool_active_t VAR_15;

 FUNC_8(&VAR_11->tp_mutex);
 FUNC_4(VAR_9, VAR_11);





 VAR_15.tpa_tid = FUNC_10();
 for (;;) {
  VAR_12 = 0;
  VAR_11->tp_idle++;
  if (VAR_11->tp_flags & VAR_7)
   FUNC_2(VAR_11);
  while ((VAR_11->tp_head == ((void*)0) ||
      (VAR_11->tp_flags & VAR_6)) &&
      !(VAR_11->tp_flags & (VAR_5 | VAR_4))) {
   if (VAR_11->tp_current <= VAR_11->tp_minimum ||
       VAR_11->tp_linger == 0) {
    (void) FUNC_7(&VAR_11->tp_workcv,
        &VAR_11->tp_mutex);
   } else {
    struct timespec VAR_16;

    FUNC_0(VAR_0, &VAR_16);
    VAR_16.tv_sec += VAR_11->tp_linger;

    if (FUNC_6(&VAR_11->tp_workcv,
        &VAR_11->tp_mutex, &VAR_16) != 0) {
     VAR_12 = 1;
     break;
    }
   }
  }
  VAR_11->tp_idle--;
  if (VAR_11->tp_flags & VAR_5)
   break;
  if (VAR_11->tp_flags & VAR_4) {

   if (VAR_11->tp_flags & VAR_6) {
    VAR_11->tp_flags &= ~VAR_6;
    (void) FUNC_5(
        &VAR_11->tp_workcv);
   }
   if (VAR_11->tp_head == ((void*)0))
    break;
  }
  if ((VAR_13 = VAR_11->tp_head) != ((void*)0) &&
      !(VAR_11->tp_flags & VAR_6)) {
   VAR_12 = 0;
   VAR_14 = VAR_13->tpj_func;
   VAR_10 = VAR_13->tpj_arg;
   VAR_11->tp_head = VAR_13->tpj_next;
   if (VAR_13 == VAR_11->tp_tail)
    VAR_11->tp_tail = ((void*)0);
   VAR_11->tp_njobs--;
   VAR_15.tpa_next = VAR_11->tp_active;
   VAR_11->tp_active = &VAR_15;
   FUNC_9(&VAR_11->tp_mutex);
   FUNC_4(VAR_8, VAR_11);
   FUNC_1(VAR_13);

   sigset_t VAR_17;
   (void) FUNC_13(VAR_3, ((void*)0), &VAR_17);




   VAR_14(VAR_10);





   (void) FUNC_13(VAR_3, &VAR_17, ((void*)0));
   (void) FUNC_12(VAR_1,
       ((void*)0));
   (void) FUNC_11(VAR_2,
       ((void*)0));
   FUNC_3(1);
  }
  if (VAR_12 && VAR_11->tp_current > VAR_11->tp_minimum) {





   break;
  }
 }
 FUNC_3(1);
 return (VAR_10);
}
