
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct vmx {int dummy; } ;
struct vlapic {scalar_t__ apic_page; } ;
 int VAR_0 ;





 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vmx*,int) ;
 int FUNC_2 (struct vlapic*) ;
 int FUNC_3 (struct vlapic*) ;
 int FUNC_4 (struct vlapic*) ;
 int FUNC_5 (struct vlapic*,int*) ;
 int FUNC_6 (struct vlapic*) ;
 int FUNC_7 (struct vlapic*) ;
 int FUNC_8 (struct vlapic*) ;
 int FUNC_9 (struct vlapic*,int ) ;
 int FUNC_10 (struct vlapic*,int ) ;
 int FUNC_11 (struct vlapic*) ;
 scalar_t__ FUNC_12 (struct vmx*,int) ;

__attribute__((used)) static int
FUNC_13(struct vmx *VAR_3, int VAR_4, struct vlapic *VAR_5,
    uint64_t VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 uint32_t *VAR_10, VAR_11;
 bool VAR_12;

 VAR_8 = VAR_1;
 VAR_9 = FUNC_0(VAR_6);

 if (!FUNC_1(VAR_3, VAR_4)) {







  if (FUNC_12(VAR_3, VAR_4) &&
      VAR_9 == VAR_0) {
   VAR_10 = (uint32_t *)(VAR_5->apic_page);
   VAR_11 = VAR_10[VAR_0 / 4];
   FUNC_10(VAR_5, VAR_11);
   return (VAR_1);
  } else
   return (VAR_2);
 }

 switch (VAR_9) {
 case 137:
  FUNC_7(VAR_5);
  break;
 case 136:
  FUNC_8(VAR_5);
  break;
 case 141:
  FUNC_3(VAR_5);
  break;
 case 132:
  FUNC_11(VAR_5);
  break;
 case 139:
  FUNC_4(VAR_5);
  break;
 case 138:
  VAR_12 = 0;
  VAR_7 = FUNC_5(VAR_5, &VAR_12);
  if (VAR_7 != 0 || VAR_12)
   VAR_8 = VAR_2;
  break;
 case 142:
 case 128:
 case 131:
 case 133:
 case 135:
 case 134:
 case 140:
  FUNC_9(VAR_5, ((uint32_t) VAR_9));
  break;
 case 129:
  FUNC_6(VAR_5);
  break;
 case 130:
  FUNC_2(VAR_5);
  break;
 default:
  VAR_8 = VAR_2;
  break;
 }
 return (VAR_8);
}
