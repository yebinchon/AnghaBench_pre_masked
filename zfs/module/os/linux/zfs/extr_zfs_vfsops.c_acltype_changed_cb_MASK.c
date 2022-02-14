
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int z_acl_type; TYPE_1__* z_sb; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int uint64_t ;
struct TYPE_3__ {int s_flags; } ;


 int VAR_0 ;



__attribute__((used)) static void
FUNC_0(void *VAR_1, uint64_t VAR_2)
{
 zfsvfs_t *VAR_3 = VAR_1;

 switch (VAR_2) {
 case 129:
  VAR_3->z_acl_type = 129;
  VAR_3->z_sb->s_flags &= ~VAR_0;
  break;
 case 128:




  VAR_3->z_acl_type = 129;
  VAR_3->z_sb->s_flags &= ~VAR_0;

  break;
 default:
  break;
 }
}
