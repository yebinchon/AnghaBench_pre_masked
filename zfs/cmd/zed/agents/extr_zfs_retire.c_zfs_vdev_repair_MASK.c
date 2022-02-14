
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ zrr_pool; scalar_t__ zrr_vdev; struct TYPE_5__* zrr_next; } ;
typedef TYPE_1__ zfs_retire_repaired_t ;
struct TYPE_6__ {TYPE_1__* zrd_repaired; } ;
typedef TYPE_2__ zfs_retire_data_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef int fmd_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*) ;

__attribute__((used)) static void
FUNC_4(fmd_hdl_t *VAR_3, nvlist_t *VAR_4)
{
 zfs_retire_data_t *VAR_5 = FUNC_2(VAR_3);
 zfs_retire_repaired_t *VAR_6;
 uint64_t VAR_7, VAR_8;
 if (FUNC_3(VAR_4, VAR_1,
     &VAR_7) != 0 || FUNC_3(VAR_4,
     VAR_2, &VAR_8) != 0)
  return;
 for (VAR_6 = VAR_5->zrd_repaired; VAR_6 != ((void*)0); VAR_6 = VAR_6->zrr_next) {
  if (VAR_6->zrr_pool == VAR_7 &&
      VAR_6->zrr_vdev == VAR_8)
   return;
 }

 VAR_6 = FUNC_0(VAR_3, sizeof (zfs_retire_repaired_t), VAR_0);
 VAR_6->zrr_next = VAR_5->zrd_repaired;
 VAR_6->zrr_pool = VAR_7;
 VAR_6->zrr_vdev = VAR_8;
 VAR_5->zrd_repaired = VAR_6;

 FUNC_1(VAR_3, "marking repaired vdev %llu on pool %llu",
     VAR_8, VAR_7);
}
