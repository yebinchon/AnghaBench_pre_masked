
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int bt_elem_size; } ;
typedef TYPE_1__ zfs_btree_t ;
struct TYPE_10__ {void* btl_elems; } ;
typedef TYPE_2__ zfs_btree_leaf_t ;
struct TYPE_11__ {int bti_offset; int bti_before; TYPE_4__* bti_node; } ;
typedef TYPE_3__ zfs_btree_index_t ;
struct TYPE_12__ {size_t bth_count; scalar_t__ bth_core; } ;
typedef TYPE_4__ zfs_btree_hdr_t ;
struct TYPE_13__ {TYPE_4__** btc_children; } ;
typedef TYPE_5__ zfs_btree_core_t ;


 int VAR_0 ;

__attribute__((used)) static void *
FUNC_0(zfs_btree_t *VAR_1, zfs_btree_hdr_t *VAR_2,
    zfs_btree_index_t *VAR_3)
{
 zfs_btree_hdr_t *VAR_4;

 for (VAR_4 = VAR_2; VAR_4->bth_core; VAR_4 =
     ((zfs_btree_core_t *)VAR_4)->btc_children[VAR_4->bth_count])
  ;

 zfs_btree_leaf_t *VAR_5 = (zfs_btree_leaf_t *)VAR_4;
 if (VAR_3 != ((void*)0)) {
  VAR_3->bti_node = VAR_4;
  VAR_3->bti_offset = VAR_4->bth_count - 1;
  VAR_3->bti_before = VAR_0;
 }
 return (VAR_5->btl_elems + (VAR_4->bth_count - 1) * VAR_1->bt_elem_size);
}
