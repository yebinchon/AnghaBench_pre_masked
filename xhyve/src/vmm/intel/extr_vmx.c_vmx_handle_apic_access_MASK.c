
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct vmx {int dummy; } ;
struct TYPE_3__ {int exit_qualification; } ;
struct TYPE_4__ {TYPE_1__ vmx; } ;
struct vm_exit {TYPE_2__ u; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vmx*,int) ;
 int FUNC_3 (struct vm_exit*,scalar_t__,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct vmx *VAR_3, int VAR_4, struct vm_exit *VAR_5)
{
 uint64_t VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (!FUNC_2(VAR_3, VAR_4))
  return (VAR_1);

 VAR_6 = VAR_5->u.vmx.exit_qualification;
 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = FUNC_0(VAR_6);

 VAR_9 = 0;
 if (VAR_7 == 0) {



  switch (VAR_8) {
  case 157:
  case 139:
  case 138:
  case 156:
  case 137:
   VAR_9 = 1;
   break;
  default:
   break;
  }
 } else if (VAR_7 == 1) {



  switch (VAR_8) {
  case 128:
  case 157:
  case 139:
  case 138:
  case 147:
  case 146:
  case 145:
  case 144:
  case 143:
  case 142:
  case 141:
  case 140:
  case 136:
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
  case 130:
  case 129:
  case 155:
  case 154:
  case 153:
  case 152:
  case 151:
  case 150:
  case 149:
  case 148:
  case 156:
  case 137:
   VAR_9 = 1;
   break;
  default:
   break;
  }
 }

 if (VAR_9) {
  FUNC_3(VAR_5, VAR_0 + ((uint32_t) VAR_8),
      VAR_2, VAR_4);
 }
 return (VAR_1);
}
