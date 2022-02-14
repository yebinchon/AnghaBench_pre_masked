
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int io_flags; int io_bookmark; int io_spa; TYPE_6__* io_vsd; TYPE_1__* io_vd; } ;
typedef TYPE_3__ zio_t ;
struct TYPE_16__ {int zbc_injected; scalar_t__ zbc_has_cksum; } ;
typedef TYPE_4__ zio_bad_cksum_t ;
struct TYPE_14__ {int vs_checksum_errors; } ;
struct TYPE_17__ {int vdev_stat_lock; TYPE_2__ vdev_stat; } ;
typedef TYPE_5__ vdev_t ;
struct TYPE_18__ {int rm_ecksuminjected; } ;
typedef TYPE_6__ raidz_map_t ;
struct TYPE_19__ {size_t rc_devidx; int rc_abd; int rc_size; int rc_offset; } ;
typedef TYPE_7__ raidz_col_t ;
typedef int abd_t ;
struct TYPE_13__ {TYPE_5__** vdev_child; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_5__*,int *,TYPE_3__*,int ,int ,int ,int *,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_3(zio_t *VAR_1, raidz_col_t *VAR_2, abd_t *VAR_3)
{
 vdev_t *VAR_4 = VAR_1->io_vd->vdev_child[VAR_2->rc_devidx];

 if (!(VAR_1->io_flags & VAR_0)) {
  zio_bad_cksum_t VAR_5;
  raidz_map_t *VAR_6 = VAR_1->io_vsd;

  FUNC_0(&VAR_4->vdev_stat_lock);
  VAR_4->vdev_stat.vs_checksum_errors++;
  FUNC_1(&VAR_4->vdev_stat_lock);

  VAR_5.zbc_has_cksum = 0;
  VAR_5.zbc_injected = VAR_6->rm_ecksuminjected;

  FUNC_2(VAR_1->io_spa, VAR_4,
      &VAR_1->io_bookmark, VAR_1, VAR_2->rc_offset, VAR_2->rc_size,
      VAR_2->rc_abd, VAR_3, &VAR_5);
 }
}
