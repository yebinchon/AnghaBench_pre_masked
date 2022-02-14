
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm {int dummy; } ;
struct vioapic {TYPE_1__* rtbl; struct vm* vm; } ;
struct TYPE_2__ {int reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct vioapic*) ;
 int FUNC_1 (struct vioapic*) ;
 int FUNC_2 (struct vioapic*,int) ;
 struct vioapic* FUNC_3 (int) ;

struct vioapic *
FUNC_4(struct vm *VAR_1)
{
 int VAR_2;
 struct vioapic *VAR_3;

 VAR_3 = FUNC_3(sizeof(struct vioapic));
 FUNC_1(VAR_3);
 FUNC_2(VAR_3, sizeof(struct vioapic));
 VAR_3->vm = VAR_1;

 FUNC_0(VAR_3);


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_3->rtbl[VAR_2].reg = 0x0001000000010000UL;

 return (VAR_3);
}
