
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* cb_acl_node; TYPE_1__* cb_aclp; } ;
typedef TYPE_2__ zfs_acl_locator_cb_t ;
typedef int uint32_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {int z_size; void* z_acldata; } ;
struct TYPE_6__ {int z_acl; } ;


 TYPE_3__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *,TYPE_3__*) ;

void
FUNC_2(void **VAR_0, uint32_t *VAR_1, uint32_t VAR_2,
    boolean_t VAR_3, void *VAR_4)
{
 zfs_acl_locator_cb_t *VAR_5 = (zfs_acl_locator_cb_t *)VAR_4;

 if (VAR_3) {
  VAR_5->cb_acl_node = FUNC_0(&VAR_5->cb_aclp->z_acl);
 } else {
  VAR_5->cb_acl_node = FUNC_1(&VAR_5->cb_aclp->z_acl,
      VAR_5->cb_acl_node);
 }
 *VAR_0 = VAR_5->cb_acl_node->z_acldata;
 *VAR_1 = VAR_5->cb_acl_node->z_size;
}
