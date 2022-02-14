
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ z_acl_inherit; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_8__ {TYPE_1__* z_ops; } ;
typedef TYPE_3__ zfs_acl_t ;
typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ (* ace_type_get ) (void*) ;int (* ace_mask_set ) (void*,int ) ;int (* ace_mask_get ) (void*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*,int ) ;

__attribute__((used)) static void
FUNC_3(zfsvfs_t *VAR_3, zfs_acl_t *VAR_4, void *VAR_5)
{
 uint32_t VAR_6 = VAR_4->z_ops->ace_mask_get(VAR_5);

 if ((VAR_3->z_acl_inherit == VAR_2) &&
     (VAR_4->z_ops->ace_type_get(VAR_5) == VAR_0)) {
  VAR_6 &= ~VAR_1;
  VAR_4->z_ops->ace_mask_set(VAR_5, VAR_6);
 }
}
