
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int z_xattr_sa; int z_flags; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(void *VAR_5, uint64_t VAR_6)
{
 zfsvfs_t *VAR_7 = VAR_5;

 if (VAR_6 == VAR_2) {
  VAR_7->z_flags &= ~VAR_4;
 } else {
  VAR_7->z_flags |= VAR_4;

  if (VAR_6 == VAR_3)
   VAR_7->z_xattr_sa = VAR_1;
  else
   VAR_7->z_xattr_sa = VAR_0;
 }
}
