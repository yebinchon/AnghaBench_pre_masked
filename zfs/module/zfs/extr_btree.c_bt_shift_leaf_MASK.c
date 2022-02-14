
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t bt_elem_size; } ;
typedef TYPE_2__ zfs_btree_t ;
struct TYPE_6__ {int bth_core; } ;
struct TYPE_8__ {int * btl_elems; TYPE_1__ btl_hdr; } ;
typedef TYPE_3__ zfs_btree_leaf_t ;
typedef int uint8_t ;
typedef size_t uint64_t ;
typedef enum bt_shift_direction { ____Placeholder_bt_shift_direction } bt_shift_direction ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,size_t) ;

__attribute__((used)) static inline void
FUNC_2(zfs_btree_t *VAR_1, zfs_btree_leaf_t *VAR_2, uint64_t VAR_3,
    uint64_t VAR_4, uint64_t VAR_5, enum bt_shift_direction VAR_6)
{
 size_t VAR_7 = VAR_1->bt_elem_size;
 FUNC_0(!VAR_2->btl_hdr.bth_core);

 uint8_t *VAR_8 = VAR_2->btl_elems + VAR_3 * VAR_7;
 int VAR_9 = (VAR_6 == VAR_0 ? -1 : +1);
 uint8_t *VAR_10 = VAR_8 + VAR_9 * VAR_5 * VAR_7;
 FUNC_1(VAR_8, VAR_10, VAR_4 * VAR_7);
}
