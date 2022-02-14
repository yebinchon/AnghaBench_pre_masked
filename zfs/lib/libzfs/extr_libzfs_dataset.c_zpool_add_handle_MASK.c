
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* zpool_next; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_9__ {TYPE_3__* zfs_hdl; } ;
typedef TYPE_2__ zfs_handle_t ;
struct TYPE_10__ {TYPE_1__* libzfs_pool_handles; } ;
typedef TYPE_3__ libzfs_handle_t ;


 TYPE_1__* FUNC_0 (TYPE_3__*,char const*) ;

__attribute__((used)) static zpool_handle_t *
FUNC_1(zfs_handle_t *VAR_0, const char *VAR_1)
{
 libzfs_handle_t *VAR_2 = VAR_0->zfs_hdl;
 zpool_handle_t *VAR_3;

 if ((VAR_3 = FUNC_0(VAR_2, VAR_1)) != ((void*)0)) {
  if (VAR_2->libzfs_pool_handles != ((void*)0))
   VAR_3->zpool_next = VAR_2->libzfs_pool_handles;
  VAR_2->libzfs_pool_handles = VAR_3;
 }
 return (VAR_3);
}
