
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zfs_props; int * zpool_hdl; int zfs_type; int zfs_head_type; int zfs_name; int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char const*,int) ;
 int * FUNC_5 (TYPE_1__*) ;

zfs_handle_t *
FUNC_6(zfs_handle_t *VAR_1, const char *VAR_2,
    nvlist_t *VAR_3)
{
 zfs_handle_t *VAR_4 = FUNC_0(1, sizeof (zfs_handle_t));

 if (VAR_4 == ((void*)0))
  return (((void*)0));


 VAR_4->zfs_hdl = VAR_1->zfs_hdl;
 (void) FUNC_4(VAR_4->zfs_name, VAR_2, sizeof (VAR_4->zfs_name));


 if (FUNC_2(VAR_3, &VAR_4->zfs_props, 0) != 0) {
  FUNC_1(VAR_4);
  return (((void*)0));
 }


 VAR_4->zfs_head_type = VAR_1->zfs_head_type;
 VAR_4->zfs_type = VAR_0;

 if ((VAR_4->zpool_hdl = FUNC_5(VAR_4)) == ((void*)0)) {
  FUNC_3(VAR_4->zfs_props);
  FUNC_1(VAR_4);
  return (((void*)0));
 }

 return (VAR_4);
}
