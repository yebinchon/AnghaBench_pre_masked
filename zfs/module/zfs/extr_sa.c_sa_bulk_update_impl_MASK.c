
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int (* sa_update_cb ) (TYPE_2__*,int *) ;scalar_t__ sa_need_attr_registration; } ;
typedef TYPE_1__ sa_os_t ;
struct TYPE_12__ {int * sa_spill; int * sa_spill_tab; TYPE_4__* sa_os; int sa_lock; } ;
typedef TYPE_2__ sa_handle_t ;
typedef int sa_bulk_attr_t ;
typedef int dmu_tx_t ;
typedef int dmu_object_type_t ;
typedef int dmu_buf_t ;
struct TYPE_13__ {TYPE_1__* os_sa; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_2__*,int *,int,int ,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_10(sa_handle_t *VAR_2, sa_bulk_attr_t *VAR_3, int VAR_4,
    dmu_tx_t *VAR_5)
{
 int VAR_6;
 sa_os_t *VAR_7 = VAR_2->sa_os->os_sa;
 dmu_object_type_t VAR_8;
 dmu_buf_t *VAR_9;

 FUNC_0(VAR_2);
 FUNC_0(FUNC_2(&VAR_2->sa_lock));

 VAR_8 = FUNC_3(FUNC_4(VAR_2, VAR_0));
 VAR_9 = VAR_2->sa_spill;


 if (VAR_7->sa_need_attr_registration)
  FUNC_7(VAR_2, VAR_5);

 VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_1, VAR_5);
 if (VAR_6 == 0 && !FUNC_1(VAR_8) && VAR_7->sa_update_cb)
  VAR_7->sa_update_cb(VAR_2, VAR_5);
 if (!VAR_9 && VAR_2->sa_spill) {
  if (VAR_2->sa_spill_tab) {
   FUNC_8(VAR_2->sa_os, VAR_2->sa_spill_tab);
   VAR_2->sa_spill_tab = ((void*)0);
  }

  FUNC_5(VAR_2->sa_spill, ((void*)0));
  VAR_2->sa_spill = ((void*)0);
 }

 return (VAR_6);
}
