
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zfs_btree_t ;
typedef int zfs_btree_index_t ;
struct TYPE_7__ {TYPE_2__* vdev_initialize_tree; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_8__ {int rt_root; } ;
typedef TYPE_2__ range_tree_t ;
typedef int range_seg_t ;
typedef int abd_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int,int ,int *) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(vdev_t *VAR_2, abd_t *VAR_3)
{
 range_tree_t *VAR_4 = VAR_2->vdev_initialize_tree;
 zfs_btree_t *VAR_5 = &VAR_4->rt_root;
 zfs_btree_index_t VAR_6;

 for (range_seg_t *VAR_7 = FUNC_4(VAR_5, &VAR_6); VAR_7 != ((void*)0);
     VAR_7 = FUNC_5(VAR_5, &VAR_6, &VAR_6)) {
  uint64_t VAR_8 = FUNC_1(VAR_7, VAR_4) - FUNC_2(VAR_7, VAR_4);


  uint64_t VAR_9 =
      ((VAR_8 - 1) / VAR_1) + 1;

  for (uint64_t VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
   int VAR_11;

   VAR_11 = FUNC_3(VAR_2,
       VAR_0 + FUNC_2(VAR_7, VAR_4) +
       (VAR_10 * VAR_1),
       FUNC_0(VAR_8 - (VAR_10 * VAR_1),
       VAR_1), VAR_3);
   if (VAR_11 != 0)
    return (VAR_11);
  }
 }
 return (0);
}
