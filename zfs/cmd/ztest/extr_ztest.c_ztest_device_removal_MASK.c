
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ztest_ds_t ;
struct TYPE_14__ {int vdev_guid; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_13__ {scalar_t__ sr_state; } ;
struct TYPE_15__ {TYPE_1__ spa_removing_phys; } ;
typedef TYPE_3__ spa_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_8 (int ,int ) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (TYPE_3__*,scalar_t__) ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;

void
FUNC_11(ztest_ds_t *VAR_10, uint64_t VAR_11)
{
 spa_t *VAR_12 = VAR_8;
 vdev_t *VAR_13;
 uint64_t VAR_14;
 int VAR_15;

 FUNC_1(&VAR_9);

 if (VAR_7) {
  FUNC_2(&VAR_9);
  return;
 }




 FUNC_3(VAR_12, VAR_6, VAR_3, VAR_5);
 VAR_13 = FUNC_9(VAR_12, FUNC_10(VAR_12, VAR_0));
 VAR_14 = VAR_13->vdev_guid;
 FUNC_4(VAR_12, VAR_6, VAR_3);

 VAR_15 = FUNC_7(VAR_12, VAR_14, VAR_0);
 if (VAR_15 == 0) {
  VAR_7 = VAR_1;
  FUNC_2(&VAR_9);
  FUNC_8(FUNC_5(VAR_12), 0);

  while (VAR_12->spa_removing_phys.sr_state == VAR_2)
   FUNC_8(FUNC_5(VAR_12), 0);
 } else {
  FUNC_2(&VAR_9);
  return;
 }







 VAR_15 = FUNC_6(VAR_12, VAR_4);
 if (VAR_15 == 0) {
  while (FUNC_0(FUNC_5(VAR_12)))
   FUNC_8(FUNC_5(VAR_12), 0);
 }

 FUNC_1(&VAR_9);
 VAR_7 = VAR_0;
 FUNC_2(&VAR_9);
}
