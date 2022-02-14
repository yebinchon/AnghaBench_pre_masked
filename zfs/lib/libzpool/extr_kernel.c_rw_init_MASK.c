
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rw_owner; scalar_t__ rw_readers; int rw_lock; } ;
typedef TYPE_1__ krwlock_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(krwlock_t *VAR_0, char *VAR_1, int VAR_2, void *VAR_3)
{
 FUNC_0(FUNC_1(&VAR_0->rw_lock, ((void*)0)));
 VAR_0->rw_readers = 0;
 VAR_0->rw_owner = 0;
}
