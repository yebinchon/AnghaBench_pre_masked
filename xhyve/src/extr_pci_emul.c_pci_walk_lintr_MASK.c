
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slotinfo {struct intxinfo* si_intpins; } ;
struct intxinfo {scalar_t__ ii_count; int ii_ioapic_irq; int ii_pirq_pin; } ;
struct businfo {struct slotinfo* slotinfo; } ;
typedef int (* pci_lintr_cb ) (int,int,int,int ,int ,void*) ;


 int VAR_0 ;
 struct businfo** VAR_1 ;

void
FUNC_0(int VAR_2, pci_lintr_cb VAR_3, void *VAR_4)
{
 struct businfo *VAR_5;
 struct slotinfo *VAR_6;
 struct intxinfo *VAR_7;
 int VAR_8, VAR_9;

 if ((VAR_5 = VAR_1[VAR_2]) == ((void*)0))
  return;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_6 = &VAR_5->slotinfo[VAR_8];
  for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
   VAR_7 = &VAR_6->si_intpins[VAR_9];
   if (VAR_7->ii_count != 0)
    VAR_3(VAR_2, VAR_8, VAR_9 + 1, VAR_7->ii_pirq_pin,
        VAR_7->ii_ioapic_irq, VAR_4);
  }
 }
}
