
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef enum vm_reg_name { ____Placeholder_vm_reg_name } vm_reg_name ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (void*,int,int,int*) ;
 int FUNC_1 (void*,int,int,int) ;

int
FUNC_2(void *VAR_2, int VAR_3, enum vm_reg_name VAR_4,
      uint64_t VAR_5, int VAR_6)
{
 int VAR_7;
 uint64_t VAR_8;

 switch (VAR_6) {
 case 1:
 case 2:
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_8);
  if (VAR_7)
   return (VAR_7);
  VAR_5 &= VAR_1[VAR_6];
  VAR_5 |= VAR_8 & ~VAR_1[VAR_6];
  break;
 case 4:
  VAR_5 &= 0xffffffffUL;
  break;
 case 8:
  break;
 default:
  return (VAR_0);
 }

 VAR_7 = FUNC_1(VAR_2, VAR_3, (int) VAR_4, VAR_5);
 return (VAR_7);
}
