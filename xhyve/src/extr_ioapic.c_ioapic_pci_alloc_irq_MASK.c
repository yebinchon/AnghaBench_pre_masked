
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pin; } ;
struct pci_devinst {int pi_slot; TYPE_1__ pi_lintr; } ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;

int
FUNC_1(struct pci_devinst *VAR_1)
{
 static int VAR_2;

 if (VAR_0 == 0)
  return (-1);
    if (FUNC_0()) {

        return (16 + (4 + VAR_1->pi_slot + VAR_1->pi_lintr.pin) % 8);
    }
 return (16 + (VAR_2++ % VAR_0));
}
