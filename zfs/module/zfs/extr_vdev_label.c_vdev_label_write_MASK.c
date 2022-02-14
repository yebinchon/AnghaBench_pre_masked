
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int io_spa; } ;
typedef TYPE_1__ zio_t ;
typedef int zio_done_func_t ;
struct TYPE_8__ {int vdev_psize; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
typedef int abd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int ,int ,int *,int ,int *,void*,int ,int,int ) ;

void
FUNC_5(zio_t *VAR_7, vdev_t *VAR_8, int VAR_9, abd_t *VAR_10, uint64_t VAR_11,
    uint64_t VAR_12, zio_done_func_t *VAR_13, void *VAR_14, int VAR_15)
{
 FUNC_0(
     FUNC_1(VAR_7->io_spa, VAR_3, VAR_1) == VAR_3 ||
     FUNC_1(VAR_7->io_spa, VAR_3, VAR_2) == VAR_3);
 FUNC_0(VAR_15 & VAR_5);

 FUNC_3(FUNC_4(VAR_7, VAR_8,
     FUNC_2(VAR_8->vdev_psize, VAR_9, VAR_11),
     VAR_12, VAR_10, VAR_4, VAR_13, VAR_14,
     VAR_6, VAR_15, VAR_0));
}
