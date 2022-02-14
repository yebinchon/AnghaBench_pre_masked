
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_btree_t ;
typedef int zfs_btree_index_t ;
typedef scalar_t__ uint64_t ;
typedef int range_tree_t ;
typedef int range_seg_t ;
typedef int range_seg_max_t ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int * FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static range_seg_t *
FUNC_4(zfs_btree_t *VAR_0, range_tree_t *VAR_1, uint64_t VAR_2,
    uint64_t VAR_3, zfs_btree_index_t *VAR_4)
{
 range_seg_t *VAR_5;
 range_seg_max_t VAR_6;

 FUNC_1(&VAR_6, VAR_1, VAR_2);
 FUNC_0(&VAR_6, VAR_1, VAR_2 + VAR_3);

 VAR_5 = FUNC_2(VAR_0, &VAR_6, VAR_4);
 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_3(VAR_0, VAR_4, VAR_4);
 }

 return (VAR_5);
}
