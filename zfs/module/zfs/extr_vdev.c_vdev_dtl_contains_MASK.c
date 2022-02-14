
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vdev_dtl_lock; TYPE_1__* vdev_spa; int ** vdev_dtl; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t vdev_dtl_type_t ;
typedef int uint64_t ;
typedef int range_tree_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ spa_load_state; TYPE_2__* spa_root_vdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;

boolean_t
FUNC_5(vdev_t *VAR_3, vdev_dtl_type_t VAR_4, uint64_t VAR_5, uint64_t VAR_6)
{
 range_tree_t *VAR_7 = VAR_3->vdev_dtl[VAR_4];
 boolean_t VAR_8 = VAR_0;

 FUNC_0(VAR_4 < VAR_1);
 FUNC_0(VAR_3 != VAR_3->vdev_spa->spa_root_vdev);
 if (VAR_3->vdev_spa->spa_load_state != VAR_2)
  return (VAR_0);

 FUNC_1(&VAR_3->vdev_dtl_lock);
 if (!FUNC_4(VAR_7))
  VAR_8 = FUNC_3(VAR_7, VAR_5, VAR_6);
 FUNC_2(&VAR_3->vdev_dtl_lock);

 return (VAR_8);
}
