
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int z_pflags; int z_acl_lock; int z_lock; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_11__ {int z_hints; } ;
typedef TYPE_2__ zfs_acl_t ;
typedef int uint64_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*) ;

int
FUNC_7(znode_t *VAR_1, zfs_acl_t **VAR_2, uint64_t VAR_3)
{
 FUNC_2(&VAR_1->z_acl_lock);
 FUNC_2(&VAR_1->z_lock);
 *VAR_2 = FUNC_4(FUNC_6(VAR_1));
 (*VAR_2)->z_hints = VAR_1->z_pflags & VAR_0;
 FUNC_5(FUNC_1(VAR_1), VAR_3, *VAR_2);
 FUNC_3(&VAR_1->z_lock);
 FUNC_3(&VAR_1->z_acl_lock);
 FUNC_0(*VAR_2);

 return (0);
}
