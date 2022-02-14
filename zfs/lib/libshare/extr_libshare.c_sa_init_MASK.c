
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sa_handle_impl {int dummy; } ;
typedef int * sa_handle_t ;
typedef TYPE_1__* sa_handle_impl_t ;
struct TYPE_5__ {int * zfs_libhandle; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

sa_handle_t
FUNC_5(int VAR_1)
{
 sa_handle_impl_t VAR_2;

 VAR_2 = FUNC_0(1, sizeof (struct sa_handle_impl));

 if (VAR_2 == ((void*)0))
  return (((void*)0));

 VAR_2->zfs_libhandle = FUNC_1();

 if (VAR_2->zfs_libhandle != ((void*)0)) {
  FUNC_2(VAR_2->zfs_libhandle, VAR_0);
 }

 FUNC_3(VAR_2);
 FUNC_4(VAR_2, ((void*)0));

 return ((sa_handle_t)VAR_2);
}
