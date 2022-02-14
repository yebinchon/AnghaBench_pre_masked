
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ os_upgrade_id; scalar_t__ os_upgrade_status; int os_upgrade_lock; TYPE_1__* os_spa; int os_upgrade_cb; int os_upgrade_exit; } ;
typedef TYPE_2__ objset_t ;
typedef int dmu_objset_upgrade_cb_t ;
struct TYPE_7__ {int spa_upgrade_taskq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_2__*,int ) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(objset_t *VAR_6, dmu_objset_upgrade_cb_t VAR_7)
{
 if (VAR_6->os_upgrade_id != 0)
  return;

 FUNC_0(FUNC_5(FUNC_2(VAR_6)));
 FUNC_3(FUNC_1(VAR_6), VAR_5);

 FUNC_6(&VAR_6->os_upgrade_lock);
 if (VAR_6->os_upgrade_id == 0 && VAR_6->os_upgrade_status == 0) {
  VAR_6->os_upgrade_exit = VAR_0;
  VAR_6->os_upgrade_cb = VAR_7;
  VAR_6->os_upgrade_id = FUNC_8(
      VAR_6->os_spa->spa_upgrade_taskq,
      VAR_4, VAR_6, VAR_3);
  if (VAR_6->os_upgrade_id == VAR_2) {
   FUNC_4(FUNC_1(VAR_6), VAR_5);
   VAR_6->os_upgrade_status = VAR_1;
  }
 }
 FUNC_7(&VAR_6->os_upgrade_lock);
}
