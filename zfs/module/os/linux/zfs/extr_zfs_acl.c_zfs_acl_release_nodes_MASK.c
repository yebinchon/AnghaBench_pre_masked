
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ z_acl_bytes; scalar_t__ z_acl_count; int z_acl; } ;
typedef TYPE_1__ zfs_acl_t ;
typedef int zfs_acl_node_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(zfs_acl_t *VAR_0)
{
 zfs_acl_node_t *VAR_1;

 while ((VAR_1 = FUNC_0(&VAR_0->z_acl))) {
  FUNC_1(&VAR_0->z_acl, VAR_1);
  FUNC_2(VAR_1);
 }
 VAR_0->z_acl_count = 0;
 VAR_0->z_acl_bytes = 0;
}
