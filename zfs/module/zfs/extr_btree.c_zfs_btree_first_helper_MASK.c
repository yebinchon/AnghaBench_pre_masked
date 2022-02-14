
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* btl_elems; } ;
typedef TYPE_1__ zfs_btree_leaf_t ;
struct TYPE_8__ {int bti_before; scalar_t__ bti_offset; TYPE_3__* bti_node; } ;
typedef TYPE_2__ zfs_btree_index_t ;
struct TYPE_9__ {scalar_t__ bth_core; } ;
typedef TYPE_3__ zfs_btree_hdr_t ;
struct TYPE_10__ {TYPE_3__** btc_children; } ;
typedef TYPE_4__ zfs_btree_core_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void *
FUNC_1(zfs_btree_hdr_t *VAR_1, zfs_btree_index_t *VAR_2)
{
 zfs_btree_hdr_t *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->bth_core; VAR_3 =
     ((zfs_btree_core_t *)VAR_3)->btc_children[0])
  ;

 FUNC_0(!VAR_3->bth_core);
 zfs_btree_leaf_t *VAR_4 = (zfs_btree_leaf_t *)VAR_3;
 if (VAR_2 != ((void*)0)) {
  VAR_2->bti_node = VAR_3;
  VAR_2->bti_offset = 0;
  VAR_2->bti_before = VAR_0;
 }
 return (&VAR_4->btl_elems[0]);
}
