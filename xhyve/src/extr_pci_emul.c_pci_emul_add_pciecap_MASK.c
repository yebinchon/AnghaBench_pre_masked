
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pciecap {int pcie_capabilities; int link_capabilities; int link_status; int capid; } ;
struct pci_devinst {int dummy; } ;
typedef int pciecap ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pciecap*,int) ;
 int FUNC_2 (struct pci_devinst*,int *,int) ;

int
FUNC_3(struct pci_devinst *VAR_3, int VAR_4)
{
 int VAR_5;
 struct pciecap VAR_6;

 FUNC_0(sizeof(struct pciecap) == 60);

 if (VAR_4 != VAR_1)
  return (-1);

 FUNC_1(&VAR_6, sizeof(VAR_6));

 VAR_6.capid = VAR_2;
 VAR_6.pcie_capabilities = VAR_0 | VAR_1;
 VAR_6.link_capabilities = 0x411;
 VAR_6.link_status = 0x11;

 VAR_5 = FUNC_2(VAR_3, (u_char *)&VAR_6, sizeof(VAR_6));
 return (VAR_5);
}
