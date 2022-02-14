
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int dummy; } ;
struct pci_devinst {int pi_func; int pi_slot; struct uart_softc* pi_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char**,char*,int ,int ) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pci_devinst*,int ,int ,int ) ;
 int FUNC_4 (struct pci_devinst*) ;
 int FUNC_5 (struct pci_devinst*,int ,int ) ;
 int FUNC_6 (struct pci_devinst*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct uart_softc* FUNC_7 (int ,int ,struct pci_devinst*) ;
 scalar_t__ FUNC_8 (struct uart_softc*,char*,char*) ;

__attribute__((used)) static int
FUNC_9(struct pci_devinst *VAR_11, char *VAR_12)
{
 struct uart_softc *VAR_13;
 char *VAR_14;

 FUNC_3(VAR_11, 0, VAR_2, VAR_7);
 FUNC_4(VAR_11);


 FUNC_5(VAR_11, VAR_5, VAR_0);
 FUNC_5(VAR_11, VAR_6, VAR_1);
 FUNC_6(VAR_11, VAR_4, VAR_3);

 VAR_13 = FUNC_7(VAR_8, VAR_9, VAR_11);
 VAR_11->pi_arg = VAR_13;

 FUNC_0(&VAR_14, "pci uart at %d:%d", VAR_11->pi_slot, VAR_11->pi_func);
 if (FUNC_8(VAR_13, VAR_12, VAR_14) != 0) {
  FUNC_1(VAR_10, "Unable to initialize backend '%s' for %s\n", VAR_12, VAR_14);
  FUNC_2(VAR_14);
  return (-1);
 }

 FUNC_2(VAR_14);
 return (0);
}
