
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ zs_thread_stop; scalar_t__ zs_thread_kill; int zs_enospc_count; } ;
typedef TYPE_1__ ztest_shared_t ;
struct TYPE_10__ {scalar_t__ zc_next; } ;
typedef TYPE_2__ ztest_shared_callstate_t ;
struct TYPE_11__ {int* zi_interval; } ;
typedef TYPE_3__ ztest_info_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ hrtime_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,TYPE_3__*,scalar_t__) ;
 TYPE_3__* VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 int VAR_4;
 uint64_t VAR_5 = (uintptr_t)VAR_3;
 ztest_shared_t *VAR_6 = VAR_2;
 uint64_t VAR_7;
 hrtime_t VAR_8;
 ztest_info_t *VAR_9;
 ztest_shared_callstate_t *VAR_10;

 while ((VAR_8 = FUNC_2()) < VAR_6->zs_thread_stop) {



  if (VAR_8 > VAR_6->zs_thread_kill)
   FUNC_5(VAR_6);




  if (VAR_6->zs_enospc_count > 10)
   break;




  VAR_4 = FUNC_6(VAR_0);
  VAR_9 = &VAR_1[VAR_4];
  VAR_10 = FUNC_0(VAR_4);
  VAR_7 = VAR_10->zc_next;

  if (VAR_8 >= VAR_7 &&
      FUNC_1(&VAR_10->zc_next, VAR_7, VAR_7 +
      FUNC_6(2 * VAR_9->zi_interval[0] + 1)) == VAR_7) {
   FUNC_4(VAR_4, VAR_9, VAR_5);
  }
 }

 FUNC_3();
}
