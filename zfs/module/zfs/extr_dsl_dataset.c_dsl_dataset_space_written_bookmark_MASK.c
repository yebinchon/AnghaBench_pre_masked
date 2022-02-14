
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zbm_flags; } ;
typedef TYPE_1__ zfs_bookmark_phys_t ;
typedef int uint64_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *,int *,int *,int *) ;

int
FUNC_2(zfs_bookmark_phys_t *VAR_2,
    dsl_dataset_t *VAR_3, uint64_t *VAR_4, uint64_t *VAR_5, uint64_t *VAR_6)
{
 if (!(VAR_2->zbm_flags & VAR_1))
  return (FUNC_0(VAR_0));
 return (FUNC_1(VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6));
}
