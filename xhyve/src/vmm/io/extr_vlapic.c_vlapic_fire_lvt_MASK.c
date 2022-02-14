
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {int vcpuid; int vm; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct vlapic*,int ) ;
 int FUNC_2 (struct vlapic*,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct vlapic *VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6, VAR_7;

 if (VAR_5 & VAR_2)
  return (0);

 VAR_6 = VAR_5 & VAR_3;
 VAR_7 = VAR_5 & VAR_1;

 switch (VAR_7) {
 case 129:
  if (VAR_6 < 16) {
   FUNC_1(VAR_4, VAR_0);
   return (0);
  }
  if (FUNC_2(VAR_4, ((int) VAR_6), 0))
   FUNC_0(VAR_4->vm, VAR_4->vcpuid, 1);
  break;
 case 128:
  FUNC_4(VAR_4->vm, VAR_4->vcpuid);
  break;
 case 130:
  FUNC_3(VAR_4->vm, VAR_4->vcpuid);
  break;
 default:

  return (0);
 }
 return (1);
}
