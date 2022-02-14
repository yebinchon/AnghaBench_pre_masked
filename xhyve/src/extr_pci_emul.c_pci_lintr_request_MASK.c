
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct slotinfo {TYPE_1__* si_intpins; } ;
struct TYPE_4__ {int pin; } ;
struct pci_devinst {size_t pi_bus; size_t pi_slot; TYPE_2__ pi_lintr; } ;
struct businfo {struct slotinfo* slotinfo; } ;
typedef int int8_t ;
struct TYPE_3__ {int ii_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct businfo** VAR_1 ;
 int FUNC_1 (struct pci_devinst*,int ,int ) ;

void
FUNC_2(struct pci_devinst *VAR_2)
{
 struct businfo *VAR_3;
 struct slotinfo *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_3 = VAR_1[VAR_2->pi_bus];
 FUNC_0(VAR_3 != ((void*)0));





 VAR_4 = &VAR_3->slotinfo[VAR_2->pi_slot];
 VAR_5 = 0;
 VAR_6 = VAR_4->si_intpins[0].ii_count;
 for (VAR_7 = 1; VAR_7 < 4; VAR_7++) {
  if (VAR_4->si_intpins[VAR_7].ii_count < VAR_6) {
   VAR_5 = VAR_7;
   VAR_6 = VAR_4->si_intpins[VAR_7].ii_count;
  }
 }

 VAR_4->si_intpins[VAR_5].ii_count++;
 VAR_2->pi_lintr.pin = (int8_t) (VAR_5 + 1);
 FUNC_1(VAR_2, VAR_0, ((uint8_t) (VAR_5 + 1)));
}
