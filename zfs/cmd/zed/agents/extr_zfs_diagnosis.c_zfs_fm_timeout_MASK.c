
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zc_remove_timer; } ;
typedef TYPE_1__ zfs_case_t ;
typedef scalar_t__ id_t ;
typedef int fmd_hdl_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,char*,int ) ;

__attribute__((used)) static void
FUNC_1(fmd_hdl_t *VAR_1, id_t VAR_2, void *VAR_3)
{
 zfs_case_t *VAR_4 = VAR_3;

 if (VAR_2 == VAR_4->zc_remove_timer)
  FUNC_0(VAR_1, VAR_4, "fault.fs.zfs.vdev.io", VAR_0);
}
