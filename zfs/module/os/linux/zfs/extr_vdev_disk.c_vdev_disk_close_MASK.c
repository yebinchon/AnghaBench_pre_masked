
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* vdev_tsd; int vdev_spa; scalar_t__ vdev_reopening; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_6__ {int vd_lock; int * vd_bdev; } ;
typedef TYPE_2__ vdev_disk_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(vdev_t *VAR_1)
{
 vdev_disk_t *VAR_2 = VAR_1->vdev_tsd;

 if (VAR_1->vdev_reopening || VAR_2 == ((void*)0))
  return;

 if (VAR_2->vd_bdev != ((void*)0)) {
  FUNC_0(VAR_2->vd_bdev,
      FUNC_4(FUNC_3(VAR_1->vdev_spa)) | VAR_0);
 }

 FUNC_2(&VAR_2->vd_lock);
 FUNC_1(VAR_2, sizeof (vdev_disk_t));
 VAR_1->vdev_tsd = ((void*)0);
}
