
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ zp_checksum; } ;
struct TYPE_11__ {int io_error; int io_flags; int io_size; int io_offset; int io_bookmark; TYPE_7__* io_vd; int io_spa; TYPE_1__ io_prop; int * io_bp; } ;
typedef TYPE_3__ zio_t ;
typedef int zio_bad_cksum_t ;
typedef int blkptr_t ;
struct TYPE_10__ {int vs_checksum_errors; } ;
struct TYPE_12__ {int vdev_stat_lock; TYPE_2__ vdev_stat; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_7__*,int *,TYPE_3__*,int ,int ,int *,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;

__attribute__((used)) static zio_t *
FUNC_5(zio_t *VAR_4)
{
 zio_bad_cksum_t VAR_5;
 blkptr_t *VAR_6 = VAR_4->io_bp;
 int VAR_7;

 FUNC_0(VAR_4->io_vd != ((void*)0));

 if (VAR_6 == ((void*)0)) {




  if (VAR_4->io_prop.zp_checksum == VAR_2)
   return (VAR_4);

  FUNC_0(VAR_4->io_prop.zp_checksum == VAR_1);
 }

 if ((VAR_7 = FUNC_4(VAR_4, &VAR_5)) != 0) {
  VAR_4->io_error = VAR_7;
  if (VAR_7 == VAR_0 &&
      !(VAR_4->io_flags & VAR_3)) {
   FUNC_1(&VAR_4->io_vd->vdev_stat_lock);
   VAR_4->io_vd->vdev_stat.vs_checksum_errors++;
   FUNC_2(&VAR_4->io_vd->vdev_stat_lock);

   FUNC_3(VAR_4->io_spa,
       VAR_4->io_vd, &VAR_4->io_bookmark, VAR_4,
       VAR_4->io_offset, VAR_4->io_size, ((void*)0), &VAR_5);
  }
 }

 return (VAR_4);
}
