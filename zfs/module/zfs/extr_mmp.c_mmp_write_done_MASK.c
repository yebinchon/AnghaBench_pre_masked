
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ io_error; int io_abd; TYPE_3__* io_private; TYPE_2__* io_vd; int * io_spa; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_6__ {scalar_t__ vdev_mmp_kstat_id; scalar_t__ vdev_mmp_pending; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_7__ {int mmp_io_lock; } ;
typedef TYPE_3__ mmp_thread_t ;
typedef scalar_t__ hrtime_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(zio_t *VAR_2)
{
 spa_t *VAR_3 = VAR_2->io_spa;
 vdev_t *VAR_4 = VAR_2->io_vd;
 mmp_thread_t *VAR_5 = VAR_2->io_private;

 FUNC_3(&VAR_5->mmp_io_lock);
 uint64_t VAR_6 = VAR_4->vdev_mmp_kstat_id;
 hrtime_t VAR_7 = FUNC_1() - VAR_4->vdev_mmp_pending;

 FUNC_2(VAR_3, (VAR_2->io_error == 0));

 VAR_4->vdev_mmp_pending = 0;
 VAR_4->vdev_mmp_kstat_id = 0;

 FUNC_4(&VAR_5->mmp_io_lock);
 FUNC_5(VAR_3, VAR_0, VAR_1);

 FUNC_6(VAR_3, VAR_6, VAR_2->io_error,
     VAR_7);

 FUNC_0(VAR_2->io_abd);
}
