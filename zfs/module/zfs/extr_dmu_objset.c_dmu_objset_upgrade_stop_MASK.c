
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ taskqid_t ;
struct TYPE_6__ {scalar_t__ os_upgrade_id; int os_upgrade_lock; TYPE_1__* os_spa; int os_upgrade_exit; } ;
typedef TYPE_2__ objset_t ;
struct TYPE_5__ {int spa_dsl_pool; int spa_upgrade_taskq; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(objset_t *VAR_2)
{
 FUNC_2(&VAR_2->os_upgrade_lock);
 VAR_2->os_upgrade_exit = VAR_0;
 if (VAR_2->os_upgrade_id != 0) {
  taskqid_t VAR_3 = VAR_2->os_upgrade_id;

  VAR_2->os_upgrade_id = 0;
  FUNC_3(&VAR_2->os_upgrade_lock);

  if ((FUNC_4(VAR_2->os_spa->spa_upgrade_taskq, VAR_3)) == 0) {
   FUNC_1(FUNC_0(VAR_2), VAR_1);
  }
  FUNC_5(VAR_2->os_spa->spa_dsl_pool, 0);
 } else {
  FUNC_3(&VAR_2->os_upgrade_lock);
 }
}
