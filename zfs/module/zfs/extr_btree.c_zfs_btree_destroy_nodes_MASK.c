
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bt_height; int * bt_bulk; scalar_t__ bt_num_elems; int * bt_root; } ;
typedef TYPE_1__ zfs_btree_t ;
typedef int zfs_btree_index_t ;


 int VAR_0 ;
 int * FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int) ;
 void* FUNC_2 (TYPE_1__*,int *) ;
 void* FUNC_3 (TYPE_1__*,int *,int *,int ) ;
 int VAR_1 ;

void *
FUNC_4(zfs_btree_t *VAR_2, zfs_btree_index_t **VAR_3)
{
 if (*VAR_3 == ((void*)0)) {
  if (VAR_2->bt_height == -1)
   return (((void*)0));
  *VAR_3 = FUNC_0(sizeof (**VAR_3), VAR_0);
  return (FUNC_2(VAR_2, *VAR_3));
 }

 void *VAR_4 = FUNC_3(VAR_2, *VAR_3, *VAR_3,
     VAR_1);
 if (VAR_4 == ((void*)0)) {
  VAR_2->bt_root = ((void*)0);
  VAR_2->bt_height = -1;
  VAR_2->bt_num_elems = 0;
  FUNC_1(*VAR_3, sizeof (**VAR_3));
  VAR_2->bt_bulk = ((void*)0);
 }
 return (VAR_4);
}
