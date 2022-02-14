
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
struct TYPE_12__ {TYPE_2__* spa_root_vdev; int spa_activities_lock; } ;
typedef TYPE_3__ spa_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {int vdev_op_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int,int ) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(spa_t *VAR_6, boolean_t VAR_7, uint64_t VAR_8,
    boolean_t *VAR_9)
{
 FUNC_1(&VAR_6->spa_activities_lock);
 FUNC_2(VAR_6, VAR_4 | VAR_5, VAR_2, VAR_3);
 FUNC_0(&VAR_6->spa_activities_lock);

 vdev_t *VAR_10;
 if (VAR_7) {
  VAR_10 = FUNC_4(VAR_6, VAR_8, VAR_0);
  if (VAR_10 == ((void*)0) || !VAR_10->vdev_ops->vdev_op_leaf) {
   FUNC_3(VAR_6, VAR_4 | VAR_5, VAR_2);
   return (VAR_1);
  }
 } else {
  VAR_10 = VAR_6->spa_root_vdev;
 }

 *VAR_9 = FUNC_5(VAR_10);

 FUNC_3(VAR_6, VAR_4 | VAR_5, VAR_2);
 return (0);
}
