
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int io_flags; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_21__ {int vdev_psize; int vdev_probe_lock; int vdev_probe_wanted; TYPE_2__* vdev_probe_zio; void* vdev_cant_write; void* vdev_cant_read; TYPE_1__* vdev_ops; int * vdev_spa; } ;
typedef TYPE_3__ vdev_t ;
struct TYPE_22__ {int vps_flags; } ;
typedef TYPE_4__ vdev_probe_stats_t ;
typedef int spa_t ;
struct TYPE_19__ {int vdev_op_leaf; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int ,int,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 (int *,int *,TYPE_3__*,int ,TYPE_4__*,int) ;
 TYPE_2__* FUNC_12 (TYPE_2__*,TYPE_3__*,int ,int ,int ,int ,int ,TYPE_4__*,int ,int,int ) ;

zio_t *
FUNC_13(vdev_t *VAR_20, zio_t *VAR_21)
{
 spa_t *VAR_22 = VAR_20->vdev_spa;
 vdev_probe_stats_t *VAR_23 = ((void*)0);
 zio_t *VAR_24;

 FUNC_0(VAR_20->vdev_ops->vdev_op_leaf);




 if (VAR_21 && (VAR_21->io_flags & VAR_14))
  return (((void*)0));






 FUNC_3(&VAR_20->vdev_probe_lock);

 if ((VAR_24 = VAR_20->vdev_probe_zio) == ((void*)0)) {
  VAR_23 = FUNC_2(sizeof (*VAR_23), VAR_2);

  VAR_23->vps_flags = VAR_9 | VAR_14 |
      VAR_12 | VAR_11 |
      VAR_15;

  if (FUNC_7(VAR_22, VAR_4, VAR_3)) {
   VAR_23->vps_flags |= VAR_10;
   VAR_20->vdev_cant_read = VAR_0;
   VAR_20->vdev_cant_write = VAR_0;
  }

  VAR_20->vdev_probe_zio = VAR_24 = FUNC_11(((void*)0), VAR_22, VAR_20,
      VAR_18, VAR_23,
      VAR_23->vps_flags | VAR_13);





  if (VAR_21 != ((void*)0)) {
   VAR_20->vdev_probe_wanted = VAR_1;
   FUNC_6(VAR_22, VAR_5);
  }
 }

 if (VAR_21 != ((void*)0))
  FUNC_9(VAR_21, VAR_24);

 FUNC_4(&VAR_20->vdev_probe_lock);

 if (VAR_23 == ((void*)0)) {
  FUNC_0(VAR_21 != ((void*)0));
  return (((void*)0));
 }

 for (int VAR_25 = 1; VAR_25 < VAR_6; VAR_25++) {
  FUNC_10(FUNC_12(VAR_24, VAR_20,
      FUNC_8(VAR_20->vdev_psize, VAR_25,
      FUNC_5(VAR_17, VAR_19)), VAR_7,
      FUNC_1(VAR_7, VAR_1),
      VAR_8, VAR_18, VAR_23,
      VAR_16, VAR_23->vps_flags, VAR_1));
 }

 if (VAR_21 == ((void*)0))
  return (VAR_24);

 FUNC_10(VAR_24);
 return (((void*)0));
}
