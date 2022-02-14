
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pci_devinst {TYPE_1__* pi_bar; } ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 (struct pci_devinst*,int,int) ;
 int FUNC_1 (struct pci_devinst*,int,int,int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pci_devinst*) ;
 int FUNC_3 (struct pci_devinst*,int ) ;
 int FUNC_4 (struct pci_devinst*) ;
 int FUNC_5 (struct pci_devinst*) ;
 int FUNC_6 (struct pci_devinst*,int) ;
 int FUNC_7 (struct pci_devinst*,int) ;

__attribute__((used)) static void
FUNC_8(struct pci_devinst *VAR_4, int VAR_5, uint32_t VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_10 = FUNC_3(VAR_4, VAR_2);
 VAR_9 = (VAR_5 & 0x3) * 8;
 VAR_14 = 0xFFFFF880 >> VAR_9;

 VAR_13 = FUNC_0(VAR_4, VAR_5, VAR_7);
 VAR_6 &= ~VAR_14;
 VAR_6 |= (VAR_13 & VAR_14);
 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);

 VAR_11 = FUNC_3(VAR_4, VAR_2);
 VAR_12 = VAR_10 ^ VAR_11;





 for (VAR_8 = 0; VAR_8 <= VAR_3; VAR_8++) {
  switch (VAR_4->pi_bar[VAR_8].type) {
   case 128:
   case 129:
    break;
   case 132:

    if (VAR_12 & VAR_1) {
     if (FUNC_5(VAR_4))
      FUNC_6(VAR_4, VAR_8);
     else
      FUNC_7(VAR_4, VAR_8);
    }
    break;
   case 131:
   case 130:

    if (VAR_12 & VAR_0) {
     if (FUNC_2(VAR_4))
      FUNC_6(VAR_4, VAR_8);
     else
      FUNC_7(VAR_4, VAR_8);
    }
    break;
  }
 }





 FUNC_4(VAR_4);
}
