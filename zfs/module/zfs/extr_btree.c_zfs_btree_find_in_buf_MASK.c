
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bt_elem_size; int (* bt_compar ) (void*,void const*) ;} ;
typedef TYPE_1__ zfs_btree_t ;
struct TYPE_6__ {int bti_offset; int bti_before; } ;
typedef TYPE_2__ zfs_btree_index_t ;
typedef void uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,void const*) ;

__attribute__((used)) static void *
FUNC_2(zfs_btree_t *VAR_2, uint8_t *VAR_3, uint64_t VAR_4,
    const void *VAR_5, zfs_btree_index_t *VAR_6)
{
 uint64_t VAR_7 = VAR_4;
 uint64_t VAR_8 = 0;
 while (VAR_7 > VAR_8) {
  uint64_t VAR_9 = (VAR_8 + VAR_7) / 2;
  uint8_t *VAR_10 = VAR_3 + VAR_9 * VAR_2->bt_elem_size;
  int VAR_11 = VAR_2->bt_compar(VAR_10, VAR_5);
  if (VAR_11 == -1) {
   VAR_8 = VAR_9 + 1;
  } else if (VAR_11 == 1) {
   VAR_7 = VAR_9;
  } else {
   FUNC_0(VAR_11);
   VAR_6->bti_offset = VAR_9;
   VAR_6->bti_before = VAR_0;
   return (VAR_10);
  }
 }

 VAR_6->bti_offset = VAR_7;
 VAR_6->bti_before = VAR_1;
 return (((void*)0));
}
