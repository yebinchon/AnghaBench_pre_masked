
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rw_owner; int rw_lock; int rw_readers; } ;
typedef TYPE_1__ krwlock_t ;
typedef scalar_t__ krw_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

void
FUNC_5(krwlock_t *VAR_1, krw_t VAR_2)
{
 if (VAR_2 == VAR_0) {
  FUNC_0(FUNC_2(&VAR_1->rw_lock));
  FUNC_1(&VAR_1->rw_readers);
 } else {
  FUNC_0(FUNC_3(&VAR_1->rw_lock));
  VAR_1->rw_owner = FUNC_4();
 }
}
