
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ io_type; scalar_t__ io_error; scalar_t__ io_delay; TYPE_2__* io_vd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_19__ {TYPE_3__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_20__ {int (* vdev_op_io_done ) (TYPE_1__*) ;scalar_t__ vdev_op_leaf; } ;
typedef TYPE_3__ vdev_ops_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_3__ VAR_10 ;
 int * FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static zio_t *
FUNC_12(zio_t *VAR_12)
{
 vdev_t *VAR_13 = VAR_12->io_vd;
 vdev_ops_t *VAR_14 = VAR_13 ? VAR_13->vdev_ops : &VAR_10;
 boolean_t VAR_15 = VAR_0;

 if (FUNC_11(VAR_12, VAR_5, VAR_9)) {
  return (((void*)0));
 }

 FUNC_0(VAR_12->io_type == VAR_6 ||
     VAR_12->io_type == VAR_8 || VAR_12->io_type == VAR_7);

 if (VAR_12->io_delay)
  VAR_12->io_delay = FUNC_3() - VAR_12->io_delay;

 if (VAR_13 != ((void*)0) && VAR_13->vdev_ops->vdev_op_leaf) {

  FUNC_8(VAR_12);

  if (VAR_12->io_type == VAR_8)
   FUNC_6(VAR_12);

  if (VAR_11 && VAR_12->io_error == 0)
   VAR_12->io_error = FUNC_9(VAR_13, VAR_12,
       VAR_3, VAR_2);

  if (VAR_11 && VAR_12->io_error == 0)
   VAR_12->io_error = FUNC_10(VAR_12, VAR_3);

  if (VAR_12->io_error && VAR_12->io_type != VAR_7) {
   if (!FUNC_5(VAR_13, VAR_12)) {
    VAR_12->io_error = FUNC_1(VAR_4);
   } else {
    VAR_15 = VAR_1;
   }
  }
 }

 VAR_14->vdev_op_io_done(VAR_12);

 if (VAR_15)
  FUNC_2(FUNC_7(VAR_13, VAR_12) == ((void*)0));

 return (VAR_12);
}
