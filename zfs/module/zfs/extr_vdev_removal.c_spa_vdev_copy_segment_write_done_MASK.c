
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ io_error; scalar_t__ io_size; int io_abd; TYPE_2__* io_private; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_5__ {int vca_lock; int vca_cv; int vca_write_error_bytes; int vca_outstanding_bytes; } ;
typedef TYPE_2__ vdev_copy_arg_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(zio_t *VAR_0)
{
 vdev_copy_arg_t *VAR_1 = VAR_0->io_private;

 FUNC_0(VAR_0->io_abd);

 FUNC_2(&VAR_1->vca_lock);
 VAR_1->vca_outstanding_bytes -= VAR_0->io_size;

 if (VAR_0->io_error != 0)
  VAR_1->vca_write_error_bytes += VAR_0->io_size;

 FUNC_1(&VAR_1->vca_cv);
 FUNC_3(&VAR_1->vca_lock);
}
