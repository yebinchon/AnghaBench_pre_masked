
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * zfs_recvd_props; int * zfs_hdl; int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_10__ {char* member_0; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_2__*,int **) ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(zfs_handle_t *VAR_3)
{
 libzfs_handle_t *VAR_4 = VAR_3->zfs_hdl;
 nvlist_t *VAR_5;
 zfs_cmd_t VAR_6 = {"\0"};
 int VAR_7;

 if (FUNC_2(VAR_4, &VAR_6, 0) != 0)
  return (-1);

 (void) FUNC_1(VAR_6.zc_name, VAR_3->zfs_name, sizeof (VAR_6.zc_name));

 while (FUNC_6(VAR_4, VAR_1, &VAR_6) != 0) {
  if (VAR_2 == VAR_0) {
   if (FUNC_3(VAR_4, &VAR_6) != 0) {
    return (-1);
   }
  } else {
   FUNC_4(&VAR_6);
   return (-1);
  }
 }

 VAR_7 = FUNC_5(VAR_3->zfs_hdl, &VAR_6, &VAR_5);
 FUNC_4(&VAR_6);
 if (VAR_7 != 0)
  return (-1);

 FUNC_0(VAR_3->zfs_recvd_props);
 VAR_3->zfs_recvd_props = VAR_5;

 return (0);
}
