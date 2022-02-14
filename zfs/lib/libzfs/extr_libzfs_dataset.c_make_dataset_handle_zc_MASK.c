
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_10__ {int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int libzfs_handle_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int) ;

zfs_handle_t *
FUNC_4(libzfs_handle_t *VAR_0, zfs_cmd_t *VAR_1)
{
 zfs_handle_t *VAR_2 = FUNC_0(1, sizeof (zfs_handle_t));

 if (VAR_2 == ((void*)0))
  return (((void*)0));

 VAR_2->zfs_hdl = VAR_0;
 (void) FUNC_3(VAR_2->zfs_name, VAR_1->zc_name, sizeof (VAR_2->zfs_name));
 if (FUNC_2(VAR_2, VAR_1) == -1) {
  FUNC_1(VAR_2);
  return (((void*)0));
 }
 return (VAR_2);
}
