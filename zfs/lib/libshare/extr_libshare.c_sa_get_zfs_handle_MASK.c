
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sa_handle_t ;
typedef TYPE_1__* sa_handle_impl_t ;
typedef int libzfs_handle_t ;
struct TYPE_2__ {int * zfs_libhandle; } ;



libzfs_handle_t *
FUNC_0(sa_handle_t VAR_0)
{
 sa_handle_impl_t VAR_1 = (sa_handle_impl_t)VAR_0;

 if (VAR_1 == ((void*)0))
  return (((void*)0));

 return (VAR_1->zfs_libhandle);
}
