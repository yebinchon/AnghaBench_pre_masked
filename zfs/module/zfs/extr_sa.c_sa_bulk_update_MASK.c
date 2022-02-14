
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sa_lock; } ;
typedef TYPE_1__ sa_handle_t ;
typedef int sa_bulk_attr_t ;
typedef int dmu_tx_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *,int,int *) ;

int
FUNC_4(sa_handle_t *VAR_0, sa_bulk_attr_t *VAR_1, int VAR_2, dmu_tx_t *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0);
 FUNC_1(&VAR_0->sa_lock);
 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->sa_lock);
 return (VAR_4);
}
