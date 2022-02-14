
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm {TYPE_1__* vcpu; } ;
typedef enum x2apic_state { ____Placeholder_x2apic_state } x2apic_state ;
struct TYPE_2__ {int x2apic_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm*,int,int) ;

int
FUNC_1(struct vm *VAR_3, int VAR_4, enum x2apic_state VAR_5)
{
 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  return (VAR_0);

 if (VAR_5 >= VAR_2)
  return (VAR_0);

 VAR_3->vcpu[VAR_4].x2apic_state = VAR_5;

 FUNC_0(VAR_3, VAR_4, VAR_5);

 return (0);
}
