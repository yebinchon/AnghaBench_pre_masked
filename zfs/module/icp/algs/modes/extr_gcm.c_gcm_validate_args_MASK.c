
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t ulTagBits; scalar_t__ ulIvLen; } ;
typedef TYPE_1__ CK_AES_GCM_PARAMS ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(CK_AES_GCM_PARAMS *VAR_2)
{
 size_t VAR_3;




 VAR_3 = VAR_2->ulTagBits;
 switch (VAR_3) {
 case 32:
 case 64:
 case 96:
 case 104:
 case 112:
 case 120:
 case 128:
  break;
 default:
  return (VAR_0);
 }

 if (VAR_2->ulIvLen == 0)
  return (VAR_0);

 return (VAR_1);
}
