
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bt_height; int * bt_root; } ;
typedef TYPE_1__ zfs_btree_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_2(zfs_btree_t *VAR_0)
{
 FUNC_0(VAR_0->bt_height == -1, VAR_0->bt_root == ((void*)0));
 if (VAR_0->bt_height == -1) {
  return;
 }

 FUNC_1(VAR_0, VAR_0->bt_root);
}
