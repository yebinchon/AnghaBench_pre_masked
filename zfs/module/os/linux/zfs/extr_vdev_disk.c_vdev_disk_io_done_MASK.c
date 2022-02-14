
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ io_error; int io_spa; TYPE_2__* io_vd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_6__ {int vdev_remove_wanted; TYPE_3__* vdev_tsd; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_7__ {int vd_bdev; } ;
typedef TYPE_3__ vdev_disk_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(zio_t *VAR_3)
{





 if (VAR_3->io_error == VAR_1) {
  vdev_t *VAR_4 = VAR_3->io_vd;
  vdev_disk_t *VAR_5 = VAR_4->vdev_tsd;

  if (FUNC_0(VAR_5->vd_bdev)) {
   FUNC_1(VAR_5->vd_bdev);
   VAR_4->vdev_remove_wanted = VAR_0;
   FUNC_2(VAR_3->io_spa, VAR_2);
  }
 }
}
