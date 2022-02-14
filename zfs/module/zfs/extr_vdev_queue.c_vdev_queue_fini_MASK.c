
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ zio_priority_t ;
struct TYPE_7__ {int vq_lock; int vq_active_tree; } ;
struct TYPE_6__ {TYPE_2__ vdev_queue; } ;
typedef TYPE_1__ vdev_t ;
typedef TYPE_2__ vdev_queue_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_2__*,scalar_t__) ;
 int * FUNC_3 (TYPE_2__*,int ) ;

void
FUNC_4(vdev_t *VAR_4)
{
 vdev_queue_t *VAR_5 = &VAR_4->vdev_queue;

 for (zio_priority_t VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_0(FUNC_2(VAR_5, VAR_6));
 FUNC_0(&VAR_5->vq_active_tree);
 FUNC_0(FUNC_3(VAR_5, VAR_1));
 FUNC_0(FUNC_3(VAR_5, VAR_3));
 FUNC_0(FUNC_3(VAR_5, VAR_2));

 FUNC_1(&VAR_5->vq_lock);
}
