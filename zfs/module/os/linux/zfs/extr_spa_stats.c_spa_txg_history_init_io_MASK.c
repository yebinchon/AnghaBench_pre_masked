
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_11__ {size_t txg; int ndirty; int vs1; } ;
typedef TYPE_1__ txg_stat_t ;
struct TYPE_12__ {int spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_13__ {int * dp_dirty_pertxg; } ;
typedef TYPE_3__ dsl_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,size_t,int ,int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ VAR_6 ;

txg_stat_t *
FUNC_6(spa_t *VAR_7, uint64_t VAR_8, dsl_pool_t *VAR_9)
{
 txg_stat_t *VAR_10;

 if (VAR_6 == 0)
  return (((void*)0));

 VAR_10 = FUNC_1(sizeof (txg_stat_t), VAR_1);

 FUNC_2(VAR_7, VAR_3, VAR_0, VAR_2);
 FUNC_5(VAR_7->spa_root_vdev, &VAR_10->vs1);
 FUNC_3(VAR_7, VAR_3, VAR_0);

 VAR_10->txg = VAR_8;
 VAR_10->ndirty = VAR_9->dp_dirty_pertxg[VAR_8 & VAR_4];

 FUNC_4(VAR_7, VAR_8, VAR_5, FUNC_0());

 return (VAR_10);
}
