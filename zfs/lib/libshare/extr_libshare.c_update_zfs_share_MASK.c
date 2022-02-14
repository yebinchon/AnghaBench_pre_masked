
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_6__ {char const* proto; TYPE_3__* handle; } ;
typedef TYPE_1__ update_cookie_t ;
typedef TYPE_2__* sa_share_impl_t ;
typedef TYPE_3__* sa_handle_impl_t ;
struct TYPE_8__ {int * zfs_libhandle; } ;
struct TYPE_7__ {int * dataset; TYPE_3__* handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int * FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_3(sa_share_impl_t VAR_3, const char *VAR_4)
{
 sa_handle_impl_t VAR_5 = VAR_3->handle;
 zfs_handle_t *VAR_6;
 update_cookie_t VAR_7;

 if (VAR_5->zfs_libhandle == ((void*)0))
   return (VAR_1);

 FUNC_0(VAR_3->dataset != ((void*)0));

 VAR_6 = FUNC_2(VAR_3->handle->zfs_libhandle, VAR_3->dataset,
     VAR_2);

 if (VAR_6 == ((void*)0))
  return (VAR_1);

 VAR_7.handle = VAR_5;
 VAR_7.proto = VAR_4;
 (void) FUNC_1(VAR_6, &VAR_7);

 return (VAR_0);
}
