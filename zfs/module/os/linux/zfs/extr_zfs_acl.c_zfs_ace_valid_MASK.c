
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z_hints; int z_version; } ;
typedef TYPE_1__ zfs_acl_t ;
typedef int umode_t ;
typedef int uint16_t ;
typedef int boolean_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static boolean_t
FUNC_2(umode_t VAR_9, zfs_acl_t *VAR_10, uint16_t VAR_11, uint16_t VAR_12)
{




 if (!FUNC_1(VAR_11, VAR_12))
  return (VAR_4);

 switch (VAR_11) {
 case 131:
 case 130:
 case 128:
 case 129:
  if (VAR_10->z_version < VAR_7)
   return (VAR_4);
  VAR_10->z_hints |= VAR_6;
 }





 if (FUNC_0(VAR_9) &&
     (VAR_12 & (VAR_1|VAR_0)))
  VAR_10->z_hints |= VAR_8;

 if (VAR_12 & (VAR_2|VAR_3)) {
  if ((VAR_12 & (VAR_1|
      VAR_0)) == 0) {
   return (VAR_4);
  }
 }

 return (VAR_5);
}
