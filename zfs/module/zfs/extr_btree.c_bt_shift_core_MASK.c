
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t bt_elem_size; } ;
typedef TYPE_2__ zfs_btree_t ;
typedef int zfs_btree_hdr_t ;
struct TYPE_6__ {int bth_core; } ;
struct TYPE_8__ {int ** btc_children; int ** btc_elems; TYPE_1__ btc_hdr; } ;
typedef TYPE_3__ zfs_btree_core_t ;
typedef int * uint8_t ;
typedef size_t uint64_t ;
typedef enum bt_shift_shape { ____Placeholder_bt_shift_shape } bt_shift_shape ;
typedef enum bt_shift_direction { ____Placeholder_bt_shift_direction } bt_shift_direction ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int **,int **,size_t) ;

__attribute__((used)) static inline void
FUNC_2(zfs_btree_t *VAR_2, zfs_btree_core_t *VAR_3, uint64_t VAR_4,
    uint64_t VAR_5, uint64_t VAR_6, enum bt_shift_shape VAR_7,
    enum bt_shift_direction VAR_8)
{
 size_t VAR_9 = VAR_2->bt_elem_size;
 FUNC_0(VAR_3->btc_hdr.bth_core);

 uint8_t *VAR_10 = VAR_3->btc_elems + VAR_4 * VAR_9;
 int VAR_11 = (VAR_8 == VAR_0 ? -1 : +1);
 uint8_t *VAR_12 = VAR_10 + VAR_11 * VAR_6 * VAR_9;
 uint64_t VAR_13 = VAR_5;
 FUNC_1(VAR_10, VAR_12, VAR_13 * VAR_9);

 zfs_btree_hdr_t **VAR_14 = VAR_3->btc_children + VAR_4 +
     (VAR_7 == VAR_1 ? 0 : 1);
 zfs_btree_hdr_t **VAR_15 = (VAR_8 == VAR_0 ? VAR_14 - VAR_6 :
     VAR_14 + VAR_6);
 uint64_t VAR_16 = VAR_5 + (VAR_7 == VAR_1 ? 1 : 0);
 FUNC_1(VAR_14, VAR_15, VAR_16 * sizeof (*VAR_14));
}
