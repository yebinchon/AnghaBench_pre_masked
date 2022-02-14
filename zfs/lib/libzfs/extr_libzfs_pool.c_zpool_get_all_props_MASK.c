
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zpool_props; int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_10__ {char* member_0; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int libzfs_handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*,int *) ;
 scalar_t__ FUNC_5 (int *,int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(zpool_handle_t *VAR_3)
{
 zfs_cmd_t VAR_4 = {"\0"};
 libzfs_handle_t *VAR_5 = VAR_3->zpool_hdl;

 (void) FUNC_0(VAR_4.zc_name, VAR_3->zpool_name, sizeof (VAR_4.zc_name));

 if (FUNC_1(VAR_5, &VAR_4, 0) != 0)
  return (-1);

 while (FUNC_5(VAR_5, VAR_1, &VAR_4) != 0) {
  if (VAR_2 == VAR_0) {
   if (FUNC_2(VAR_5, &VAR_4) != 0) {
    FUNC_3(&VAR_4);
    return (-1);
   }
  } else {
   FUNC_3(&VAR_4);
   return (-1);
  }
 }

 if (FUNC_4(VAR_5, &VAR_4, &VAR_3->zpool_props) != 0) {
  FUNC_3(&VAR_4);
  return (-1);
 }

 FUNC_3(&VAR_4);

 return (0);
}
