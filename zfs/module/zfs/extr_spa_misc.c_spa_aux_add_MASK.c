
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int vdev_guid; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_9__ {int aux_count; int aux_guid; } ;
typedef TYPE_2__ spa_aux_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,TYPE_2__*,int *) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (int,int ) ;

void
FUNC_3(vdev_t *VAR_1, avl_tree_t *VAR_2)
{
 avl_index_t VAR_3;
 spa_aux_t VAR_4;
 spa_aux_t *VAR_5;

 VAR_4.aux_guid = VAR_1->vdev_guid;
 if ((VAR_5 = FUNC_0(VAR_2, &VAR_4, &VAR_3)) != ((void*)0)) {
  VAR_5->aux_count++;
 } else {
  VAR_5 = FUNC_2(sizeof (spa_aux_t), VAR_0);
  VAR_5->aux_guid = VAR_1->vdev_guid;
  VAR_5->aux_count = 1;
  FUNC_1(VAR_2, VAR_5, VAR_3);
 }
}
