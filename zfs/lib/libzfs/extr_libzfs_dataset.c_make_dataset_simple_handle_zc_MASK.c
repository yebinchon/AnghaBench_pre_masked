
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zpool_hdl; int zfs_type; int zfs_head_type; int zfs_name; int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_9__ {int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

zfs_handle_t *
FUNC_3(zfs_handle_t *VAR_1, zfs_cmd_t *VAR_2)
{
 zfs_handle_t *VAR_3 = FUNC_0(1, sizeof (zfs_handle_t));

 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_3->zfs_hdl = VAR_1->zfs_hdl;
 (void) FUNC_1(VAR_3->zfs_name, VAR_2->zc_name, sizeof (VAR_3->zfs_name));
 VAR_3->zfs_head_type = VAR_1->zfs_type;
 VAR_3->zfs_type = VAR_0;
 VAR_3->zpool_hdl = FUNC_2(VAR_3);

 return (VAR_3);
}
