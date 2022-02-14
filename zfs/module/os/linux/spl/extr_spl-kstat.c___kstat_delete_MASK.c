
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ks_flags; int ks_data_size; int ks_private_lock; int * ks_lock; struct TYPE_4__* ks_data; int ks_proc; } ;
typedef TYPE_1__ kstat_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(kstat_t *VAR_1)
{
 FUNC_1(&VAR_1->ks_proc);

 if (!(VAR_1->ks_flags & VAR_0))
  FUNC_0(VAR_1->ks_data, VAR_1->ks_data_size);

 VAR_1->ks_lock = ((void*)0);
 FUNC_2(&VAR_1->ks_private_lock);
 FUNC_0(VAR_1, sizeof (*VAR_1));
}
