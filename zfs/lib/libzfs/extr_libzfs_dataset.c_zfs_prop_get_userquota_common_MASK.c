
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zfs_userquota_prop_t ;
struct TYPE_6__ {int zfs_hdl; int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_7__ {char* member_0; int zc_cookie; int zc_objset_type; int zc_guid; int zc_value; int zc_name; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char const*,int ,int *,int ,int,int *) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_4(zfs_handle_t *VAR_2, const char *VAR_3,
    uint64_t *VAR_4, zfs_userquota_prop_t *VAR_5)
{
 int VAR_6;
 zfs_cmd_t VAR_7 = {"\0"};

 (void) FUNC_0(VAR_7.zc_name, VAR_2->zfs_name, sizeof (VAR_7.zc_name));

 VAR_6 = FUNC_1(VAR_3,
     FUNC_3(VAR_2, VAR_1),
     VAR_5, VAR_7.zc_value, sizeof (VAR_7.zc_value), &VAR_7.zc_guid);
 VAR_7.zc_objset_type = *VAR_5;
 if (VAR_6)
  return (VAR_6);

 VAR_6 = FUNC_2(VAR_2->zfs_hdl, VAR_0, &VAR_7);
 if (VAR_6)
  return (VAR_6);

 *VAR_4 = VAR_7.zc_cookie;
 return (0);
}
