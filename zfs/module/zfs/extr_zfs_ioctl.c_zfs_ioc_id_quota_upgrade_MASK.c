
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
struct TYPE_13__ {scalar_t__ os_upgrade_id; int os_upgrade_status; TYPE_1__* os_spa; int os_upgrade_lock; } ;
typedef TYPE_3__ objset_t ;
struct TYPE_11__ {int spa_upgrade_taskq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ,TYPE_3__**) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(zfs_cmd_t *VAR_3)
{
 objset_t *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->zc_name, VAR_0, VAR_2, &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);

 if (FUNC_5(VAR_4) ||
     FUNC_4(VAR_4)) {
  FUNC_8(&VAR_4->os_upgrade_lock);
  if (VAR_4->os_upgrade_id == 0) {

   VAR_4->os_upgrade_status = 0;
   FUNC_9(&VAR_4->os_upgrade_lock);

   FUNC_2(VAR_4);
  } else {
   FUNC_9(&VAR_4->os_upgrade_lock);
  }

  FUNC_7(FUNC_3(VAR_4), VAR_2);

  FUNC_10(VAR_4->os_spa->spa_upgrade_taskq, VAR_4->os_upgrade_id);
  VAR_5 = VAR_4->os_upgrade_status;
 } else {
  FUNC_7(FUNC_3(VAR_4), VAR_2);
 }

 FUNC_6(FUNC_0(VAR_4), VAR_1, VAR_2);

 return (VAR_5);
}
