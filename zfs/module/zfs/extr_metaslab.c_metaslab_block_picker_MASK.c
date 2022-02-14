
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zfs_btree_t ;
typedef int zfs_btree_index_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ rt_start; int rt_root; } ;
typedef TYPE_1__ range_tree_t ;
typedef int range_seg_t ;


 int * FUNC_0 (int *,TYPE_1__*,scalar_t__,scalar_t__,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 int * FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static uint64_t
FUNC_4(range_tree_t *VAR_1, uint64_t *VAR_2, uint64_t VAR_3,
    uint64_t VAR_4)
{
 if (*VAR_2 == 0)
  *VAR_2 = VAR_1->rt_start;
 zfs_btree_t *VAR_5 = &VAR_1->rt_root;
 zfs_btree_index_t VAR_6;
 range_seg_t *VAR_7 = FUNC_0(VAR_5, VAR_1, *VAR_2, VAR_3, &VAR_6);
 uint64_t VAR_8;
 int VAR_9 = 0;

 if (VAR_7 != ((void*)0))
  VAR_8 = FUNC_2(VAR_7, VAR_1);

 while (VAR_7 != ((void*)0) && (FUNC_2(VAR_7, VAR_1) - VAR_8 <=
     VAR_4 || VAR_9 < VAR_0)) {
  uint64_t VAR_10 = FUNC_2(VAR_7, VAR_1);
  if (VAR_10 + VAR_3 <= FUNC_1(VAR_7, VAR_1)) {
   *VAR_2 = VAR_10 + VAR_3;
   return (VAR_10);
  }
  VAR_7 = FUNC_3(VAR_5, &VAR_6, &VAR_6);
  VAR_9++;
 }

 *VAR_2 = 0;
 return (-1ULL);
}
