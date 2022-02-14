
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * zrd_hdl; } ;
typedef TYPE_1__ zfs_retire_data_t ;
typedef int libzfs_handle_t ;
typedef int fmd_hdl_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;

void
FUNC_5(fmd_hdl_t *VAR_3)
{
 zfs_retire_data_t *VAR_4;
 libzfs_handle_t *VAR_5;

 if ((VAR_5 = FUNC_4()) == ((void*)0))
  return;

 if (FUNC_0(VAR_3, VAR_0, &VAR_2) != 0) {
  FUNC_3(VAR_5);
  return;
 }

 VAR_4 = FUNC_2(VAR_3, sizeof (zfs_retire_data_t), VAR_1);
 VAR_4->zrd_hdl = VAR_5;

 FUNC_1(VAR_3, VAR_4);
}
