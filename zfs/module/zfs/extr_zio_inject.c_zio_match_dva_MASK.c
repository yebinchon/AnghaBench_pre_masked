
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ io_child_type; scalar_t__ io_offset; TYPE_3__* io_vd; int io_spa; TYPE_6__* io_bp; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_9__ {TYPE_1__* vdev_ops; } ;
typedef TYPE_3__ vdev_t ;
typedef scalar_t__ uint64_t ;
typedef int dva_t ;
struct TYPE_10__ {int * blk_dva; } ;
struct TYPE_7__ {scalar_t__ vdev_op_leaf; } ;


 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(zio_t *VAR_3)
{
 int VAR_4 = VAR_2;

 if (VAR_3->io_bp != ((void*)0) && VAR_3->io_vd != ((void*)0) &&
     VAR_3->io_child_type == VAR_1) {
  for (VAR_4 = FUNC_0(VAR_3->io_bp) - 1; VAR_4 >= 0; VAR_4--) {
   dva_t *VAR_5 = &VAR_3->io_bp->blk_dva[VAR_4];
   uint64_t VAR_6 = FUNC_1(VAR_5);
   vdev_t *VAR_7 = FUNC_3(VAR_3->io_spa,
       FUNC_2(VAR_5));


   if (VAR_3->io_vd->vdev_ops->vdev_op_leaf)
    VAR_6 += VAR_0;

   if (VAR_3->io_vd == VAR_7 && VAR_3->io_offset == VAR_6)
    break;
  }
 }

 return (VAR_4);
}
