
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_6__ {char* member_0; int zc_obj; int zc_cookie; scalar_t__ zc_guid; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int vdev_aux_t ;
typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int msg ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_2__*) ;
 int FUNC_4 (int *,int ,char*) ;

int
FUNC_5(zpool_handle_t *VAR_4, uint64_t VAR_5, vdev_aux_t VAR_6)
{
 zfs_cmd_t VAR_7 = {"\0"};
 char VAR_8[1024];
 libzfs_handle_t *VAR_9 = VAR_4->zpool_hdl;

 (void) FUNC_1(VAR_8, sizeof (VAR_8),
     FUNC_0(VAR_0, "cannot degrade %llu"), (u_longlong_t)VAR_5);

 (void) FUNC_2(VAR_7.zc_name, VAR_4->zpool_name, sizeof (VAR_7.zc_name));
 VAR_7.zc_guid = VAR_5;
 VAR_7.zc_cookie = VAR_1;
 VAR_7.zc_obj = VAR_6;

 if (FUNC_3(VAR_9, VAR_2, &VAR_7) == 0)
  return (0);

 return (FUNC_4(VAR_9, VAR_3, VAR_8));
}
