
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ zv_open_count; struct TYPE_6__* zv_zso; int zvo_kstat; int zv_state_lock; int zvo_dev; TYPE_3__* zvo_disk; int zvo_queue; int zv_rangelock; int zv_suspend_lock; } ;
typedef TYPE_1__ zvol_state_t ;
struct zvol_state_os {int dummy; } ;
struct TYPE_7__ {int * private_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_13(zvol_state_t *VAR_2)
{

 FUNC_0(!FUNC_3(&VAR_2->zv_suspend_lock));
 FUNC_0(!FUNC_2(&VAR_2->zv_state_lock));
 FUNC_0(VAR_2->zv_open_count == 0);
 FUNC_0(VAR_2->zv_zso->zvo_disk->private_data == ((void*)0));

 FUNC_11(&VAR_2->zv_suspend_lock);
 FUNC_12(&VAR_2->zv_rangelock);

 FUNC_6(VAR_2->zv_zso->zvo_disk);
 FUNC_4(VAR_2->zv_zso->zvo_queue);
 FUNC_10(VAR_2->zv_zso->zvo_disk);

 FUNC_7(&VAR_1,
     FUNC_1(VAR_2->zv_zso->zvo_dev) >> VAR_0);

 FUNC_9(&VAR_2->zv_state_lock);
 FUNC_5(&VAR_2->zv_zso->zvo_kstat);

 FUNC_8(VAR_2->zv_zso, sizeof (struct zvol_state_os));
 FUNC_8(VAR_2, sizeof (zvol_state_t));
}
