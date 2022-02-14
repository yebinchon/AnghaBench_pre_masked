
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vdev_dtl_lock; int ** vdev_dtl; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t vdev_dtl_type_t ;
typedef int range_tree_t ;
typedef int boolean_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

boolean_t
FUNC_3(vdev_t *VAR_0, vdev_dtl_type_t VAR_1)
{
 range_tree_t *VAR_2 = VAR_0->vdev_dtl[VAR_1];
 boolean_t VAR_3;

 FUNC_0(&VAR_0->vdev_dtl_lock);
 VAR_3 = FUNC_2(VAR_2);
 FUNC_1(&VAR_0->vdev_dtl_lock);

 return (VAR_3);
}
