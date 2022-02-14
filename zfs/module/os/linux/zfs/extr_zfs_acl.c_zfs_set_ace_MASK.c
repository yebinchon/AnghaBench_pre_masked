
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* z_ops; } ;
typedef TYPE_2__ zfs_acl_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int (* ace_who_set ) (void*,int ) ;int (* ace_flags_set ) (void*,scalar_t__) ;int (* ace_type_set ) (void*,scalar_t__) ;int (* ace_mask_set ) (void*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,scalar_t__) ;
 int FUNC_2 (void*,scalar_t__) ;
 int FUNC_3 (void*,int ) ;

__attribute__((used)) static void
FUNC_4(zfs_acl_t *VAR_4, void *VAR_5, uint32_t VAR_6,
    uint16_t VAR_7, uint64_t VAR_8, uint16_t VAR_9)
{
 uint16_t VAR_10 = VAR_9 & VAR_2;

 VAR_4->z_ops->ace_mask_set(VAR_5, VAR_6);
 VAR_4->z_ops->ace_type_set(VAR_5, VAR_7);
 VAR_4->z_ops->ace_flags_set(VAR_5, VAR_9);
 if ((VAR_10 != VAR_1 && VAR_10 != VAR_3 &&
     VAR_10 != VAR_0))
  VAR_4->z_ops->ace_who_set(VAR_5, VAR_8);
}
