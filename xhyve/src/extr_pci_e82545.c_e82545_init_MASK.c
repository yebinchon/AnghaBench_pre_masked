
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_devinst {struct e82545_softc* pi_arg; } ;
struct e82545_softc {TYPE_1__* vms; int esc_tx_tid; int esc_tx_cond; int esc_rx_cond; int esc_mtx; struct pci_devinst* esc_pi; } ;
struct TYPE_2__ {int* mac; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct e82545_softc* FUNC_1 (int,int) ;
 int FUNC_2 (struct e82545_softc*,int ) ;
 int VAR_22 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pci_devinst*,int ,int ,int ) ;
 int FUNC_5 (struct pci_devinst*) ;
 int FUNC_6 (struct pci_devinst*,int ,int ) ;
 int FUNC_7 (struct pci_devinst*,int ,int) ;
 int VAR_23 ;
 int FUNC_8 (char*,int,int,int,int,int,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int ,struct e82545_softc*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (struct e82545_softc*) ;

__attribute__((used)) static int
FUNC_13(struct pci_devinst *VAR_24, char *VAR_25)
{
 FUNC_0("Loading with options: %s\r\n", VAR_25);

 struct e82545_softc *VAR_26;


 VAR_26 = FUNC_1(1, sizeof(*VAR_26));

 VAR_24->pi_arg = VAR_26;
 VAR_26->esc_pi = VAR_24;

 FUNC_11(&VAR_26->esc_mtx, ((void*)0));
 FUNC_9(&VAR_26->esc_rx_cond, ((void*)0));
 FUNC_9(&VAR_26->esc_tx_cond, ((void*)0));
 FUNC_10(&VAR_26->esc_tx_tid, ((void*)0), VAR_22, VAR_26);

 FUNC_6(VAR_24, VAR_14, VAR_6);
 FUNC_6(VAR_24, VAR_20, VAR_8);
 FUNC_7(VAR_24, VAR_13, VAR_11);
 FUNC_7(VAR_24, VAR_17, VAR_21);
 FUNC_6(VAR_24, VAR_18, VAR_7);
 FUNC_6(VAR_24, VAR_19, VAR_8);

 FUNC_7(VAR_24, VAR_15, VAR_12);
 FUNC_7(VAR_24, VAR_16, 0x1);



 FUNC_5(VAR_24);

 FUNC_4(VAR_24, VAR_4, VAR_10,
  VAR_5);
 FUNC_4(VAR_24, VAR_0, VAR_10,
  VAR_1);
 FUNC_4(VAR_24, VAR_2, VAR_9,
  VAR_3);





    if (FUNC_12(VAR_26) == -1) {
        return (-1);
    }

    if (VAR_23 == 1)
    {
        FUNC_8("MAC: %02x:%02x:%02x:%02x:%02x:%02x\n",
               VAR_26->vms->mac[0], VAR_26->vms->mac[1], VAR_26->vms->mac[2],
               VAR_26->vms->mac[3], VAR_26->vms->mac[4], VAR_26->vms->mac[5]);
        FUNC_3(0);
    }


 FUNC_2(VAR_26, 0);

 return (0);
}
