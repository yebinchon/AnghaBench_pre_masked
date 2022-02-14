
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ vdev_mmp_pending; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_12__ {scalar_t__ mmp_leaf_last_gen; TYPE_2__* mmp_last_leaf; int mmp_io_lock; } ;
struct TYPE_15__ {int list_head; } ;
struct TYPE_14__ {scalar_t__ spa_leaf_list_gen; TYPE_1__ spa_mmp; TYPE_8__ spa_leaf_list; } ;
typedef TYPE_3__ spa_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (TYPE_8__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_8(spa_t *VAR_5)
{
 vdev_t *VAR_6;
 vdev_t *VAR_7;
 int VAR_8 = 0;

 FUNC_0(FUNC_1(&VAR_5->spa_mmp.mmp_io_lock));
 FUNC_0(FUNC_6(VAR_5, VAR_4, VAR_3));
 FUNC_0(FUNC_4(&VAR_5->spa_leaf_list.list_head) == VAR_0);
 FUNC_0(!FUNC_3(&VAR_5->spa_leaf_list));

 if (VAR_5->spa_mmp.mmp_leaf_last_gen != VAR_5->spa_leaf_list_gen) {
  VAR_5->spa_mmp.mmp_last_leaf = FUNC_2(&VAR_5->spa_leaf_list);
  VAR_5->spa_mmp.mmp_leaf_last_gen = VAR_5->spa_leaf_list_gen;
 }

 VAR_6 = VAR_5->spa_mmp.mmp_last_leaf;
 if (VAR_6 == ((void*)0))
  VAR_6 = FUNC_2(&VAR_5->spa_leaf_list);
 VAR_7 = VAR_6;

 do {
  VAR_6 = FUNC_5(&VAR_5->spa_leaf_list, VAR_6);
  if (VAR_6 == ((void*)0))
   VAR_6 = FUNC_2(&VAR_5->spa_leaf_list);

  if (!FUNC_7(VAR_6)) {
   VAR_8 |= VAR_1;
  } else if (VAR_6->vdev_mmp_pending != 0) {
   VAR_8 |= VAR_2;
  } else {
   VAR_5->spa_mmp.mmp_last_leaf = VAR_6;
   return (0);
  }
 } while (VAR_6 != VAR_7);

 FUNC_0(VAR_8);

 return (VAR_8);
}
