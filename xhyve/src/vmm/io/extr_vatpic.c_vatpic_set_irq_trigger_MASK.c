
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int dummy; } ;
struct vatpic {int* elc; } ;
typedef enum vm_intr_trigger { ____Placeholder_vm_intr_trigger } vm_intr_trigger ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vatpic*) ;
 int FUNC_1 (struct vatpic*) ;
 struct vatpic* FUNC_2 (struct vm*) ;

int
FUNC_3(struct vm *VAR_2, int VAR_3, enum vm_intr_trigger VAR_4)
{
 struct vatpic *VAR_5;

 if (VAR_3 < 0 || VAR_3 > 15)
  return (VAR_0);





 if (VAR_4 == VAR_1) {
  switch (VAR_3) {
  case 0:
  case 1:
  case 2:
  case 8:
  case 13:
   return (VAR_0);
  }
 }

 VAR_5 = FUNC_2(VAR_2);

 FUNC_0(VAR_5);

 if (VAR_4 == VAR_1)
  VAR_5->elc[VAR_3 >> 3] |= 1 << (VAR_3 & 0x7);
 else
  VAR_5->elc[VAR_3 >> 3] &= ~(1 << (VAR_3 & 0x7));

 FUNC_1(VAR_5);

 return (0);
}
