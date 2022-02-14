
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_btree_t ;
typedef scalar_t__ uint64_t ;
typedef int range_seg_t ;
struct TYPE_3__ {int ms_allocatable; int ms_allocatable_by_size; } ;
typedef TYPE_1__ metaslab_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;

uint64_t
FUNC_5(metaslab_t *VAR_0)
{
 zfs_btree_t *VAR_1 = &VAR_0->ms_allocatable_by_size;
 range_seg_t *VAR_2;

 if (VAR_1 == ((void*)0))
  return (0);
 if (FUNC_4(VAR_1) == 0)
  FUNC_0(VAR_0->ms_allocatable);

 VAR_2 = FUNC_3(VAR_1, ((void*)0));
 if (VAR_2 == ((void*)0))
  return (0);

 return (FUNC_1(VAR_2, VAR_0->ms_allocatable) - FUNC_2(VAR_2,
     VAR_0->ms_allocatable));
}
