
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pci_devinst {int pi_capend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_devinst*,int ) ;

__attribute__((used)) static int
FUNC_1(struct pci_devinst *VAR_3, int VAR_4)
{
 uint16_t VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_2);
 if ((VAR_5 & VAR_1) != 0) {
  if (VAR_4 >= VAR_0 && VAR_4 <= VAR_3->pi_capend)
   return (1);
 }
 return (0);
}
