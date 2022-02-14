
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bt_elem_size; int bt_num_nodes; } ;
typedef TYPE_1__ zfs_btree_t ;
struct TYPE_8__ {int bth_core; } ;
typedef TYPE_2__ zfs_btree_hdr_t ;
typedef int zfs_btree_core_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(zfs_btree_t *VAR_2, zfs_btree_hdr_t *VAR_3)
{
 VAR_2->bt_num_nodes--;
 if (!VAR_3->bth_core) {
  FUNC_0(VAR_1, VAR_3);
 } else {
  FUNC_1(VAR_3, sizeof (zfs_btree_core_t) +
      VAR_0 * VAR_2->bt_elem_size);
 }
}
