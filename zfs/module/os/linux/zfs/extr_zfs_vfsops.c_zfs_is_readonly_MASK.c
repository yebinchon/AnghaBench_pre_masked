
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* z_sb; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int boolean_t ;
struct TYPE_4__ {int s_flags; } ;


 int VAR_0 ;

boolean_t
FUNC_0(zfsvfs_t *VAR_1)
{
 return (!!(VAR_1->z_sb->s_flags & VAR_0));
}
