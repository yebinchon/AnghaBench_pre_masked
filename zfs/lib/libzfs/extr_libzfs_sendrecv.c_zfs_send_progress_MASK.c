
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int zfs_hdl; int zfs_name; } ;
typedef TYPE_2__ zfs_handle_t ;
struct TYPE_6__ {int member_0; } ;
struct TYPE_8__ {int zc_cookie; int zc_objset_type; int zc_name; TYPE_1__ member_0; } ;
typedef TYPE_3__ zfs_cmd_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_3__*) ;

int
FUNC_2(zfs_handle_t *VAR_2, int VAR_3, uint64_t *VAR_4,
    uint64_t *VAR_5)
{
 zfs_cmd_t VAR_6 = { 0 };
 (void) FUNC_0(VAR_6.zc_name, VAR_2->zfs_name, sizeof (VAR_6.zc_name));
 VAR_6.zc_cookie = VAR_3;
 if (FUNC_1(VAR_2->zfs_hdl, VAR_0, &VAR_6) != 0)
  return (VAR_1);
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_6.zc_cookie;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_6.zc_objset_type;
 return (0);
}
