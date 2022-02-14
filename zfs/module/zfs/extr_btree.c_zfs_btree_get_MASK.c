
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int bt_elem_size; } ;
typedef TYPE_2__ zfs_btree_t ;
struct TYPE_10__ {void* btl_elems; } ;
typedef TYPE_3__ zfs_btree_leaf_t ;
struct TYPE_11__ {int bti_offset; TYPE_1__* bti_node; int bti_before; } ;
typedef TYPE_4__ zfs_btree_index_t ;
struct TYPE_12__ {void* btc_elems; } ;
typedef TYPE_5__ zfs_btree_core_t ;
struct TYPE_8__ {int bth_core; } ;


 int FUNC_0 (int) ;

void *
FUNC_1(zfs_btree_t *VAR_0, zfs_btree_index_t *VAR_1)
{
 FUNC_0(!VAR_1->bti_before);
 if (!VAR_1->bti_node->bth_core) {
  zfs_btree_leaf_t *VAR_2 = (zfs_btree_leaf_t *)VAR_1->bti_node;
  return (VAR_2->btl_elems + VAR_1->bti_offset * VAR_0->bt_elem_size);
 }
 FUNC_0(VAR_1->bti_node->bth_core);
 zfs_btree_core_t *VAR_3 = (zfs_btree_core_t *)VAR_1->bti_node;
 return (VAR_3->btc_elems + VAR_1->bti_offset * VAR_0->bt_elem_size);
}
