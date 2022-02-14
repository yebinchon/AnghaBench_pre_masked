
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vdev_config_dirty_node; TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_8__ {int spa_config_dirty_list; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;

void
FUNC_6(vdev_t *VAR_3)
{
 spa_t *VAR_4 = VAR_3->vdev_spa;

 FUNC_0(FUNC_4(VAR_4, VAR_2, VAR_1) ||
     (FUNC_1(FUNC_5(VAR_4)) &&
     FUNC_4(VAR_4, VAR_2, VAR_0)));

 FUNC_0(FUNC_2(&VAR_3->vdev_config_dirty_node));
 FUNC_3(&VAR_4->spa_config_dirty_list, VAR_3);
}
