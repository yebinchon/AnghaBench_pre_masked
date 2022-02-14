
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zfs_btree_index_t ;
typedef int uint64_t ;
struct TYPE_12__ {TYPE_3__* rt_arg; } ;
typedef TYPE_1__ range_tree_t ;
typedef int range_seg_t ;
struct TYPE_13__ {int* ms_lbas; int ms_size; int ms_start; int ms_allocatable_by_size; TYPE_1__* ms_allocatable; int ms_lock; } ;
typedef TYPE_2__ metaslab_t ;
struct TYPE_14__ {int mra_floor_shift; } ;
typedef TYPE_3__ metaslab_rt_arg_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int *,TYPE_1__*,int ,int,int *) ;
 int FUNC_5 (TYPE_1__*,int*,int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int * FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static uint64_t
FUNC_13(metaslab_t *VAR_5, uint64_t VAR_6)
{







 uint64_t VAR_7 = VAR_6 & -VAR_6;
 uint64_t *VAR_8 = &VAR_5->ms_lbas[FUNC_3(VAR_7) - 1];
 range_tree_t *VAR_9 = VAR_5->ms_allocatable;
 int VAR_10 = FUNC_8(VAR_9) * 100 / VAR_5->ms_size;
 uint64_t VAR_11;

 FUNC_0(FUNC_2(&VAR_5->ms_lock));





 if (FUNC_6(VAR_5) < VAR_0 ||
     VAR_10 < VAR_1) {
  VAR_11 = -1;
 } else {
  VAR_11 = FUNC_5(VAR_9,
      VAR_8, VAR_6, VAR_2);
 }

 if (VAR_11 == -1) {
  range_seg_t *VAR_12;
  if (FUNC_12(&VAR_5->ms_allocatable_by_size) == 0)
   FUNC_7(VAR_5->ms_allocatable);
  if (VAR_3) {

   VAR_12 = FUNC_11(&VAR_5->ms_allocatable_by_size, ((void*)0));
  } else {
   zfs_btree_index_t VAR_13;
   VAR_12 = FUNC_4(&VAR_5->ms_allocatable_by_size,
       VAR_9, VAR_5->ms_start, VAR_6, &VAR_13);
  }
  if (VAR_12 != ((void*)0) && FUNC_10(VAR_12, VAR_9) + VAR_6 <= FUNC_9(VAR_12,
      VAR_9)) {
   VAR_11 = FUNC_10(VAR_12, VAR_9);
   *VAR_8 = VAR_11 + VAR_6;
  }
 }

 return (VAR_11);
}
