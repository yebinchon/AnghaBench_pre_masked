
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int z_allocsize; struct TYPE_4__* z_allocdata; } ;
typedef TYPE_1__ zfs_acl_node_t ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(zfs_acl_node_t *VAR_0)
{
 if (VAR_0->z_allocsize)
  FUNC_0(VAR_0->z_allocdata, VAR_0->z_allocsize);
 FUNC_0(VAR_0, sizeof (zfs_acl_node_t));
}
