
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zfs_type; int zfs_name; int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,scalar_t__,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int,int ,int ) ;

int
FUNC_9(zfs_handle_t *VAR_6, boolean_t VAR_7)
{
 int VAR_8;

 if (VAR_6->zfs_type != VAR_4 && VAR_7)
  return (VAR_0);

 if (VAR_6->zfs_type == VAR_3) {
  nvlist_t *VAR_9 = FUNC_2();
  FUNC_1(VAR_9, VAR_6->zfs_name);
  VAR_8 = FUNC_5(VAR_9, ((void*)0));
  FUNC_3(VAR_9);
  if (VAR_8 != 0) {
   return (FUNC_8(VAR_6->zfs_hdl, VAR_8,
       FUNC_0(VAR_2, "cannot destroy '%s'"),
       VAR_6->zfs_name));
  }
  return (0);
 }

 if (VAR_6->zfs_type == VAR_4) {
  nvlist_t *VAR_10 = FUNC_2();
  FUNC_1(VAR_10, VAR_6->zfs_name);
  VAR_8 = FUNC_6(VAR_10, VAR_7, ((void*)0));
  FUNC_3(VAR_10);
 } else {
  VAR_8 = FUNC_4(VAR_6->zfs_name);
 }

 if (VAR_8 != 0 && VAR_8 != VAR_1) {
  return (FUNC_8(VAR_6->zfs_hdl, VAR_5,
      FUNC_0(VAR_2, "cannot destroy '%s'"),
      VAR_6->zfs_name));
 }

 FUNC_7(VAR_6);

 return (0);
}
