
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct pci_devinst {TYPE_1__* pi_bar; } ;
typedef enum pcibar_type { ____Placeholder_pcibar_type } pcibar_type ;
struct TYPE_2__ {int type; int addr; int size; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (long) ;
 int FUNC_3 (int*,int,int,int*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct pci_devinst*,int ,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct pci_devinst*,int) ;

int
FUNC_7(struct pci_devinst *VAR_14, int VAR_15, uint64_t VAR_16,
      enum pcibar_type VAR_17, uint64_t VAR_18)
{
 int VAR_19;
 uint64_t *VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 FUNC_1(VAR_15 >= 0 && VAR_15 <= VAR_7);

 VAR_22 = 0;
 VAR_21 = 0;

 if ((VAR_18 & (VAR_18 - 1)) != 0)
  VAR_18 = 1UL << FUNC_2((long) VAR_18);


 if (VAR_17 == 132) {
  if (VAR_18 < 4)
   VAR_18 = 4;
 } else {
  if (VAR_18 < 16)
   VAR_18 = 16;
 }

 switch (VAR_17) {
 case 128:
  VAR_20 = ((void*)0);
  VAR_22 = VAR_23 = VAR_24 = 0;
  break;
 case 132:
  VAR_20 = &VAR_11;
  VAR_21 = VAR_8;
  VAR_23 = VAR_0;
  VAR_24 = VAR_1;
  break;
 case 130:







  if (VAR_18 > 32 * 1024 * 1024) {



   if (VAR_18 == 0x100000000UL)
    VAR_20 = &VAR_16;
   else
    VAR_20 = &VAR_13;
   VAR_21 = VAR_10;
   VAR_23 = VAR_4;
   VAR_24 = VAR_6 | VAR_3 |
     VAR_5;
   break;
  } else {
   VAR_20 = &VAR_12;
   VAR_21 = VAR_9;
   VAR_23 = VAR_4;
   VAR_24 = VAR_6 | VAR_3;
  }
  break;
 case 131:
  VAR_20 = &VAR_12;
  VAR_21 = VAR_9;
  VAR_23 = VAR_4;
  VAR_24 = VAR_6 | VAR_2;
  break;
 case 129:
  FUNC_5("pci_emul_alloc_base: invalid bar type %d\n", VAR_17);
  FUNC_1(0);
 }

 if (VAR_20 != ((void*)0)) {
  VAR_19 = FUNC_3(VAR_20, VAR_21, VAR_18, &VAR_22);
  if (VAR_19 != 0)
   return (VAR_19);
 }

 VAR_14->pi_bar[VAR_15].type = VAR_17;
 VAR_14->pi_bar[VAR_15].addr = VAR_22;
 VAR_14->pi_bar[VAR_15].size = VAR_18;


 VAR_25 = (VAR_22 & VAR_23) | VAR_24;
 FUNC_4(VAR_14, FUNC_0(VAR_15), ((uint32_t) VAR_25));

 if (VAR_17 == 130) {
  FUNC_1(VAR_15 + 1 <= VAR_7);
  VAR_14->pi_bar[VAR_15 + 1].type = 129;
  FUNC_4(VAR_14, FUNC_0(VAR_15 + 1), VAR_25 >> 32);
 }

 FUNC_6(VAR_14, VAR_15);

 return (0);
}
