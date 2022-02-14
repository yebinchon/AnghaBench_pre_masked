
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* z_fuid_group; void* z_fuid_owner; } ;
typedef TYPE_1__ zfs_fuid_info_t ;
typedef void* uint64_t ;


 scalar_t__ FUNC_0 (void*) ;

__attribute__((used)) static void
FUNC_1(zfs_fuid_info_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{




 if (FUNC_0(VAR_1))
  VAR_0->z_fuid_owner = VAR_1;

 if (FUNC_0(VAR_2))
  VAR_0->z_fuid_group = VAR_2;
}
