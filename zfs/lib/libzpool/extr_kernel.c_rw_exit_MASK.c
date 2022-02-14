
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rw_lock; scalar_t__ rw_owner; int rw_readers; } ;
typedef TYPE_1__ krwlock_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(krwlock_t *VAR_0)
{
 if (FUNC_0(VAR_0))
  FUNC_2(&VAR_0->rw_readers);
 else
  VAR_0->rw_owner = 0;

 FUNC_1(FUNC_3(&VAR_0->rw_lock));
}
