
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * svr_thread; int svr_vdev_id; } ;
typedef TYPE_1__ spa_vdev_removal_t ;
struct TYPE_7__ {TYPE_1__* spa_vdev_removal; } ;
typedef TYPE_2__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int *,int ,int ,TYPE_2__*,int ,int *,int ,int ) ;
 int FUNC_2 (char*,int ) ;

void
FUNC_3(spa_t *VAR_4)
{
 spa_vdev_removal_t *VAR_5 = VAR_4->spa_vdev_removal;

 if (VAR_5 == ((void*)0))
  return;
 if (VAR_5->svr_thread != ((void*)0))
  return;

 if (!FUNC_0(VAR_4))
  return;

 FUNC_2("restarting removal of %llu", VAR_5->svr_vdev_id);
 VAR_5->svr_thread = FUNC_1(((void*)0), 0, VAR_3, VAR_4,
     0, &VAR_2, VAR_0, VAR_1);
}
