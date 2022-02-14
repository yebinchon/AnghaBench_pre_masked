
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct pci_devinst {TYPE_1__* pi_bar; } ;
struct TYPE_2__ {scalar_t__ type; int addr; } ;






 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_devinst*) ;
 int FUNC_2 (struct pci_devinst*) ;
 int FUNC_3 (struct pci_devinst*,int) ;
 int FUNC_4 (struct pci_devinst*,int) ;

__attribute__((used)) static void
FUNC_5(struct pci_devinst *VAR_0, uint64_t VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_0->pi_bar[VAR_2].type == 131)
  VAR_4 = FUNC_2(VAR_0);
 else
  VAR_4 = FUNC_1(VAR_0);

 if (VAR_4)
  FUNC_4(VAR_0, VAR_2);

 switch (VAR_3) {
 case 131:
 case 130:
  VAR_0->pi_bar[VAR_2].addr = VAR_1;
  break;
 case 129:
  VAR_0->pi_bar[VAR_2].addr &= ~0xffffffffUL;
  VAR_0->pi_bar[VAR_2].addr |= VAR_1;
  break;
 case 128:
  VAR_0->pi_bar[VAR_2].addr &= 0xffffffff;
  VAR_0->pi_bar[VAR_2].addr |= VAR_1;
  break;
 default:
  FUNC_0(0);
 }

 if (VAR_4)
  FUNC_3(VAR_0, VAR_2);
}
