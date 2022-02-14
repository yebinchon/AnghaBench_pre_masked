
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_char ;
struct pci_devinst {int pi_slot; int pi_func; struct pci_ahci_softc* pi_arg; } ;
struct pci_ahci_softc {int ports; int cap; int pi; int vs; TYPE_1__* port; int cap2; int mtx; struct pci_devinst* asc_pi; } ;
struct blockif_ctxt {int dummy; } ;
typedef int bident ;
struct TYPE_2__ {int atapi; int ioqsz; struct blockif_ctxt* bctx; int ident; struct pci_ahci_softc* pr_sc; } ;
typedef int CC_LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
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
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*,int ,int*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (struct pci_ahci_softc*) ;
 int FUNC_2 (struct blockif_ctxt*) ;
 struct blockif_ctxt* FUNC_3 (char*,char*) ;
 struct pci_ahci_softc* FUNC_4 (int,int) ;
 int VAR_29 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct pci_ahci_softc*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct pci_devinst*,int) ;
 int FUNC_10 (struct pci_devinst*,int,int ,int ) ;
 int FUNC_11 (struct pci_devinst*) ;
 int FUNC_12 (struct pci_devinst*,int ,int) ;
 int FUNC_13 (struct pci_devinst*,int ,int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (char*,int,char*,int,int,...) ;
 int VAR_30 ;
 scalar_t__ FUNC_16 (char*) ;

__attribute__((used)) static int
FUNC_17(struct pci_devinst *VAR_31, char *VAR_32, int VAR_33)
{
 char VAR_34[sizeof("XX:X:X")];
 struct blockif_ctxt *VAR_35;
 struct pci_ahci_softc *VAR_36;
 int VAR_37, VAR_38;
 u_char VAR_39[VAR_18];

 VAR_37 = 0;

 if (VAR_32 == ((void*)0)) {
  FUNC_6(VAR_30, "pci_ahci: backing device required\n");
  return (1);
 }





 VAR_36 = FUNC_4(1, sizeof(struct pci_ahci_softc));
 VAR_31->pi_arg = VAR_36;
 VAR_36->asc_pi = VAR_31;
 VAR_36->ports = VAR_19;





 VAR_36->port[0].atapi = VAR_33;





 FUNC_15(VAR_34, sizeof(VAR_34), "%d:%d", VAR_31->pi_slot, VAR_31->pi_func);
 VAR_35 = FUNC_3(VAR_32, VAR_34);
 if (VAR_35 == ((void*)0)) {
  VAR_37 = 1;
  goto open_fail;
 }
 VAR_36->port[0].bctx = VAR_35;
 VAR_36->port[0].pr_sc = VAR_36;





    FUNC_0(VAR_32, (CC_LONG)FUNC_16(VAR_32), VAR_39);
    FUNC_15(VAR_36->port[0].ident, VAR_16, "BHYVE-%02X%02X-%02X%02X-%02X%02X",
     VAR_39[0], VAR_39[1], VAR_39[2], VAR_39[3], VAR_39[4], VAR_39[5]);





 FUNC_8(&VAR_36->port[0]);

 FUNC_14(&VAR_36->mtx, ((void*)0));


 VAR_38 = VAR_36->port[0].ioqsz;
 if (VAR_38 > 32)
  VAR_38 = 32;
 --VAR_38;
 VAR_36->cap = VAR_1 | VAR_10 | VAR_12 |
     VAR_9 | VAR_13 | VAR_7 |
     VAR_6 | VAR_8 | (0x3 << VAR_2)|
     VAR_4 | VAR_11 | VAR_5 |
     (((unsigned) VAR_38) << VAR_3) | VAR_14 |
     (((unsigned) VAR_36->ports) - 1);


 VAR_36->pi = 1;
 VAR_36->vs = 0x10300;
 VAR_36->cap2 = VAR_0;
 FUNC_1(VAR_36);

 FUNC_12(VAR_31, VAR_24, 0x2821);
 FUNC_12(VAR_31, VAR_27, 0x8086);
 FUNC_13(VAR_31, VAR_23, VAR_21);
 FUNC_13(VAR_31, VAR_26, VAR_28);
 FUNC_13(VAR_31, VAR_25, VAR_22);
 FUNC_9(VAR_31, 1);
 FUNC_10(VAR_31, 5, VAR_20,
  ((uint64_t) (VAR_15 + VAR_36->ports * VAR_17)));

 FUNC_11(VAR_31);

open_fail:
 if (VAR_37) {
  if (VAR_36->port[0].bctx != ((void*)0))
   FUNC_2(VAR_36->port[0].bctx);
  FUNC_7(VAR_36);
 }

 return (VAR_37);
}
