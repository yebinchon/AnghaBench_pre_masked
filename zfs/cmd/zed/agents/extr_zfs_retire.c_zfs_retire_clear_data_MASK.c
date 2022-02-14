
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* zrr_next; } ;
typedef TYPE_1__ zfs_retire_repaired_t ;
struct TYPE_6__ {TYPE_1__* zrd_repaired; } ;
typedef TYPE_2__ zfs_retire_data_t ;
typedef int fmd_hdl_t ;


 int FUNC_0 (int *,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(fmd_hdl_t *VAR_0, zfs_retire_data_t *VAR_1)
{
 zfs_retire_repaired_t *VAR_2;

 while ((VAR_2 = VAR_1->zrd_repaired) != ((void*)0)) {
  VAR_1->zrd_repaired = VAR_2->zrr_next;
  FUNC_0(VAR_0, VAR_2, sizeof (zfs_retire_repaired_t));
 }
}
