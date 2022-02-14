
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm {int dummy; } ;
struct vatpic {TYPE_1__* atpic; } ;
struct TYPE_2__ {int irq_base; } ;


 int FUNC_0 (struct vatpic*) ;
 int FUNC_1 (struct vatpic*) ;
 int FUNC_2 (struct vatpic*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 struct vatpic* FUNC_4 (struct vm*) ;

void
FUNC_5(struct vm *VAR_0, int VAR_1)
{
 struct vatpic *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_0);

 FUNC_0(VAR_2);

 VAR_3 = VAR_1 & 0x7;

 if ((VAR_1 & ~0x7) == VAR_2->atpic[1].irq_base) {
  FUNC_3(&VAR_2->atpic[1], VAR_3);




  FUNC_3(&VAR_2->atpic[0], 2);
 } else {
  FUNC_3(&VAR_2->atpic[0], VAR_3);
 }

 FUNC_2(VAR_2);

 FUNC_1(VAR_2);
}
