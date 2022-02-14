
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfs_btree_t ;
struct TYPE_5__ {int bth_count; scalar_t__ bth_core; } ;
typedef TYPE_1__ zfs_btree_hdr_t ;
struct TYPE_6__ {TYPE_1__** btc_children; } ;
typedef TYPE_2__ zfs_btree_core_t ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(zfs_btree_t *VAR_0, zfs_btree_hdr_t *VAR_1)
{
 if (VAR_1->bth_core) {
  zfs_btree_core_t *VAR_2 = (zfs_btree_core_t *)VAR_1;
  for (int VAR_3 = 0; VAR_3 <= VAR_1->bth_count; VAR_3++) {
   FUNC_1(VAR_0, VAR_2->btc_children[VAR_3]);
  }
 }

 FUNC_0(VAR_0, VAR_1);
}
