
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int zfs_prop_t ;
struct TYPE_5__ {int zfs_hdl; int zfs_type; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int *,char**,int *) ;
 int FUNC_2 (TYPE_1__*,int *,char*,char*,size_t) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;

int
FUNC_6(zfs_handle_t *VAR_4, zfs_prop_t VAR_5, uint64_t *VAR_6,
    zprop_source_t *VAR_7, char *VAR_8, size_t VAR_9)
{
 char *VAR_10;




 if (!FUNC_5(VAR_5, VAR_4->zfs_type, VAR_0)) {
  return (FUNC_3(VAR_4->zfs_hdl, VAR_1,
      FUNC_0(VAR_2, "cannot get property '%s'"),
      FUNC_4(VAR_5)));
 }

 if (VAR_7)
  *VAR_7 = VAR_3;

 if (FUNC_1(VAR_4, VAR_5, VAR_7, &VAR_10, VAR_6) != 0)
  return (-1);

 FUNC_2(VAR_4, VAR_7, VAR_10, VAR_8, VAR_9);

 return (0);
}
