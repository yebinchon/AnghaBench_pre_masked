
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * zfs_props; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;



__attribute__((used)) static void
FUNC_0(zfs_handle_t *VAR_0, uint64_t *VAR_1)
{
 VAR_0->zfs_props = (nvlist_t *)(uintptr_t)*VAR_1;
 *VAR_1 = 0;
}
