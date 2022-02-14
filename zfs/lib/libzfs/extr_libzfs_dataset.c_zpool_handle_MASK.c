
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_5__ {int zfs_name; int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ,int) ;
 char* FUNC_3 (int ,int) ;
 int * FUNC_4 (TYPE_1__*,char*) ;
 int * FUNC_5 (TYPE_1__*,char*,int) ;

__attribute__((used)) static zpool_handle_t *
FUNC_6(zfs_handle_t *VAR_0)
{
 char *VAR_1;
 int VAR_2;
 zpool_handle_t *VAR_3;

 VAR_2 = FUNC_1(VAR_0->zfs_name, "/@#") + 1;
 VAR_1 = FUNC_3(VAR_0->zfs_hdl, VAR_2);
 (void) FUNC_2(VAR_1, VAR_0->zfs_name, VAR_2);

 VAR_3 = FUNC_5(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_4(VAR_0, VAR_1);

 FUNC_0(VAR_1);
 return (VAR_3);
}
