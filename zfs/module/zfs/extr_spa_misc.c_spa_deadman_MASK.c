
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spa_sync_starttime; int spa_deadman_tqid; int spa_root_vdev; int spa_deadman_calls; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_4 (int ,void (*) (void*),TYPE_1__*,int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_7(void *VAR_6)
{
 spa_t *VAR_7 = VAR_6;


 if (FUNC_3(VAR_7))
  return;

 FUNC_6("slow spa_sync: started %llu seconds ago, calls %llu",
     (FUNC_2() - VAR_7->spa_sync_starttime) / VAR_1,
     ++VAR_7->spa_deadman_calls);
 if (VAR_5)
  FUNC_5(VAR_7->spa_root_vdev, VAR_0);

 VAR_7->spa_deadman_tqid = FUNC_4(VAR_3,
     FUNC_7, VAR_7, VAR_2, FUNC_1() +
     FUNC_0(VAR_4));
}
