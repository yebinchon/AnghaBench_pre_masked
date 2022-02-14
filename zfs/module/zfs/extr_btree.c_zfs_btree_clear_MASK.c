
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bt_height; int * bt_bulk; scalar_t__ bt_num_nodes; int * bt_root; scalar_t__ bt_num_elems; } ;
typedef TYPE_1__ zfs_btree_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int *) ;

void
FUNC_2(zfs_btree_t *VAR_0)
{
 if (VAR_0->bt_root == ((void*)0)) {
  FUNC_0(VAR_0->bt_num_elems);
  return;
 }

 FUNC_1(VAR_0, VAR_0->bt_root);
 VAR_0->bt_num_elems = 0;
 VAR_0->bt_root = ((void*)0);
 VAR_0->bt_num_nodes = 0;
 VAR_0->bt_height = -1;
 VAR_0->bt_bulk = ((void*)0);
}
