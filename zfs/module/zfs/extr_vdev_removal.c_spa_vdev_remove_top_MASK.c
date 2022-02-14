
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ vdev_id; int vdev_removing; int * vdev_mg; TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_15__ {int spa_dsl_pool; } ;
typedef TYPE_2__ spa_t ;
typedef int metaslab_group_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ,void*,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *,scalar_t__,int ,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int VAR_11 ;
 int FUNC_14 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_15(vdev_t *VAR_12, uint64_t *VAR_13)
{
 spa_t *VAR_14 = VAR_12->vdev_spa;
 int VAR_15;






 VAR_15 = FUNC_9(VAR_12);
 if (VAR_15 != 0)
  return (VAR_15);
 metaslab_group_t *VAR_16 = VAR_12->vdev_mg;
 FUNC_4(VAR_16);





 FUNC_8(VAR_14, ((void*)0),
     *VAR_13 + VAR_5 + VAR_6, 0, VAR_1);







 VAR_15 = FUNC_6(VAR_14);






 FUNC_13(VAR_12, VAR_8);
 FUNC_14(VAR_12, VAR_9);
 FUNC_10(VAR_12);

 *VAR_13 = FUNC_7(VAR_14);





 if (VAR_15 == 0)
  VAR_15 = FUNC_9(VAR_12);

 if (VAR_15 != 0) {
  FUNC_3(VAR_16);
  FUNC_5(VAR_14, VAR_3);
  FUNC_5(VAR_14, VAR_4);
  FUNC_5(VAR_14, VAR_2);
  return (VAR_15);
 }

 VAR_12->vdev_removing = VAR_0;

 FUNC_12(VAR_12, VAR_7, *VAR_13);
 FUNC_11(VAR_12);
 dmu_tx_t *VAR_17 = FUNC_1(VAR_14->spa_dsl_pool, *VAR_13);
 FUNC_2(VAR_14->spa_dsl_pool,
     VAR_11,
     (void *)(uintptr_t)VAR_12->vdev_id, 0, VAR_10, VAR_17);
 FUNC_0(VAR_17);

 return (0);
}
