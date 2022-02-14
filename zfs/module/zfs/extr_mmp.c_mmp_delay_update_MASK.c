
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* mmp_last_write; int mmp_delay; int mmp_io_lock; } ;
struct TYPE_6__ {TYPE_2__ spa_mmp; } ;
typedef TYPE_1__ spa_t ;
typedef TYPE_2__ mmp_thread_t ;
typedef int hrtime_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8(spa_t *VAR_2, boolean_t VAR_3)
{
 mmp_thread_t *VAR_4 = &VAR_2->spa_mmp;
 hrtime_t VAR_5 = FUNC_5() - VAR_4->mmp_last_write;

 FUNC_0(FUNC_4(&VAR_4->mmp_io_lock));

 if (FUNC_6(VAR_2) == VAR_0) {
  VAR_4->mmp_delay = 0;
  return;
 }

 if (VAR_5 > VAR_4->mmp_delay)
  VAR_4->mmp_delay = VAR_5;

 if (VAR_3 == VAR_0)
  return;

 VAR_4->mmp_last_write = FUNC_5();




 if (VAR_5 < VAR_4->mmp_delay) {
  hrtime_t VAR_6 =
      FUNC_3(FUNC_2(VAR_1)) /
      FUNC_1(1, FUNC_7(VAR_2));
  VAR_4->mmp_delay = FUNC_1(((VAR_5 + VAR_4->mmp_delay * 127) / 128),
      VAR_6);
 }
}
