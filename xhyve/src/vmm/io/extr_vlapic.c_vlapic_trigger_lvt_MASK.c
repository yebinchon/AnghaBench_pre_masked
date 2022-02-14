
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct vlapic*) ;
 scalar_t__ FUNC_1 (struct vlapic*,int ) ;
 int FUNC_2 (struct vlapic*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int,int) ;

int
FUNC_6(struct vlapic *VAR_10, int VAR_11)
{
 uint32_t VAR_12;

 if (FUNC_0(VAR_10) == 0) {





  switch (VAR_11) {
   case 132:
    FUNC_3(VAR_10->vm, VAR_10->vcpuid);
    break;
   case 131:
    FUNC_4(VAR_10->vm, VAR_10->vcpuid);
    break;
   default:
    break;
  }
  return (0);
 }

 switch (VAR_11) {
 case 132:
  VAR_12 = FUNC_2(VAR_10, VAR_3);
  break;
 case 131:
  VAR_12 = FUNC_2(VAR_10, VAR_4);
  break;
 case 128:
  VAR_12 = FUNC_2(VAR_10, VAR_7);
  VAR_12 |= VAR_0;
  break;
 case 133:
  VAR_12 = FUNC_2(VAR_10, VAR_2);
  VAR_12 |= VAR_0;
  break;
 case 130:
  VAR_12 = FUNC_2(VAR_10, VAR_5);
  break;
 case 129:
  VAR_12 = FUNC_2(VAR_10, VAR_6);
  break;
 case 134:
  VAR_12 = FUNC_2(VAR_10, VAR_1);
  break;
 default:
  return (VAR_8);
 }
 if (FUNC_1(VAR_10, VAR_12)) {
  FUNC_5(VAR_10->vm, VAR_10->vcpuid,
      VAR_9, VAR_11, 1);
 }
 return (0);
}
