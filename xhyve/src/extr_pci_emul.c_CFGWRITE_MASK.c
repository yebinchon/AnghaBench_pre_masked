
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct pci_devinst {int dummy; } ;


 int FUNC_0 (struct pci_devinst*,int,int ) ;
 int FUNC_1 (struct pci_devinst*,int,scalar_t__) ;
 int FUNC_2 (struct pci_devinst*,int,int ) ;

__attribute__((used)) static __inline void
FUNC_3(struct pci_devinst *VAR_0, int VAR_1, uint32_t VAR_2, int VAR_3)
{

 if (VAR_3 == 1)
  FUNC_2(VAR_0, VAR_1, ((uint8_t) VAR_2));
 else if (VAR_3 == 2)
  FUNC_0(VAR_0, VAR_1, ((uint16_t) VAR_2));
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
