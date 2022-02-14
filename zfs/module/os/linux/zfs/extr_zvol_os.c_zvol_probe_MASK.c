
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int zv_state_lock; TYPE_1__* zv_zso; } ;
typedef TYPE_2__ zvol_state_t ;
struct kobject {int dummy; } ;
typedef int dev_t ;
struct TYPE_4__ {int zvo_disk; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 struct kobject* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int ) ;

__attribute__((used)) static struct kobject *
FUNC_5(dev_t VAR_0, int *VAR_1, void *VAR_2)
{
 zvol_state_t *VAR_3;
 struct kobject *VAR_4;

 VAR_3 = FUNC_4(VAR_0);
 VAR_4 = VAR_3 ? FUNC_2(VAR_3->zv_zso->zvo_disk) : ((void*)0);
 FUNC_0(VAR_3 == ((void*)0) || FUNC_1(&VAR_3->zv_state_lock));
 if (VAR_3)
  FUNC_3(&VAR_3->zv_state_lock);

 return (VAR_4);
}
