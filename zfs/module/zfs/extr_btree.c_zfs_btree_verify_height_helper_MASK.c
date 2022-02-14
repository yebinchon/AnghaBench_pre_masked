
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_btree_t ;
struct TYPE_4__ {int bth_count; int bth_core; } ;
typedef TYPE_1__ zfs_btree_hdr_t ;
struct TYPE_5__ {TYPE_1__** btc_children; } ;
typedef TYPE_2__ zfs_btree_core_t ;
typedef int uint64_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static uint64_t
FUNC_2(zfs_btree_t *VAR_0, zfs_btree_hdr_t *VAR_1,
    int64_t VAR_2)
{
 if (!VAR_1->bth_core) {
  FUNC_1(VAR_2);
  return (1);
 }

 FUNC_0(VAR_1->bth_core);
 zfs_btree_core_t *VAR_3 = (zfs_btree_core_t *)VAR_1;
 uint64_t VAR_4 = 1;
 for (int VAR_5 = 0; VAR_5 <= VAR_1->bth_count; VAR_5++) {
  VAR_4 += FUNC_2(VAR_0,
      VAR_3->btc_children[VAR_5], VAR_2 - 1);
 }
 return (VAR_4);
}
