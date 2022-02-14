
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_deleg_who_type_t ;
__attribute__((used)) static int
FUNC_0(zfs_deleg_who_type_t VAR_0)
{
 int VAR_1;
 switch (VAR_0) {
  case 130:
  case 131:
   VAR_1 = 0;
   break;
  case 136:
  case 137:
   VAR_1 = 1;
   break;
  case 128:
  case 129:
   VAR_1 = 2;
   break;
  case 132:
  case 133:
   VAR_1 = 3;
   break;
  case 134:
  case 135:
   VAR_1 = 4;
   break;
  default:
   VAR_1 = -1;
 }

 return (VAR_1);
}
