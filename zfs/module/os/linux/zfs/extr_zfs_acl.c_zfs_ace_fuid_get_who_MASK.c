
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z_flags; } ;
struct TYPE_4__ {int z_fuid; TYPE_1__ z_hdr; } ;
typedef TYPE_2__ zfs_ace_t ;
typedef int uint64_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint64_t
FUNC_0(void *VAR_4)
{
 uint16_t VAR_5;
 zfs_ace_t *VAR_6 = VAR_4;

 VAR_5 = VAR_6->z_hdr.z_flags & VAR_2;

 if (VAR_5 == VAR_1 || VAR_5 == VAR_3 ||
     VAR_5 == VAR_0)
  return (-1);
 return (((zfs_ace_t *)VAR_6)->z_fuid);
}
