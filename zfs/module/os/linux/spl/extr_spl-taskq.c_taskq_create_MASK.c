
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint_t ;
typedef int taskq_thread_t ;
struct TYPE_8__ {int tq_nthreads; int tq_maxthreads; int tq_minalloc; int tq_maxalloc; int tq_flags; int tq_taskqs; scalar_t__ tq_instance; scalar_t__ tq_nspawn; int tq_wait_waitq; int tq_lock; int tq_lock_class; int tq_work_waitq; int tq_delay_list; int tq_prio_list; int tq_pend_list; int tq_free_list; void* tq_lowest_id; void* tq_next_id; scalar_t__ tq_nalloc; int tq_pri; scalar_t__ tq_nactive; int tq_name; int tq_active_list; int tq_thread_list; } ;
typedef TYPE_1__ taskq_t ;
typedef int pri_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int,int ) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long,int ) ;
 int FUNC_12 (int *,unsigned long) ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (TYPE_1__*,int,unsigned long*) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (char const*) ;
 int * FUNC_17 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int) ;

taskq_t *
FUNC_20(const char *VAR_14, int VAR_15, pri_t VAR_16,
    int VAR_17, int VAR_18, uint_t VAR_19)
{
 taskq_t *VAR_20;
 taskq_thread_t *VAR_21;
 int VAR_22 = 0, VAR_23 = 0, VAR_24;
 unsigned long VAR_25;

 FUNC_0(VAR_14 != ((void*)0));
 FUNC_0(VAR_17 >= 0);
 FUNC_0(VAR_18 <= VAR_0);
 FUNC_0(!(VAR_19 & (VAR_4)));


 if (VAR_19 & VAR_7) {
  FUNC_0(VAR_15 <= 100);
  FUNC_0(VAR_15 >= 0);
  VAR_15 = FUNC_3(VAR_15, 100);
  VAR_15 = FUNC_2(VAR_15, 0);
  VAR_15 = FUNC_2((FUNC_9() * VAR_15) / 100, 1);
 }

 VAR_20 = FUNC_6(sizeof (*VAR_20), VAR_1);
 if (VAR_20 == ((void*)0))
  return (((void*)0));

 FUNC_10(&VAR_20->tq_lock);
 FUNC_1(&VAR_20->tq_thread_list);
 FUNC_1(&VAR_20->tq_active_list);
 VAR_20->tq_name = FUNC_7(VAR_14);
 VAR_20->tq_nactive = 0;
 VAR_20->tq_nthreads = 0;
 VAR_20->tq_nspawn = 0;
 VAR_20->tq_maxthreads = VAR_15;
 VAR_20->tq_pri = VAR_16;
 VAR_20->tq_minalloc = VAR_17;
 VAR_20->tq_maxalloc = VAR_18;
 VAR_20->tq_nalloc = 0;
 VAR_20->tq_flags = (VAR_19 | VAR_3);
 VAR_20->tq_next_id = VAR_2;
 VAR_20->tq_lowest_id = VAR_2;
 FUNC_1(&VAR_20->tq_free_list);
 FUNC_1(&VAR_20->tq_pend_list);
 FUNC_1(&VAR_20->tq_prio_list);
 FUNC_1(&VAR_20->tq_delay_list);
 FUNC_5(&VAR_20->tq_work_waitq);
 FUNC_5(&VAR_20->tq_wait_waitq);
 VAR_20->tq_lock_class = VAR_8;
 FUNC_1(&VAR_20->tq_taskqs);

 if (VAR_19 & VAR_6) {
  FUNC_11(&VAR_20->tq_lock, VAR_25,
      VAR_20->tq_lock_class);

  for (VAR_24 = 0; VAR_24 < VAR_17; VAR_24++)
   FUNC_14(VAR_20, FUNC_13(VAR_20, VAR_10 | VAR_9,
       &VAR_25));

  FUNC_12(&VAR_20->tq_lock, VAR_25);
 }

 if ((VAR_19 & VAR_5) && VAR_11)
  VAR_15 = 1;

 for (VAR_24 = 0; VAR_24 < VAR_15; VAR_24++) {
  VAR_21 = FUNC_17(VAR_20);
  if (VAR_21 == ((void*)0))
   VAR_23 = 1;
  else
   VAR_22++;
 }


 FUNC_19(VAR_20->tq_wait_waitq, VAR_20->tq_nthreads == VAR_22);




 VAR_20->tq_nspawn = 0;

 if (VAR_23) {
  FUNC_15(VAR_20);
  VAR_20 = ((void*)0);
 } else {
  FUNC_4(&VAR_13);
  VAR_20->tq_instance = FUNC_16(VAR_14) + 1;
  FUNC_8(&VAR_20->tq_taskqs, &VAR_12);
  FUNC_18(&VAR_13);
 }

 return (VAR_20);
}
