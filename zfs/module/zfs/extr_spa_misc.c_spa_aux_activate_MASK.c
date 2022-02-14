
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vdev_spa; int vdev_guid; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_7__ {unsigned long long aux_pool; int aux_guid; } ;
typedef TYPE_2__ spa_aux_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*,int *) ;
 unsigned long long FUNC_2 (int ) ;

void
FUNC_3(vdev_t *VAR_0, avl_tree_t *VAR_1)
{
 spa_aux_t VAR_2, *VAR_3;
 avl_index_t VAR_4;

 VAR_2.aux_guid = VAR_0->vdev_guid;
 VAR_3 = FUNC_1(VAR_1, &VAR_2, &VAR_4);
 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_3->aux_pool == 0ULL);

 VAR_3->aux_pool = FUNC_2(VAR_0->vdev_spa);
}
