
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sa_lock; int * sa_spill_tab; int * sa_spill; int sa_os; } ;
typedef TYPE_1__ sa_handle_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void
FUNC_4(sa_handle_t *VAR_0)
{
 FUNC_1(&VAR_0->sa_lock);
 if (VAR_0->sa_spill) {
  FUNC_3(VAR_0->sa_os, VAR_0->sa_spill_tab);
  FUNC_0(VAR_0->sa_spill, ((void*)0));
  VAR_0->sa_spill = ((void*)0);
  VAR_0->sa_spill_tab = ((void*)0);
 }
 FUNC_2(&VAR_0->sa_lock);
}
