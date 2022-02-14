
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int pin; scalar_t__ ioapic_irq; scalar_t__ pirq_pin; } ;
struct pci_devinst {size_t pi_bus; size_t pi_slot; TYPE_2__ pi_lintr; } ;
struct intxinfo {scalar_t__ ii_ioapic_irq; scalar_t__ ii_pirq_pin; } ;
struct businfo {TYPE_1__* slotinfo; } ;
struct TYPE_3__ {struct intxinfo* si_intpins; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct pci_devinst*) ;
 struct businfo** VAR_1 ;
 int FUNC_2 (struct pci_devinst*,int ,int ) ;
 scalar_t__ FUNC_3 (struct pci_devinst*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct pci_devinst *VAR_2)
{
 struct businfo *VAR_3;
 struct intxinfo *VAR_4;

 if (VAR_2->pi_lintr.pin == 0)
  return;

 VAR_3 = VAR_1[VAR_2->pi_bus];
 FUNC_0(VAR_3 != ((void*)0));
 VAR_4 = &VAR_3->slotinfo[VAR_2->pi_slot].si_intpins[VAR_2->pi_lintr.pin - 1];





 if (VAR_4->ii_ioapic_irq == 0)
  VAR_4->ii_ioapic_irq = FUNC_1(VAR_2);
 FUNC_0(VAR_4->ii_ioapic_irq > 0);





 if (VAR_4->ii_pirq_pin == 0)
  VAR_4->ii_pirq_pin = FUNC_3(VAR_2);
 FUNC_0(VAR_4->ii_pirq_pin > 0);

 VAR_2->pi_lintr.ioapic_irq = VAR_4->ii_ioapic_irq;
 VAR_2->pi_lintr.pirq_pin = VAR_4->ii_pirq_pin;
 FUNC_2(VAR_2, VAR_0, ((uint8_t) FUNC_4(VAR_4->ii_pirq_pin)));
}
