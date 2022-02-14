
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_7__ {int zc_cookie; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int zc ;
typedef int msg ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_2__*) ;
 int FUNC_5 (int *,int ,char*) ;

int
FUNC_6(zpool_handle_t *VAR_3)
{
 zfs_cmd_t VAR_4;
 char VAR_5[1024];
 libzfs_handle_t *VAR_6 = VAR_3->zpool_hdl;

 (void) FUNC_2(VAR_5, sizeof (VAR_5),
     FUNC_1(VAR_0, "cannot cancel removal"));

 FUNC_0(&VAR_4, sizeof (VAR_4));
 (void) FUNC_3(VAR_4.zc_name, VAR_3->zpool_name, sizeof (VAR_4.zc_name));
 VAR_4.zc_cookie = 1;

 if (FUNC_4(VAR_6, VAR_1, &VAR_4) == 0)
  return (0);

 return (FUNC_5(VAR_6, VAR_2, VAR_5));
}
