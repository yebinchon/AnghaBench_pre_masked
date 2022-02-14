
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int vdev_asize; int vdev_ms_shift; int vdev_ms_count; int vdev_spa; struct TYPE_8__* vdev_top; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(vdev_t *VAR_2, uint64_t VAR_3)
{
 FUNC_0(VAR_2->vdev_top == VAR_2);
 FUNC_0(FUNC_2(VAR_2->vdev_spa, VAR_1, VAR_0) == VAR_1);
 FUNC_0(FUNC_4(VAR_2));

 FUNC_7(VAR_2);

 if ((VAR_2->vdev_asize >> VAR_2->vdev_ms_shift) > VAR_2->vdev_ms_count &&
     FUNC_4(VAR_2)) {
  FUNC_5(VAR_2);
  FUNC_1(FUNC_6(VAR_2, VAR_3) == 0);
  FUNC_3(VAR_2);
 }
}
