
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bt_height; int bt_root; int bt_num_elems; } ;
typedef TYPE_1__ zfs_btree_t ;
typedef int zfs_btree_index_t ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int *) ;

void *
FUNC_2(zfs_btree_t *VAR_0, zfs_btree_index_t *VAR_1)
{
 if (VAR_0->bt_height == -1) {
  FUNC_0(VAR_0->bt_num_elems);
  return (((void*)0));
 }
 return (FUNC_1(VAR_0->bt_root, VAR_1));
}
