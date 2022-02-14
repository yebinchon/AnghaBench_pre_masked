
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * zfs_recvd_props; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int nvlist_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

nvlist_t *
FUNC_1(zfs_handle_t *VAR_0)
{
 if (VAR_0->zfs_recvd_props == ((void*)0))
  if (FUNC_0(VAR_0) != 0)
   return (((void*)0));
 return (VAR_0->zfs_recvd_props);
}
