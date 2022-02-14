
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct super_block* z_sb; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
struct super_block {int s_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(void *VAR_2, uint64_t VAR_3)
{
 zfsvfs_t *VAR_4 = VAR_2;
 struct super_block *VAR_5 = VAR_4->z_sb;

 if (VAR_5 == ((void*)0))
  return;

 if (VAR_3 == VAR_1)
  VAR_5->s_flags |= VAR_0;
 else
  VAR_5->s_flags &= ~VAR_0;
}
