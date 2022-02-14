
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int zfs_btree_index_t ;
struct TYPE_9__ {int rt_root; } ;
typedef TYPE_1__ range_tree_t ;
typedef int range_seg_t ;


 int FUNC_0 (int ,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int * FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *,int *) ;

void
FUNC_5(range_tree_t *VAR_0, range_tree_t *VAR_1,
    range_tree_t *VAR_2)
{
 zfs_btree_index_t VAR_3;
 for (range_seg_t *VAR_4 = FUNC_3(&VAR_0->rt_root, &VAR_3); VAR_4;
     VAR_4 = FUNC_4(&VAR_0->rt_root, &VAR_3, &VAR_3)) {
  FUNC_0(FUNC_2(VAR_4, VAR_0),
      FUNC_1(VAR_4, VAR_0), VAR_1, VAR_2);
 }
}
