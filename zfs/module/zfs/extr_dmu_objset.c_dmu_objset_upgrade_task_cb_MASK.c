
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int os_upgrade_lock; scalar_t__ os_upgrade_id; scalar_t__ os_upgrade_exit; int (* os_upgrade_cb ) (TYPE_1__*) ;int os_upgrade_status; } ;
typedef TYPE_1__ objset_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 objset_t *VAR_4 = VAR_3;

 FUNC_2(&VAR_4->os_upgrade_lock);
 VAR_4->os_upgrade_status = VAR_1;
 if (!VAR_4->os_upgrade_exit) {
  FUNC_3(&VAR_4->os_upgrade_lock);

  VAR_4->os_upgrade_status = VAR_4->os_upgrade_cb(VAR_4);
  FUNC_2(&VAR_4->os_upgrade_lock);
 }
 VAR_4->os_upgrade_exit = VAR_0;
 VAR_4->os_upgrade_id = 0;
 FUNC_3(&VAR_4->os_upgrade_lock);
 FUNC_1(FUNC_0(VAR_4), VAR_2);
}
