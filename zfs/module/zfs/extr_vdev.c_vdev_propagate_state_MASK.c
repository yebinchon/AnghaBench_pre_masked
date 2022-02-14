
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ vs_aux; } ;
struct TYPE_14__ {scalar_t__ vdev_children; scalar_t__ vdev_state; struct TYPE_14__* vdev_parent; TYPE_2__* vdev_ops; TYPE_1__ vdev_stat; scalar_t__ vdev_islog; struct TYPE_14__** vdev_child; TYPE_4__* vdev_spa; } ;
typedef TYPE_3__ vdev_t ;
struct TYPE_15__ {TYPE_3__* spa_root_vdev; } ;
typedef TYPE_4__ spa_t ;
struct TYPE_13__ {int (* vdev_op_state_change ) (TYPE_3__*,int,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_3__*) ;

void
FUNC_6(vdev_t *VAR_4)
{
 spa_t *VAR_5 = VAR_4->vdev_spa;
 vdev_t *VAR_6 = VAR_5->spa_root_vdev;
 int VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = 0;
 vdev_t *VAR_10;

 if (VAR_4->vdev_children > 0) {
  for (int VAR_11 = 0; VAR_11 < VAR_4->vdev_children; VAR_11++) {
   VAR_10 = VAR_4->vdev_child[VAR_11];





   if (!FUNC_2(VAR_10))
    continue;

   if (!FUNC_3(VAR_10) ||
       (!FUNC_5(VAR_10) && FUNC_0(VAR_5))) {





    if (VAR_10->vdev_islog && VAR_4 == VAR_6)
     VAR_7++;
    else
     VAR_8++;
   } else if (VAR_10->vdev_state <= VAR_3) {
    VAR_7++;
   }

   if (VAR_10->vdev_stat.vs_aux == VAR_1)
    VAR_9++;
  }

  VAR_4->vdev_ops->vdev_op_state_change(VAR_4, VAR_8, VAR_7);







  if (VAR_9 && VAR_4 == VAR_6 &&
      VAR_6->vdev_state == VAR_2)
   FUNC_4(VAR_6, VAR_0, VAR_2,
       VAR_1);
 }

 if (VAR_4->vdev_parent)
  FUNC_6(VAR_4->vdev_parent);
}
