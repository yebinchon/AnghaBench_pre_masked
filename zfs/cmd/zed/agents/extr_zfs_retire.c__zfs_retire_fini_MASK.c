
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zrd_hdl; } ;
typedef TYPE_1__ zfs_retire_data_t ;
typedef int fmd_hdl_t ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;

void
FUNC_4(fmd_hdl_t *VAR_0)
{
 zfs_retire_data_t *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 != ((void*)0)) {
  FUNC_3(VAR_0, VAR_1);
  FUNC_2(VAR_1->zrd_hdl);
  FUNC_0(VAR_0, VAR_1, sizeof (zfs_retire_data_t));
 }
}
