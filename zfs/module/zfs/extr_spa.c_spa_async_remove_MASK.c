
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vs_checksum_errors; scalar_t__ vs_write_errors; scalar_t__ vs_read_errors; } ;
struct TYPE_6__ {int vdev_children; struct TYPE_6__** vdev_child; int vdev_top; TYPE_1__ vdev_stat; void* vdev_delayed_close; void* vdev_remove_wanted; } ;
typedef TYPE_2__ vdev_t ;
typedef int spa_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,void*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(spa_t *VAR_3, vdev_t *VAR_4)
{
 if (VAR_4->vdev_remove_wanted) {
  VAR_4->vdev_remove_wanted = VAR_0;
  VAR_4->vdev_delayed_close = VAR_0;
  FUNC_0(VAR_4, VAR_0, VAR_2, VAR_1);







  VAR_4->vdev_stat.vs_read_errors = 0;
  VAR_4->vdev_stat.vs_write_errors = 0;
  VAR_4->vdev_stat.vs_checksum_errors = 0;

  FUNC_1(VAR_4->vdev_top);
 }

 for (int VAR_5 = 0; VAR_5 < VAR_4->vdev_children; VAR_5++)
  FUNC_2(VAR_3, VAR_4->vdev_child[VAR_5]);
}
