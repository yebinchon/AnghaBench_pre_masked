
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* proto; TYPE_2__* handle; } ;
typedef TYPE_1__ update_cookie_t ;
typedef TYPE_2__* sa_handle_impl_t ;
struct TYPE_6__ {int * zfs_libhandle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_1(sa_handle_impl_t VAR_3, const char *VAR_4)
{
 update_cookie_t VAR_5;

 if (VAR_3->zfs_libhandle == ((void*)0))
  return (VAR_1);

 VAR_5.handle = VAR_3;
 VAR_5.proto = VAR_4;
 (void) FUNC_0(VAR_3->zfs_libhandle, VAR_2,
     &VAR_5);

 return (VAR_0);
}
