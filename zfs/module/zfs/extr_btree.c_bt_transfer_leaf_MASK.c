
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t bt_elem_size; } ;
typedef TYPE_2__ zfs_btree_t ;
struct TYPE_7__ {int bth_core; } ;
struct TYPE_9__ {scalar_t__ btl_elems; TYPE_1__ btl_hdr; } ;
typedef TYPE_3__ zfs_btree_leaf_t ;
typedef size_t uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,size_t) ;

__attribute__((used)) static inline void
FUNC_2(zfs_btree_t *VAR_0, zfs_btree_leaf_t *VAR_1, uint64_t VAR_2,
    uint64_t VAR_3, zfs_btree_leaf_t *VAR_4, uint64_t VAR_5)
{
 size_t VAR_6 = VAR_0->bt_elem_size;
 FUNC_0(!VAR_1->btl_hdr.bth_core);
 FUNC_0(!VAR_4->btl_hdr.bth_core);

 FUNC_1(VAR_1->btl_elems + VAR_2 * VAR_6, VAR_4->btl_elems + VAR_5 * VAR_6,
     VAR_3 * VAR_6);
}
