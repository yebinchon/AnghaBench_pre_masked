
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfs_btree_index_t ;
struct TYPE_5__ {int rt_root; } ;
typedef TYPE_1__ range_tree_t ;
typedef int range_seg_t ;
typedef int int64_t ;
typedef int avl_tree_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *,int *) ;

void
FUNC_5(avl_tree_t *VAR_0, range_tree_t *VAR_1, int64_t VAR_2)
{
 zfs_btree_index_t VAR_3;

 for (range_seg_t *VAR_4 = FUNC_3(&VAR_1->rt_root, &VAR_3); VAR_4; VAR_4 =
     FUNC_4(&VAR_1->rt_root, &VAR_3, &VAR_3)) {
  FUNC_2(VAR_0, FUNC_1(VAR_4, VAR_1), FUNC_0(VAR_4,
      VAR_1), VAR_2);
 }
}
