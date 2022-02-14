
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__* vs_ops; scalar_t__* vs_bytes; } ;
struct TYPE_15__ {scalar_t__* vs_ops; scalar_t__* vs_bytes; } ;
struct TYPE_13__ {int ndirty; TYPE_1__ vs1; TYPE_4__ vs2; int txg; } ;
typedef TYPE_2__ txg_stat_t ;
struct TYPE_14__ {int spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 scalar_t__ VAR_6 ;

void
FUNC_7(spa_t *VAR_7, txg_stat_t *VAR_8)
{
 if (VAR_8 == ((void*)0))
  return;

 if (VAR_6 == 0) {
  FUNC_1(VAR_8, sizeof (txg_stat_t));
  return;
 }

 FUNC_2(VAR_7, VAR_2, VAR_0, VAR_1);
 FUNC_6(VAR_7->spa_root_vdev, &VAR_8->vs2);
 FUNC_3(VAR_7, VAR_2, VAR_0);

 FUNC_4(VAR_7, VAR_8->txg, VAR_3, FUNC_0());
 FUNC_5(VAR_7, VAR_8->txg,
     VAR_8->vs2.vs_bytes[VAR_4] - VAR_8->vs1.vs_bytes[VAR_4],
     VAR_8->vs2.vs_bytes[VAR_5] - VAR_8->vs1.vs_bytes[VAR_5],
     VAR_8->vs2.vs_ops[VAR_4] - VAR_8->vs1.vs_ops[VAR_4],
     VAR_8->vs2.vs_ops[VAR_5] - VAR_8->vs1.vs_ops[VAR_5],
     VAR_8->ndirty);

 FUNC_1(VAR_8, sizeof (txg_stat_t));
}
