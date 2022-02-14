
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_8__ {int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int libzfs_handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(zfs_handle_t *VAR_3, zfs_cmd_t *VAR_4)
{
 libzfs_handle_t *VAR_5 = VAR_3->zfs_hdl;

 (void) FUNC_0(VAR_4->zc_name, VAR_3->zfs_name, sizeof (VAR_4->zc_name));

 while (FUNC_2(VAR_5, VAR_1, VAR_4) != 0) {
  if (VAR_2 == VAR_0) {
   if (FUNC_1(VAR_5, VAR_4) != 0) {
    return (-1);
   }
  } else {
   return (-1);
  }
 }
 return (0);
}
