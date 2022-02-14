
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t zio_priority_t ;
struct TYPE_8__ {TYPE_1__* vq_class; int vq_active_tree; TYPE_2__* vq_vdev; } ;
typedef TYPE_3__ vdev_queue_t ;
typedef int spa_t ;
struct TYPE_7__ {int * vdev_spa; } ;
struct TYPE_6__ {scalar_t__ vqc_active; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 int * FUNC_3 (TYPE_3__*,size_t) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static zio_priority_t
FUNC_4(vdev_queue_t *VAR_2)
{
 spa_t *VAR_3 = VAR_2->vq_vdev->vdev_spa;
 zio_priority_t VAR_4;

 if (FUNC_0(&VAR_2->vq_active_tree) >= VAR_1)
  return (VAR_0);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_0(FUNC_3(VAR_2, VAR_4)) > 0 &&
      VAR_2->vq_class[VAR_4].vqc_active <
      FUNC_2(VAR_4))
   return (VAR_4);
 }





 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_0(FUNC_3(VAR_2, VAR_4)) > 0 &&
      VAR_2->vq_class[VAR_4].vqc_active <
      FUNC_1(VAR_3, VAR_4))
   return (VAR_4);
 }


 return (VAR_0);
}
