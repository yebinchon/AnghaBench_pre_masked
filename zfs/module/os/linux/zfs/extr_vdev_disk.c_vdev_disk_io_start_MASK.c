
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int io_error; int io_type; int io_trim_flags; int io_offset; int io_size; int io_target_timestamp; int io_cmd; TYPE_2__* io_vd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_12__ {int vdev_nowritecache; TYPE_3__* vdev_tsd; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_13__ {int vd_lock; int * vd_bdev; } ;
typedef TYPE_3__ vdev_disk_t ;


 unsigned long VAR_0 ;

 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (void*) ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_1 (int *,TYPE_1__*,int,int,int,int ) ;
 int FUNC_2 (int *,int,int,int ,unsigned long) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_10(zio_t *VAR_9)
{
 vdev_t *VAR_10 = VAR_9->io_vd;
 vdev_disk_t *VAR_11 = VAR_10->vdev_tsd;
 unsigned long VAR_12 = 0;
 int VAR_13, VAR_14;





 if (VAR_11 == ((void*)0)) {
  VAR_9->io_error = VAR_2;
  FUNC_9(VAR_9);
  return;
 }

 FUNC_3(&VAR_11->vd_lock, VAR_5);





 if (VAR_11->vd_bdev == ((void*)0)) {
  FUNC_4(&VAR_11->vd_lock);
  VAR_9->io_error = VAR_2;
  FUNC_9(VAR_9);
  return;
 }

 switch (VAR_9->io_type) {
 case 131:

  if (!FUNC_6(VAR_10)) {
   FUNC_4(&VAR_11->vd_lock);
   VAR_9->io_error = FUNC_0(VAR_2);
   FUNC_9(VAR_9);
   return;
  }

  switch (VAR_9->io_cmd) {
  case 132:

   if (VAR_8)
    break;

   if (VAR_10->vdev_nowritecache) {
    VAR_9->io_error = FUNC_0(VAR_1);
    break;
   }

   VAR_14 = FUNC_5(VAR_11->vd_bdev, VAR_9);
   if (VAR_14 == 0) {
    FUNC_4(&VAR_11->vd_lock);
    return;
   }

   VAR_9->io_error = VAR_14;

   break;

  default:
   VAR_9->io_error = FUNC_0(VAR_1);
  }

  FUNC_4(&VAR_11->vd_lock);
  FUNC_7(VAR_9);
  return;
 case 128:
  VAR_13 = VAR_6;
  break;

 case 130:
  VAR_13 = VAR_4;
  break;

 case 129:




  VAR_9->io_error = -FUNC_2(VAR_11->vd_bdev,
      VAR_9->io_offset >> 9, VAR_9->io_size >> 9, VAR_3,
      VAR_12);

  FUNC_4(&VAR_11->vd_lock);
  FUNC_9(VAR_9);
  return;

 default:
  FUNC_4(&VAR_11->vd_lock);
  VAR_9->io_error = FUNC_0(VAR_1);
  FUNC_9(VAR_9);
  return;
 }

 VAR_9->io_target_timestamp = FUNC_8(VAR_9);
 VAR_14 = FUNC_1(VAR_11->vd_bdev, VAR_9,
     VAR_9->io_size, VAR_9->io_offset, VAR_13, 0);
 FUNC_4(&VAR_11->vd_lock);

 if (VAR_14) {
  VAR_9->io_error = VAR_14;
  FUNC_9(VAR_9);
  return;
 }
}
