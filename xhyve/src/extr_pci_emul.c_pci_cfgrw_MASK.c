
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct slotinfo {TYPE_1__* si_funcs; } ;
struct pci_devinst {TYPE_2__* pi_bar; struct pci_devemu* pi_d; } ;
struct pci_devemu {int (* pe_cfgread ) (int,struct pci_devinst*,int,int,int*) ;scalar_t__ (* pe_cfgwrite ) (int,struct pci_devinst*,int,int,int) ;} ;
struct businfo {struct slotinfo* slotinfo; } ;
struct TYPE_4__ {int size; int type; int addr; } ;
struct TYPE_3__ {struct pci_devinst* fi_devi; } ;


 int FUNC_0 (struct pci_devinst*,int,int) ;
 int FUNC_1 (struct pci_devinst*,int,int,int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct businfo** VAR_9 ;
 int FUNC_3 (struct pci_devinst*,int,int,int) ;
 int FUNC_4 (struct pci_devinst*,int,int,int) ;
 int FUNC_5 (int,int,int,int,int*) ;
 scalar_t__ FUNC_6 (struct pci_devinst*,int) ;
 int FUNC_7 (struct pci_devinst*,int,int) ;
 int FUNC_8 (int,struct pci_devinst*,int,int,int*) ;
 scalar_t__ FUNC_9 (int,struct pci_devinst*,int,int,int) ;
 int FUNC_10 (struct pci_devinst*,int,int,int const) ;

__attribute__((used)) static void
FUNC_11(int VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16,
 uint32_t *VAR_17)
{
 struct businfo *VAR_18;
 struct slotinfo *VAR_19;
 struct pci_devinst *VAR_20;
 struct pci_devemu *VAR_21;
 int VAR_22, VAR_23;
 uint64_t VAR_24, VAR_25, VAR_26;

 if ((VAR_18 = VAR_9[VAR_12]) != ((void*)0)) {
  VAR_19 = &VAR_18->slotinfo[VAR_13];
  VAR_20 = VAR_19->si_funcs[VAR_14].fi_devi;
 } else
  VAR_20 = ((void*)0);





 if (VAR_20 == ((void*)0) || (VAR_16 != 1 && VAR_16 != 2 && VAR_16 != 4) ||
     (VAR_15 & (VAR_16 - 1)) != 0) {
  if (VAR_11)
   *VAR_17 = 0xffffffff;
  return;
 }





 if (VAR_15 >= VAR_8 + 1) {
  if (VAR_11) {
   *VAR_17 = 0xffffffff;






   if (VAR_15 <= VAR_8 + 4)
    *VAR_17 = 0x00000000;
  }
  return;
 }

 VAR_21 = VAR_20->pi_d;




 if (VAR_11) {

  if (VAR_21->pe_cfgread != ((void*)0)) {
   VAR_23 = VAR_21->pe_cfgread(VAR_10, VAR_20, VAR_15, VAR_16,
       VAR_17);
  } else {
   VAR_23 = 1;
  }

  if (VAR_23)
   *VAR_17 = FUNC_0(VAR_20, VAR_15, VAR_16);

  FUNC_5(VAR_12, VAR_13, VAR_15, VAR_16, VAR_17);
 } else {

  if (VAR_21->pe_cfgwrite != ((void*)0) &&
      (*VAR_21->pe_cfgwrite)(VAR_10, VAR_20, VAR_15, VAR_16, *VAR_17) == 0)
   return;




  if (VAR_15 >= FUNC_2(0) && VAR_15 < FUNC_2(VAR_7 + 1)) {




   if (VAR_16 != 4 || (VAR_15 & 0x3) != 0)
    return;
   VAR_22 = (VAR_15 - FUNC_2(0)) / 4;
   VAR_26 = ~(VAR_20->pi_bar[VAR_22].size - 1);
   switch (VAR_20->pi_bar[VAR_22].type) {
   case 128:
    VAR_20->pi_bar[VAR_22].addr = VAR_25 = 0;
    break;
   case 132:
    VAR_24 = *VAR_17 & VAR_26;
    VAR_24 &= 0xffff;
    VAR_25 = VAR_24 | VAR_0;



    if (VAR_24 != VAR_20->pi_bar[VAR_22].addr) {
     FUNC_10(VAR_20, VAR_24, VAR_22,
          132);
    }
    break;
   case 131:
    VAR_24 = VAR_25 = *VAR_17 & VAR_26;
    VAR_25 |= VAR_4 | VAR_1;
    if (VAR_24 != VAR_20->pi_bar[VAR_22].addr) {
     FUNC_10(VAR_20, VAR_24, VAR_22,
          131);
    }
    break;
   case 130:
    VAR_24 = VAR_25 = *VAR_17 & VAR_26;
    VAR_25 |= VAR_4 | VAR_2 |
           VAR_3;
    if (VAR_24 != (uint32_t)VAR_20->pi_bar[VAR_22].addr) {
     FUNC_10(VAR_20, VAR_24, VAR_22,
          130);
    }
    break;
   case 129:
    VAR_26 = ~(VAR_20->pi_bar[VAR_22 - 1].size - 1);
    VAR_24 = ((uint64_t)*VAR_17 << 32) & VAR_26;
    VAR_25 = VAR_24 >> 32;
    if (VAR_25 != VAR_20->pi_bar[VAR_22 - 1].addr >> 32) {
     FUNC_10(VAR_20, VAR_24, VAR_22 - 1,
          129);
    }
    break;
   }
   FUNC_7(VAR_20, VAR_15, ((uint32_t) VAR_25));

  } else if (FUNC_6(VAR_20, VAR_15)) {
   FUNC_3(VAR_20, VAR_15, VAR_16, *VAR_17);
  } else if (VAR_15 >= VAR_5 && VAR_15 < VAR_6) {
   FUNC_4(VAR_20, VAR_15, *VAR_17, VAR_16);
  } else {
   FUNC_1(VAR_20, VAR_15, *VAR_17, VAR_16);
  }
 }
}
