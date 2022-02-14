
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_2__ {scalar_t__ ioapic_irq; scalar_t__ pirq_pin; int state; scalar_t__ pin; int lock; } ;
struct pci_devinst {int pi_name; struct pci_devemu* pi_d; TYPE_1__ pi_lintr; void* pi_func; void* pi_slot; void* pi_bus; } ;
struct pci_devemu {char* pe_emu; int (* pe_init ) (struct pci_devinst*,int ) ;} ;
struct funcinfo {struct pci_devinst* fi_devi; int fi_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pci_devinst* FUNC_0 (int,int) ;
 int FUNC_1 (struct pci_devinst*) ;
 int FUNC_2 (struct pci_devinst*,int ,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,char*,char*,int) ;
 int FUNC_5 (struct pci_devinst*,int ) ;

__attribute__((used)) static int
FUNC_6(struct pci_devemu *VAR_8, int VAR_9, int VAR_10,
    int VAR_11, struct funcinfo *VAR_12)
{
 struct pci_devinst *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_0(1, sizeof(struct pci_devinst));

 VAR_13->pi_bus = (uint8_t) VAR_9;
 VAR_13->pi_slot = (uint8_t) VAR_10;
 VAR_13->pi_func = (uint8_t) VAR_11;
 FUNC_3(&VAR_13->pi_lintr.lock, ((void*)0));
 VAR_13->pi_lintr.pin = 0;
 VAR_13->pi_lintr.state = VAR_0;
 VAR_13->pi_lintr.pirq_pin = 0;
 VAR_13->pi_lintr.ioapic_irq = 0;
 VAR_13->pi_d = VAR_8;
 FUNC_4(VAR_13->pi_name, VAR_7, "%s-pci-%d", VAR_8->pe_emu, VAR_10);


 FUNC_2(VAR_13, VAR_5, 255);
 FUNC_2(VAR_13, VAR_6, 0);

 FUNC_2(VAR_13, VAR_4,
      VAR_3 | VAR_2 | VAR_1);

 VAR_14 = (*VAR_8->pe_init)(VAR_13, VAR_12->fi_param);
 if (VAR_14 == 0)
  VAR_12->fi_devi = VAR_13;
 else
  FUNC_1(VAR_13);

 return (VAR_14);
}
