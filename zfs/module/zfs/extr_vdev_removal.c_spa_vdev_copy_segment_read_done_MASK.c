
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ io_error; scalar_t__ io_size; TYPE_2__* io_private; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_6__ {int vca_lock; int vca_read_error_bytes; } ;
typedef TYPE_2__ vdev_copy_arg_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(zio_t *VAR_0)
{
 vdev_copy_arg_t *VAR_1 = VAR_0->io_private;

 if (VAR_0->io_error != 0) {
  FUNC_0(&VAR_1->vca_lock);
  VAR_1->vca_read_error_bytes += VAR_0->io_size;
  FUNC_1(&VAR_1->vca_lock);
 }

 FUNC_2(FUNC_3(VAR_0));
}
