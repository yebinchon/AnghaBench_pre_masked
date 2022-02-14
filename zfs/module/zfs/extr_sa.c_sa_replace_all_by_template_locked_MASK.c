
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sa_need_attr_registration; } ;
typedef TYPE_2__ sa_os_t ;
struct TYPE_9__ {TYPE_1__* sa_os; } ;
typedef TYPE_3__ sa_handle_t ;
typedef int sa_bulk_attr_t ;
typedef int dmu_tx_t ;
struct TYPE_7__ {TYPE_2__* os_sa; } ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,int *,int,int *) ;

int
FUNC_2(sa_handle_t *VAR_0, sa_bulk_attr_t *VAR_1,
    int VAR_2, dmu_tx_t *VAR_3)
{
 sa_os_t *VAR_4 = VAR_0->sa_os->os_sa;

 if (VAR_4->sa_need_attr_registration)
  FUNC_0(VAR_0, VAR_3);
 return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3));
}
