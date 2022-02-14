
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int io_flags; scalar_t__ io_error; int io_stage; scalar_t__ io_type; scalar_t__ io_cmd; scalar_t__ io_child_type; int io_logical; int (* io_physdone ) (int ) ;int io_pipeline; int * io_vsd; TYPE_1__* io_vsd_ops; int io_spa; TYPE_4__* io_vd; } ;
typedef TYPE_3__ zio_t ;
struct TYPE_17__ {TYPE_2__* vdev_ops; void* vdev_nowritecache; void* vdev_cant_write; } ;
typedef TYPE_4__ vdev_t ;
struct TYPE_15__ {scalar_t__ vdev_op_leaf; } ;
struct TYPE_14__ {int (* vsd_free ) (TYPE_3__*) ;} ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (int ,int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static zio_t *
FUNC_9(zio_t *VAR_25)
{
 vdev_t *VAR_26 = VAR_25->io_vd;

 if (FUNC_8(VAR_25, VAR_8, VAR_22)) {
  return (((void*)0));
 }

 if (VAR_26 == ((void*)0) && !(VAR_25->io_flags & VAR_9))
  FUNC_2(VAR_25->io_spa, VAR_6, VAR_25);

 if (VAR_25->io_vsd != ((void*)0)) {
  VAR_25->io_vsd_ops->vsd_free(VAR_25);
  VAR_25->io_vsd = ((void*)0);
 }

 if (VAR_23 && VAR_25->io_error == 0)
  VAR_25->io_error = FUNC_6(VAR_25, VAR_2);







 if (VAR_25->io_error && VAR_26 == ((void*)0) &&
     !(VAR_25->io_flags & (VAR_14 | VAR_16))) {
  FUNC_0(!(VAR_25->io_flags & VAR_13));
  FUNC_0(!(VAR_25->io_flags & VAR_15));
  VAR_25->io_error = 0;
  VAR_25->io_flags |= VAR_16 |
      VAR_12 | VAR_11;
  VAR_25->io_stage = VAR_18 >> 1;
  FUNC_7(VAR_25, VAR_19,
      VAR_24);
  return (((void*)0));
 }





 if (VAR_25->io_error && VAR_26 != ((void*)0) && VAR_26->vdev_ops->vdev_op_leaf &&
     !FUNC_5(VAR_26, VAR_25))
  VAR_25->io_error = FUNC_1(VAR_5);





 if (VAR_25->io_error == VAR_5 && VAR_25->io_type == VAR_21 &&
     VAR_26 != ((void*)0) && !VAR_26->vdev_ops->vdev_op_leaf) {
  VAR_26->vdev_cant_write = VAR_0;
 }






 if ((VAR_25->io_error == VAR_3 || VAR_25->io_error == VAR_4) &&
     VAR_25->io_type == VAR_20 &&
     VAR_25->io_cmd == VAR_1 && VAR_26 != ((void*)0))
  VAR_26->vdev_nowritecache = VAR_0;

 if (VAR_25->io_error)
  VAR_25->io_pipeline = VAR_17;

 if (VAR_26 != ((void*)0) && VAR_26->vdev_ops->vdev_op_leaf &&
     VAR_25->io_physdone != ((void*)0)) {
  FUNC_0(!(VAR_25->io_flags & VAR_10));
  FUNC_0(VAR_25->io_child_type == VAR_7);
  VAR_25->io_physdone(VAR_25->io_logical);
 }

 return (VAR_25);
}
