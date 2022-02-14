
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t z_allocsize; size_t z_size; int z_acldata; int z_allocdata; } ;
typedef TYPE_1__ zfs_acl_node_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 TYPE_1__* FUNC_1 (int,int ) ;

zfs_acl_node_t *
FUNC_2(size_t VAR_1)
{
 zfs_acl_node_t *VAR_2;

 VAR_2 = FUNC_1(sizeof (zfs_acl_node_t), VAR_0);
 if (VAR_1) {
  VAR_2->z_acldata = FUNC_0(VAR_1, VAR_0);
  VAR_2->z_allocdata = VAR_2->z_acldata;
  VAR_2->z_allocsize = VAR_1;
  VAR_2->z_size = VAR_1;
 }

 return (VAR_2);
}
