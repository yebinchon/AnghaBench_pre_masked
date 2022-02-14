
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ vdev_id; int vdev_children; scalar_t__ vdev_resilver_txg; TYPE_1__** vdev_child; int * vdev_ops; scalar_t__ vdev_guid; struct TYPE_11__* vdev_parent; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_12__ {int spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_10__ {scalar_t__ vdev_guid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_6(spa_t *VAR_6)
{
 vdev_t *VAR_7, *VAR_8, *VAR_9;
 uint64_t VAR_10, VAR_11, VAR_12, VAR_13;

 FUNC_1(VAR_6, VAR_3, VAR_1, VAR_2);

 while ((VAR_7 = FUNC_4(VAR_6->spa_root_vdev)) != ((void*)0)) {
  VAR_8 = VAR_7->vdev_parent;
  VAR_9 = VAR_8->vdev_parent;
  VAR_10 = VAR_7->vdev_guid;
  VAR_12 = VAR_8->vdev_guid;
  VAR_13 = VAR_9->vdev_guid;
  VAR_11 = 0;





  if (VAR_9->vdev_ops == &VAR_5 && VAR_8->vdev_id == 0 &&
      VAR_9->vdev_children == 2) {
   FUNC_0(VAR_8->vdev_ops == &VAR_4);
   VAR_11 = VAR_9->vdev_child[1]->vdev_guid;
  }
  FUNC_0(VAR_7->vdev_resilver_txg == 0 || !FUNC_5(VAR_7));

  FUNC_2(VAR_6, VAR_3, VAR_1);
  if (FUNC_3(VAR_6, VAR_10, VAR_12, VAR_0) != 0)
   return;
  if (VAR_11 && FUNC_3(VAR_6, VAR_11, VAR_13, VAR_0) != 0)
   return;
  FUNC_1(VAR_6, VAR_3, VAR_1, VAR_2);
 }

 FUNC_2(VAR_6, VAR_3, VAR_1);
}
