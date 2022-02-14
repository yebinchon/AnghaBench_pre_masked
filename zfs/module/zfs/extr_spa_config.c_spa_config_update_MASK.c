
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int vdev_children; scalar_t__ vdev_ms_array; scalar_t__ vdev_removing; scalar_t__ vdev_islog; struct TYPE_12__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_13__ {int spa_is_root; int spa_dsl_pool; TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

void
FUNC_11(spa_t *VAR_7, int VAR_8)
{
 vdev_t *VAR_9 = VAR_7->spa_root_vdev;
 uint64_t VAR_10;
 int VAR_11;

 FUNC_0(FUNC_1(&VAR_6));

 FUNC_2(VAR_7, VAR_3, VAR_1, VAR_2);
 VAR_10 = FUNC_4(VAR_7) + 1;
 if (VAR_8 == VAR_4) {
  FUNC_7(VAR_9);
 } else {







  for (VAR_11 = 0; VAR_11 < VAR_9->vdev_children; VAR_11++) {
   vdev_t *VAR_12 = VAR_9->vdev_child[VAR_11];
   if (!FUNC_9(VAR_12) ||
       (VAR_12->vdev_islog && VAR_12->vdev_removing))
    continue;

   if (VAR_12->vdev_ms_array == 0)
    FUNC_10(VAR_12);
   FUNC_8(VAR_12, VAR_10);
  }
 }
 FUNC_3(VAR_7, VAR_3, VAR_1);




 FUNC_6(VAR_7->spa_dsl_pool, VAR_10);




 if (!VAR_7->spa_is_root) {
  FUNC_5(VAR_7, VAR_0,
      VAR_8 != VAR_4);
 }

 if (VAR_8 == VAR_4)
  FUNC_11(VAR_7, VAR_5);
}
