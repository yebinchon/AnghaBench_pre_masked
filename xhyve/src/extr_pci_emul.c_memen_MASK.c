
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pci_devinst {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_devinst*,int ) ;

__attribute__((used)) static int
FUNC_1(struct pci_devinst *VAR_2)
{
 uint16_t VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);

 return (VAR_3 & VAR_0);
}
